#pragma once
#include "CNX.h"
#include "MappingAdress.h"
#include "MapCustomer.h"
#include "MySQLservice.h"
namespace Services
{
	ref class ClientService :public Services::MySQLservice
	{
	public:
		Composant::MapCustomer^ customer;
		Composant::MappingAdress^ adress;
	public:
		ClientService(void);
		System::Data::DataSet^ selectAllCustomers();
		void supprimerClient();
		void ModifierClient();
		void addCustomer();
	};
}
