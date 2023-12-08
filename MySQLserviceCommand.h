#pragma once
#include <vector>
#include "MappingAdress.h"
#include "MapCustomer.h"
#include "MapCommand.h"
#include "MapProduct.h"
#include "MySQLservice.h"
using namespace System::Collections::Generic;


namespace Service {
    ref class MySQLserviceCommand:public  Services::MySQLservice
    {
    public:
        Composant::MappingAdress^ adressMapper;
        Composant::MapCustomer^ customerMapper;
        Composant::MapCommand^ commandMapper;
        Composant::MapProduct^ productMapper;
    public:
        MySQLserviceCommand();
        DataSet^ selectAllProducts(String^ dataTable);
        DataSet^ selectAllCommands(String^ dataTable);
        void CreerCommande(List<Tuple<int, int>^>^);
        void SupprimerCommande(List<Tuple<int, int>^>^);
        void  createReference();
      //  DataSet^ selectCommandWithCondition(String^ dataTable, vector<String^> conditions);
       // void addCommand(vector<String^>  commandData);
        //void modifyCommand(vector<String^> commandData);
        //void deleteCommand(int commandID);
        //void createBill(vector<String^> billData);
    };
}
