#include "MappingAdress.h"
using namespace Composant;
void MappingAdress::setID_Adress(int n)
{
	this->ID_Adress = n;
}
void MappingAdress::setstreet(String^ s)
{
	this->street = s;
}
void MappingAdress::setnumber(int n)
{
	this->number = n;
}
void MappingAdress::setID_Customer(int n)
{
	this->ID_Customer = n;
}
void MappingAdress::setID_city(int n)
{
	this->ID_city = n;
}
void MappingAdress::setID_country(int  n)
{
	this->ID_country = n;
}
void MappingAdress::setcity(String^ s)
{
	this->city = s;
}
void MappingAdress::setcountry(String^ s)
{
	this->country = s;
}

System::String^ MappingAdress::SelectWithId(void)
{
	return "";
}
System::String^ MappingAdress::SelectAll(void)
{
	//return "SELECT [ville], [ID_Adress], [ID_Client] FROM [DB_P6].[dbo].[TB_P6] SELECT SCOPE_IDENTITY();";
	return "";
}
System::String^ MappingAdress::InsertCity(void)
{
	return "INSERT INTO [gestion].[dbo].[City] (cityName, ID_Country) VALUES ('" + this->city + "', '" + this->ID_country + "'); SELECT SCOPE_IDENTITY();";

}
System::String^ MappingAdress::InsertCountry(void)
{
	return "INSERT INTO [gestion].[dbo].[Country] (countryName) VALUES('" + this->country +"');" + "SELECT SCOPE_IDENTITY();";
}
System::String^  MappingAdress::Insert(void)
{
	return "INSERT INTO [gestion].[dbo].[adresse] (ville, ID_Client, ID_City) VALUES ('" + this->street + "', '" + this->ID_Customer+ "', '" + this->ID_city + "'); SELECT SCOPE_IDENTITY();";

	//return "INSERT INTO [gestion].[dbo].[adresse] (ville,ID_Client,ID_City) VALUES ('"   +this->street+ "', '" +this->ID_Customer+ "', '" +this->ID_city+"'); SELECT SCOPE_IDENTITY();";
}
System::String^ MappingAdress::Delete(void)
{

	return "DELETE FROM [gestion].[dbo].[adresse] WHERE[ID_Client] = " + this->ID_Customer + ";";
}
System::String^ MappingAdress::DeleteCountry(void)
{

	return "DELETE FROM [gestion].[dbo].[Country] WHERE[ID_Country] = " + this->ID_country + ";";
}
System::String^ MappingAdress::DeleteCity(void)
{

	return "DELETE FROM [gestion].[dbo].[City] WHERE[ID_city] = " + this->ID_city + ";";
}
System::String^ MappingAdress::Update(void)
{
	return "UPDATE [gestion].[dbo].[Country] SET[ville] = '" + this->street + "' WHERE[ID_Country] =" + this->ID_Adress+ "; ";
	
}
System::String^ MappingAdress::UpdateCountry(void)
{
	//return "UPDATE [gestion].[dbo].[adresse] SET[column1] = 'new_value1',[column2] = 'new_value2', WHERE[ID_Adress] = '" + this->ID_Adress + "'; ";
	return "UPDATE [gestion].[dbo].[Country] SET[countryName] = '" + this->country + "' WHERE[ID_Country] =" + this->ID_country + "; ";
}
System::String^ MappingAdress::UpdateCity(void)
{
	//return "UPDATE [gestion].[dbo].[adresse] SET[column1] = 'new_value1',[column2] = 'new_value2', WHERE[ID_Adress] = '" + this->ID_Adress + "'; ";
	return "UPDATE [gestion].[dbo].[City] SET[cityName] = '" + this->city + "' WHERE[ID_City] =" + this->ID_city + "; ";
}