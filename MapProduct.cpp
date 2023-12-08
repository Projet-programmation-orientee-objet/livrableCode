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

void Composant::MapProduct::setColorId(int id)
{
    this->colorId = id;
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

void Composant::MapProduct::setTvaValue(float value) {
    this->tvaValue = value;
}


String^ Composant::MapProduct::selectAll(String^ dataTableName) {
    return "SELECT * FROM " + dataTableName;
}

String^ Composant::MapProduct::selectWithId(String^ dataTableName) {
    return "SELECT * FROM product WHERE ID = " + this->productId + ";";
}

int Composant::MapProduct::getProductId() {
    return this->productId;
}

int Composant::MapProduct::getTvaId() {
    return this->tvaId;
}

String^ Composant::MapProduct::getTvaClass() {
    return this->tvaClass;
}

String^ Composant::MapProduct::getProductName() {
    return this->productName;
}

String^ Composant::MapProduct::getProductDescr() {
    return this->productDescription;
}

String^ Composant::MapProduct::getProductColor() {
    return this->color;
}

float Composant::MapProduct::getUnitPrice() {
    return this->unitPrice;
}

float Composant::MapProduct::getTvaValue() {
    return this->tvaValue;
}

String^ Composant::MapProduct::insertProduct() {
    return "INSERT INTO product (product_name, product_description, unit_price, id_tva) VALUES ('" + this->productName + "', '" +
        this->productDescription + "','" + this->unitPrice + "','" + this->tvaId + "');" + "SELECT LAST_INSERT_ID();";
}

String^ Composant::MapProduct::insertColor()
{
    return "INSERT INTO color(color) SELECT '" + this->color + "'" +
        " FROM dual WHERE NOT EXISTS (SELECT color FROM color WHERE color = '" + this->color + "');" +
        "SELECT id_color FROM color WHERE color = '" + this->color + "';";
}

String^ Composant::MapProduct::insertColored()
{
    return "INSERT INTO colored (id_color, id_product) VALUES ('" + this->colorId + "','" + this->productId + "');";
}

String^ Composant::MapProduct::insertTva()
{
    return "INSERT INTO tva(tva_class, tva_percentage) SELECT '" + this->tvaClass + "','" + this->tvaValue + "'" +
        " FROM dual WHERE NOT EXISTS (SELECT tva_class, tva_percentage FROM tva WHERE tva_class = '" + this->tvaClass +
        "' AND tva_percentage = '" + this->tvaValue + "'); " +
        "SELECT id_tva FROM tva WHERE tva_class = '" + this->tvaClass + "' AND tva_percentage = '" + this->tvaValue + "';";
}

String^ Composant::MapProduct::deleteProduct() {
    return "DELETE FROM product WHERE ID =" + this->productId + ";";
}

String^ Composant::MapProduct::updateProduct() {
    return "UPDATE product SET product_name = '" + this->productName +
        "', product_description = '" + this->productDescription +
        "', unit_price = '" + this->unitPrice +
        "', id_tva = '" + this->tvaId +
        "' WHERE id_product = '" + this->productId + "';";

}

String^ Composant::MapProduct::updtateColored()
{
    return "UPDATE colored SET id_color = '" + this->colorId +
        "' WHERE id_product = '" + this->productId + "';";
}

String^ Composant::MapProduct::Decrement(int n) {
    return "UPDATE stock SET quantite = quantite -" + n + " WHERE id_produit =  " + this->productId + "; ";
} //focntion a changer dans stock
String^ Composant::MapProduct::Increment(int n) {
    return "UPDATE stock SET quantite = quantite +" + n + " WHERE id_produit =  " + this->productId + "; ";
}
