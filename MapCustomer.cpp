#include "MapCustomer.h"

using namespace Composant;
MapCustomer::MapCustomer() :birthDate("") , lastName(""), firstName(""), phoneNumber(""), mail(""), ID_Client(-1){}
System::String^ MapCustomer::SelectAll(void)
{
	return "SELECT Clients.ID_Client ,Clients.lastName,Clients.firstName,Clients.phoneNumber,Clients.mail,"+
		"Addresses.ID_Adress, Addresses.ville, Cities.ID_City, Cities.cityName, Countries.ID_Country, Countries.countryName FROM gestion.dbo.Client AS Clients INNER JOIN gestion.dbo.adresse AS Addresses ON Clients.ID_Client = Addresses.ID_Client INNER JOIN gestion.dbo.City AS Cities ON Addresses.ID_City = Cities.ID_City  INNER JOIN gestion.dbo.Country AS Countries ON Cities.ID_City = Countries.ID_Country; ";
}
String^ MapCustomer::SelectWithId(int id)
{
	return "SELECT Clients.ID_Client ,Clients.lastName,Clients.firstName,Clients.phoneNumber,Clients.mail, Addresses.ID_Adress,Addresses.ville FROM gestion.dbo.Client AS Clients INNER JOIN gestion.dbo.adresse AS Addresses ON Clients.ID_Client = Addresses.ID_Client WHERE  Clients.ID_Client = id";
}
System::String^ MapCustomer::Insert(void)
{
	return "INSERT INTO gestion.dbo.Client ( lastName,firstName,phoneNumber,mail) VALUES('"+ this->lastName + "','" +this->firstName + "','" +this->phoneNumber + "','" + this->mail + "');"+"SELECT SCOPE_IDENTITY();";
}
System::String^ MapCustomer::Delete(void)
{
	//int clientId = this->ID_Client;

    // Using a parameterized query to avoid SQL injection
    
	return "DELETE FROM gestion.dbo.Client WHERE ID_Client  = "+ this->ID_Client+";";
}
System::String^ MapCustomer::Update(void)
{
	return "UPDATE gestion.dbo.Client SET lastName = '"+this->lastName+"', firstName = ' " + this->firstName + " ', phoneNumber = ' " + this->phoneNumber + " ', mail = ' " + this->mail + " ' WHERE ID_Client =" + this->ID_Client ;
}
void MapCustomer::setLastName(String^ s) { this->lastName = s; }
void MapCustomer::setFirstName(String^ s) { this->firstName = s; }
void MapCustomer::setId(int n) { this->ID_Client = n; }
void MapCustomer::setPhone(String^ s) { this->phoneNumber = s; }
void MapCustomer::setMail(String^ s) { this->mail = s; }
void MapCustomer::setBirthDate(String^ s) { this->birthDate = s; }
