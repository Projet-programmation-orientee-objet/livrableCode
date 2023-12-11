
#include "MapProduct.h"


/*String^ Composant::MapProduct::Insert() {
    return "INSERT INTO product (product_name,product_description,unity_price,color) VALUES (" + this->productName + "," + this->productDescription + "," + this->unitPrice + "," + this->color + ");";
}*/



#include "CNX.h"

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


String^ Composant::MapProduct::selectAll() {
    return "SELECT * FROM  produit  ;" ;
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
        return "INSERT INTO product(product_name,product_description,unit_price, id_tva) "+
        " OUTPUT INSERTED.id_produit "+
        " SELECT'" + this->productName + "',' " + this->productDescription+ "', " + this->unitPrice + ", " + this->tvaId +
        " WHERE NOT EXISTS( "
            " SELECT 1"
           " FROM product "
            " WHERE product_name = '" + this->productName + "'"+
           " AND unit_price = " + this->unitPrice +
            " AND product_description = '" + this->productDescription + "'" +
           " AND id_tva = " + this->tvaId +
       " );"+

        " SELECT id_produit "+
        " FROM product "+
        " WHERE product_name = '" + this->productName + "'"+
        " AND unit_price = '" + this->unitPrice +
        " AND product_description = " + this->productDescription + "'" +
        " AND id_tva = " + this->tvaId + "; ";
}

String^ Composant::MapProduct::insertColor()
{
     return "INSERT INTO color (color) "+
        "OUTPUT INSERTED.id_color "+
        " SELECT '" + this->color + "' "
        " WHERE NOT EXISTS ( "
        "    SELECT 1 "
        "    FROM color "
        "    WHERE color = '" + this->color + "' "
        "); "
        "SELECT id_color "
        "FROM color "
        "WHERE color = '" + this->color + "';";
}

String^ Composant::MapProduct::insertColored()
{
    return "  INSERT INTO colored(id_color, id_produit) "+
        " SELECT " + this->colorId + ", " + this->productId +
        " WHERE NOT EXISTS( "
        " SELECT 1 "
        " FROM colored "
        " WHERE id_color = " + this->colorId + 
        " AND id_produit = " + this->productId +
        " ); ";
}

String^ Composant::MapProduct::insertTva()
{
    return "   INSERT INTO tva(tva_class, tva_percentage) OUTPUT INSERTED.id_tva"
        " SELECT '" + this->tvaClass + "', " + this->tvaValue + ""
        " WHERE NOT EXISTS( "
        " SELECT 1 "
        " FROM tva "
        " WHERE tva_class = '" + this->tvaClass + "' "
        " AND tva_percentage = " + this->tvaValue +
        " ); "

        " SELECT id_tva "
        " FROM tva "
        " WHERE tva_class = ' " + this->tvaClass + " ' "
        " AND tva_percentage = " + this->tvaValue + " ; " ;
}


String^ Composant::MapProduct::updateProduct() {
    return "UPDATE product SET product_name = '" + this->productName +
        "', product_description = '" + this->productDescription +
        "', unit_price = " + this->unitPrice +
        ", id_tva = " + this->tvaId +
        " WHERE id_produit = " + this->productId + ";" ;

}

String^ Composant::MapProduct::updtateColored()
{
    return "UPDATE colored SET id_color = '" + this->colorId +
        "' WHERE id_product = " + this->productId + ";";
}
String^ Composant::MapProduct::updtateColor()
{
    return "UPDATE color SET color = '" + this->color 
   + "' WHERE id_color = " + this->colorId + ";";
}
String^ Composant::MapProduct::updtateTva()
{
    return "UPDATE tva SET tva_class = '" + this->tvaClass+
        "', tva_percentage = " + this->tvaValue +
        " WHERE id_tva = " + this->tvaId + ";";
}

String^ Composant::MapProduct::Decrement(int n) {
    return "UPDATE stocked SET quantity = quantity -" + n + " WHERE id_produit =  " + this->productId + "; ";
} //focntion a changer dans stock
String^ Composant::MapProduct::Increment(int n) {
    return "UPDATE stocked SET quantity = quantity +" + n + " WHERE id_produit =  " + this->productId + "; ";
}
String^ Composant::MapProduct::deleteProduct() {
    return "DELETE FROM product WHERE id_produit =" + this->productId + ";";
}



