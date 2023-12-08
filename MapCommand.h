#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

namespace Composant {
	ref class MapCommand
	{
	private:
		String^ payementDate;
		String^ receivedPayementDate;
		String^ presumeDate;
		String^ emissionDate;
		String^ payementMeanName;
		int idCustomer;
		int idPayementMeans;
		int idProduct;
		int valeur;
	public:
		MapCommand();
		void setPayementDate(String^ date);
		void setRecPayDate(String^ date);
		void setPresumeDate(String^ date);
		void setEmissionDate(String^ date);
		void setPayMeanName(String^ name);
		void setIdCustomer(int id);
		void setIdPaymentMeans(int id);
		void setIdProduct(int id);
		String^ getPayementDate();
		String^ getRecPayDate();
		String^ getPresumeDate();
		String^ getEmissionDate();
		String^ getPayMeanName();
		int getIdCustomer();
		int getIdPaymentMeans();
		int getIdProduct();
		String^ selectAll(String^ dataTableName);
		String^ selectWithId(String^ dataTableName);
		String^ Insert();
		String^ Delete();
		String^ Update();
		String^ createReference();
	};
}
