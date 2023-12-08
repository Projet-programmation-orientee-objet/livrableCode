#pragma once
#include "CNX.h"
namespace Services
{
	ref class MySQLservice
	{
	protected:
		Composant::CNX^ dbConnexion;
	public:
		MySQLservice() { this->dbConnexion = gcnew Composant::CNX(); };
	};

}