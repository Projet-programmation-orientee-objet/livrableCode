#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;


namespace Composant {
    ref class SQLio
    {
    private:
        String^ sConn;
        String^ sComm;
        MySqlConnection^ oConn;
        MySqlCommand^ oCmd;
        MySqlDataAdapter^ oDa;
        DataSet^ oDs;
    public:
        SQLio();
        int executeCommScalar(System::String^ command);
        void executeComm(System::String^ command);
        DataSet^ executeCommDs(System::String^ command, System::String^ dataTable);
    };
}