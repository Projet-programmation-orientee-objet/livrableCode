#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

namespace Composant {
    ref class MapProduct
    {
    private:
        int productId;
        int tvaId;
        int colorId;
        String^ tvaClass;
        String^ productName;
        String^ productDescription;
        String^ color;
        float unitPrice;
        float tvaValue;

    public:
        MapProduct();
        void setProductId(int id);
        void setTvaId(int id);
        void setColorId(int id);
        void setTvaClass(String^ tvaClass);
        void setProductName(String^ name);
        void setProductDescr(String^ descr);
        void setProductColor(String^ color);
        void setUnitPrice(float price);
        void setTvaValue(float value);
        String^ selectAll(String^ dataTableName);
        String^ selectWithId(String^ dataTableName);

        int getProductId();
        int getTvaId();
        String^ getTvaClass();
        String^ getProductName();
        String^ getProductDescr();
        String^ getProductColor();
        float getUnitPrice();
        float getTvaValue();

        String^ insertProduct();
        String^ insertColor();
        String^ insertColored();
        String^ insertTva();

        String^ deleteProduct();

        String^ updateProduct();
        String^ updtateColored();
    };
}
