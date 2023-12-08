#pragma once
namespace Composant
{
    ref class CNX
    {
    private:
        System::String^ sSql;
        System::String^ sCnx;
        System::Data::SqlClient::SqlConnection^ oCnx;
        System::Data::SqlClient::SqlCommand^ oCmd;
        System::Data::SqlClient::SqlDataAdapter^ oDA;
        System::Data::DataSet^ tabClient;
        System::Data::DataSet^ tabAdress;
        System::Data::DataSet^ tabCommand;
    public:
        CNX();
        System::Data::DataSet^ getData(System::String^ sSql, System::String^ sDataTableName);
        int modifyData(System::String^);
        void modifyDataNONSCALAr(System::String^);
        System::Data::DataSet^ gettabClient() { return this->tabClient; }
    };
}