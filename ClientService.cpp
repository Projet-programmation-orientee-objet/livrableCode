#include "ClientService.h"
using namespace Services;

ClientService::ClientService(void)
{
	this->customer = gcnew Composant::MapCustomer();
	this->adress = gcnew Composant::MappingAdress();
}
System::Data::DataSet^ ClientService::selectAllCustomers()
{
	//this->connexion->getData(this->clients->Select(),"RES1", "RES2");
	//this->connexion->getData(this->adress->Select(), "RES2");
	
	return this->dbConnexion->getData(this->customer->SelectAll(), "RES1", "RES2");
}
void  ClientService::addCustomer()
{
	try
	{
		//this->customer->setId;
		this->adress->setID_Customer(this->dbConnexion->modifyData(this->customer->Insert()));
		this->adress->setID_country(this->dbConnexion->modifyData(this->adress->InsertCountry()));
		this->adress->setID_city(this->dbConnexion->modifyData(this->adress->InsertCity()));
		this->adress->setID_Adress(this->dbConnexion->modifyData(this->adress->Insert()));
	}
	catch (Exception^ e)
	{
		Console::WriteLine("An error occurred: '{0}'", e);
	}
}
void  ClientService::supprimerClient()
{
	this->dbConnexion->modifyDataNONSCALAr(this->adress->Delete());
	this->dbConnexion->modifyDataNONSCALAr(this->adress->DeleteCity());
	this->dbConnexion->modifyDataNONSCALAr(this->adress->DeleteCountry());
	this->dbConnexion->modifyDataNONSCALAr(this->customer->Delete());

	
	
}
void  ClientService::ModifierClient()
{
	
	this->dbConnexion->modifyDataNONSCALAr(this->customer->Update());
	this->dbConnexion->modifyDataNONSCALAr(this->adress->Update());
	this->dbConnexion->modifyDataNONSCALAr(this->adress->UpdateCity());
	this->dbConnexion->modifyDataNONSCALAr(this->adress->UpdateCountry());
}