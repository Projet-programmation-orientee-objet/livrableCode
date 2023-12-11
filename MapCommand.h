#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;

namespace Composant {
    ref class MapCommand
    {
    private:
        int ID;
        String^ reference;
        String^ payementDate;
        String^ receivedPayementDate;
        String^ presumeDate;
        String^ emissionDate;
        String^ payementMeanName;
        int idPayementMeans;
        int idProduit;
        int idCustomer;
    public:
        MapCommand();
        int getID() ;
        String^ getPayementDate();
        void setPayementDate(String^ date);
        void setRecPayDate(String^ date);
        void setPresumeDate(String^ date);
        void setEmissionDate(String^ date);
        void setIdProduit(int);
        void setPayMeanName(String^ name);
        void setIdCustomer(int id);
        void setIdPaymentMeans(int id);
        void setreference(String^);
        void setID(int);
        String^ selectAll();
        String^ selectWithId( int id);
        String^ selectWithIdCustomer();
        String^ selectAsked();
        String^ Insert();
        String^ InsertPaymentMethod();
        String^ InsertAsked(int);
        String^ Delete();
        String^ Update();
        String^ GetBill(void);
    };
}


