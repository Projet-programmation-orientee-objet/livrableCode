#include "CNX.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
Composant::CNX::CNX()
{
	this->sCnx = "Data Source=\\SQLEXPRESS;Initial Catalog=gestion;Integrated Security=True"; // à completer le data source 

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
	try
	{
		this->sSql = sSql;
		this->oCmd->CommandText = this->sSql;
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