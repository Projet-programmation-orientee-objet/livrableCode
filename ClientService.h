#pragma once
#include "CNX.h"
#include "MappingAdress.h"
#include "MapCustomer.h"
#include "MapCommand.h"
#include "MySQLservice.h"
#using <mscorlib.dll> //pointeur sur fonction
using namespace System::Collections::Generic;
public delegate String^ DelegateIncrement(int n);
public delegate void DelegateIDProduct(int n);
namespace Services
{
	ref class ClientService :public Services::MySQLservice
	{
	public:
		Composant::MapCustomer^ customer;
		Composant::MappingAdress^ adress;
		Composant::MapCommand^ command;
	public:
		ClientService(void);
		System::Data::DataSet^ selectAllCustomers(String^ );
		void supprimerClient(DelegateIncrement^, DelegateIDProduct^);
		void ModifierClient();
		void addCustomer();
	};
}
