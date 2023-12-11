#pragma once

using namespace System;

namespace Composant {
    ref class MapStock
    {
    private:
        String^ nom;
        int idProduct;
        int idStock;
        //----------------------------------------------------------------------
        int quantity;
        int quantityMax;

    public:

        //seters :

        MapStock(void);
        void setIdStock(int);
        void setIdProduct(int);
        //----------------------------------------------------------------------
        void setQuantity(int);
        void setQuantityMax(int);
        void setNom(String^ nom);
        //getters :

        System::String^ getIdProduit();
        System::String^ getIdStock();
        //----------------------------------------------------------------------
        //----------------------------------------------------------------------
        System::String^ getQuantity();
        System::String^ getQuantityMax();
        //----------------------------------------------------------------------
        //commands :

        System::String^ selectStock();
        System::String^ selectAllStock();

        System::String^ insertStock();
        System::String^ insertStocked();

        System::String^ deleteStock();

        System::String^ updateStocked();
        System::String^ updateStock();

    };
}
