#include "pch.h"
#include "MapProduct.h"
#include "SQLio.h"

Composant::MapProduct::MapProduct() {}

void Composant::MapProduct::setProductId(int id) {
    this->productId = id;
}

void Composant::MapProduct::setTvaId(int id) {
    this->tvaId = id;
}

void Composant::MapProduct::setTvaClass(String^ tvaClass) {
    this->tvaClass = tvaClass;
}

void Composant::MapProduct::setProductName(String^ name) {
    this->productName = name;
}

void Composant::MapProduct::setProductDescr(String^ descr) {
    this->productDescription = descr;
}

void Composant::MapProduct::setProductColor(String^ color) {
    this->color = color;
}

void Composant::MapProduct::setUnitPrice(float price) {
    this->unitPrice = price;
}

void Composant::MapProduct::setIdProduct(float value) {
    this->tvaValue = value;
}

String^ Composant::MapProduct::selectAll(String^ dataTableName) {
    return "SELECT * FROM " + dataTableName;
}

String^ Composant::MapProduct::selectWithId(String^ dataTableName, int id) {
   return "SELECT * FROM " + dataTableName + " WHERE ID = " + id + ";";
}

String^ Composant::MapProduct::Insert() {
    return "INSERT INTO product (product_name,product_description,unity_price,color) VALUES ("+this->productName+","+this->productDescription+","+this->unitPrice+","+this->color+");";
}

String^ Composant::MapProduct::Delete() {
    return "DELETE FROM product WHERE ID =" + this->productId + ";";
}

String^ Composant::MapProduct::Update() {
    return "UPDATE product SET" + " " + "WHERE"; //a modifier
}
