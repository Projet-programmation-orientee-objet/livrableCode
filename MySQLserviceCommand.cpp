#include "MySQLserviceCommand.h"
using namespace Service;
using namespace Composant;
MySQLserviceCommand::MySQLserviceCommand()
{
    adressMapper=gcnew MappingAdress();
   customerMapper=gcnew MapCustomer();
     commandMapper=gcnew MapCommand();
    productMapper =gcnew MapProduct();
}
DataSet^ MySQLserviceCommand::selectAllCommands(String^ dataTable)
{
	return this->dbConnexion->getData(this->commandMapper->selectAll(), dataTable);
}
DataSet^ MySQLserviceCommand::selectAllProducts(String^ dataTable)
{
    return this->dbConnexion->getData(this->productMapper->selectAll(), dataTable);
}
void  MySQLserviceCommand::createReference() {
   // String^ reference = this->customerMapper->firstName->Substring(0, 2) + this->customerMapper->lastName->Substring(0, 2) + this->commandMapper->getPayementDate()->Substring(0, 4) + this->adressMapper->city->Substring(0, 3); 
    String^ reference = this->customerMapper->firstName->Substring(0, 2) + this->customerMapper->lastName->Substring(0, 2) + this->adressMapper->city->Substring(0, 3);

    this->commandMapper->setreference(reference);
 
}
void   MySQLserviceCommand::CreerCommande(List<Tuple<int, int>^>^ listeproduits)
{
    
    for each (Tuple<int, int> ^ produit in listeproduits)
    {
        this->productMapper->setProductId(produit->Item1);
        this->dbConnexion->modifyDataNONSCALAr(this->productMapper->Decrement(produit->Item2));
    }
    this->commandMapper->setIdPaymentMeans(this->dbConnexion->modifyData(this->commandMapper->InsertPaymentMethod()));
    this->createReference();
    this->dbConnexion->modifyDataNONSCALAr(this->commandMapper->Insert());
  
}
void   MySQLserviceCommand::SupprimerCommande(List<Tuple<int, int>^>^ listeproduits)
{

    for each (Tuple<int, int> ^ produit in listeproduits)
    {
        this->productMapper->setProductId(produit->Item1);
        this->dbConnexion->modifyDataNONSCALAr(this->productMapper->Increment(produit->Item2));
    }
    this->dbConnexion->modifyDataNONSCALAr(this->commandMapper->Delete());
}
