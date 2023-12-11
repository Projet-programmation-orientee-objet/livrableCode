#include "ClientService.h"
using namespace Services;

ClientService::ClientService(void)
{
	this->customer = gcnew Composant::MapCustomer();
	this->command = gcnew Composant::MapCommand();
	this->adress = gcnew Composant::MappingAdress();
}
System::Data::DataSet^ ClientService::selectAllCustomers(String^ tablename)
{
	return this->dbConnexion->getData(this->customer->SelectAll(), tablename);
}
void  ClientService::addCustomer()
{
	try
	{
		this->adress->setID_Customer(this->dbConnexion->modifyData(this->customer->Insert()));
		this->adress->setID_country(this->dbConnexion->modifyData(this->adress->InsertCountry()));
		this->adress->setID_city(this->dbConnexion->modifyData(this->adress->InsertCity()));
		this->adress->setID_Adress(this->dbConnexion->modifyData(this->adress->Insert()));
		this->dbConnexion->modifyDataNONSCALAr(this->adress->InsertLive());
	}
	catch (Exception^ e)
	{
		Console::WriteLine("An error occurred: '{0}'", e);
	}
}
void  ClientService::supprimerClient(DelegateIncrement^ IncrmeentProduct,  DelegateIDProduct^ SetIdProduct)
{
	List<Tuple<int, int>^>^ listproduit = gcnew List<Tuple<int, int>^>();
	//incrementer produit avant perdre ordre
	this->command->setIdCustomer(this->customer->ID_Client);
	this->command->setID(this->dbConnexion->modifyData(this->command->selectWithIdCustomer()));
	if (command->getID() != 0)
	{
		listproduit = this->dbConnexion->GetList(this->command->selectAsked(), "id_produit", "unity_asked");
		for each (Tuple<int, int> ^ produit in listproduit)
		{
			SetIdProduct(produit->Item1);
			this->dbConnexion->modifyDataNONSCALAr(IncrmeentProduct(produit->Item2));
		}
		
	}
	this->dbConnexion->modifyDataNONSCALAr(this->customer->Delete());
}
void  ClientService::ModifierClient()
{
	
	this->dbConnexion->modifyDataNONSCALAr(this->customer->Update());
	this->dbConnexion->modifyDataNONSCALAr(this->adress->Update());
	this->dbConnexion->modifyDataNONSCALAr(this->adress->UpdateCity());
	this->dbConnexion->modifyDataNONSCALAr(this->adress->UpdateCountry());
}
