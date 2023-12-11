#include "CNX.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
Composant::CNX::CNX()
{
	this->sCnx = "Data Source=AYA\\SQLEXPRESS;Initial Catalog=BaseDonneeProjet;Integrated Security=True";

	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->tabClient = gcnew System::Data::DataSet();
	this->tabAdress = gcnew System::Data::DataSet();
	
	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ Composant::CNX::getData(System::String^ sSql, System::String^ sDataTableName)
{
	this->tabCommand = gcnew System::Data::DataSet();
	//this->tabAdress->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	Object^ result = this->oCmd->ExecuteScalar();
	this->oCnx->Close();
	// Check if the result is not null before converting it to the desired type.
	if (result != nullptr)
	{
		this->oDA->Fill(this->tabCommand, sDataTableName);
		// Now 'count' holds the result of the SQL query.
	}
	//this->oDA->Fill(this->tabClient, sDataTableName);
	//this->oDA->Fill(this->tabAdress, sDataTableName2);
	return this->tabCommand;
}
void Composant::CNX::modifyDataNONSCALAr(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	try
	{
		//this->oDA->SelectCommand = this->oCmd;
		this->oCnx->Open();
		this->oCmd->ExecuteNonQuery();
	
	}
	catch (Exception^ ex)
	{
		// Handle exceptions appropriately (e.g., log the error)
		// You might want to throw the exception or return an error message instead of ignoring it
		Console::WriteLine("Error: " + ex->Message);
	}
	this->oCnx->Close();

}
List<Tuple<int, int>^>^ Composant::CNX::GetList( String^ sSql, String^ element1, String^ element2)
{
	List<Tuple<int, int>^>^ resultList = gcnew List<Tuple<int, int>^>();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	try
	{
		this->oCnx->Open();
		SqlDataReader^ reader = this->oCmd->ExecuteReader(CommandBehavior::CloseConnection);
		while (reader->Read())
		{
			// Assuming id_produit is of type int in the database
			int id_list = safe_cast<int>(reader[element1]);
			int id_list1 = safe_cast<int>(reader[element2]);
			resultList->Add(Tuple::Create(id_list, id_list1));
		}

		reader->Close();
	}
	catch (Exception^ ex)
	{
		Console::WriteLine("Error: " + ex->Message);
	}

	return resultList;
}
int Composant::CNX::modifyData(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	int newID = System::Convert::ToInt32 (this->oCmd->ExecuteScalar());
	this->oCnx->Close();
	return newID;
}
