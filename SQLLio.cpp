#include "SQLio.h"

using namespace System;
using namespace System::Windows::Forms;

Composant::SQLio::SQLio()
{
    this->sConn = "server=127.0.0.1;uid= ;pwd= ;database= ";  //zonne à completer avec le user (iud) , le mod de passe (pwd) et le nom de la bdd (database)

    this->sComm = "";

    this->oConn = gcnew  MySql::Data::MySqlClient::MySqlConnection(this->sConn);
    this->oCmd = gcnew  MySql::Data::MySqlClient::MySqlCommand(this->sComm, this->oConn);
    this->oDa = gcnew  MySql::Data::MySqlClient::MySqlDataAdapter();
    this->oDs = gcnew  System::Data::DataSet();
    this->oCmd->CommandType = System::Data::CommandType::Text;
}

int Composant::SQLio::executeCommScalar(System::String^ command) {
    this->sComm = sComm;
    this->oCmd->CommandText = this->sComm;
    this->oDa->SelectCommand = this->oCmd;
    this->oConn->Open();
    int newID = System::Convert::ToInt32(this->oCmd->ExecuteScalar());
    this->oConn->Close();
    return newID;
}

void Composant::SQLio::executeComm(System::String^ command) {
    this->sComm = sComm;
    this->oCmd->CommandText = this->sComm;
    this->oDa->SelectCommand = this->oCmd;
    this->oConn->Open();
    this->oCmd->ExecuteNonQuery();
    this->oConn->Close();   
}

DataSet^ Composant::SQLio::executeCommDs(System::String^ command, System::String^ dataTable) {
    this->oDs->Clear();
    this->sComm = sComm;
    this->oCmd->CommandText = this->sComm;
    this->oDa->SelectCommand = this->oCmd;
    this->oConn->Open();
    Object^ result = this->oCmd->ExecuteScalar();
    this->oConn->Close();
   if (result != nullptr)
    {
        this->oDa->Fill(this->oDs, dataTable);
    }
    return this->oDs;
}