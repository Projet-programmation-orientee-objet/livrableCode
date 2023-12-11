#include "MapCommand.h"
int Composant::MapCommand::getID() 
{
    return this->ID;
}
String^ Composant::MapCommand::getPayementDate() {
    return payementDate;
};
Composant::MapCommand::MapCommand() {}

void Composant::MapCommand::setPayementDate(String^ date) {
    this->payementDate = date;
}
void Composant::MapCommand::setIdProduit(int n)
{
    this->idProduit = n;
}

void Composant::MapCommand::setRecPayDate(String^ date) {
    this->receivedPayementDate = date;
}

void Composant::MapCommand::setPresumeDate(String^ date) {
    this->presumeDate = date;
}

void Composant::MapCommand::setEmissionDate(String^ date) {
    this->emissionDate = date;
}

void Composant::MapCommand::setPayMeanName(String^ name) {
    this->payementMeanName = name;
}

void Composant::MapCommand::setIdCustomer(int id) {
    this->idCustomer = id;
}

void Composant::MapCommand::setIdPaymentMeans(int id) {
    this->idPayementMeans = id;
}
void Composant::MapCommand::setreference(String^ id) {
    this->reference = id;
}
void Composant::MapCommand::setID(int id)
{
    this->ID = id;
}
String^ Composant::MapCommand::selectAll() {

   /* return "SELECT *" +
        " FROM gestion.dbo.payment_means AS payment_means" +
        " INNER JOIN gestion.dbo.order_customer AS order_customer ON order_customer.id_payment_means = payment_means.id_payment_means " +
        "INNER JOIN gestion.dbo.ordre_customer_product AS order_customer_product ON order_customer.reference = order_customer_product.id_ordre " +
        "INNER JOIN gestion.dbo.produit AS produit ON order_customer_product.id_product = produit.id_produit;";*/
  // " SELECT id_order,reference_order,payment_date,receved_payment_date,persumed_date,emission_date,id_payment_means,id_customer payment_means.id_payment_means , payment_means.means,id_order,  reference, payment_date, received_payment_date,  presumed_date,  emission_date, order_customer.id_customer,   produit.id_produit,    produit.prix ,quantity_asked    FROM     gestion.dbo.payment_means AS payment_means   INNER JOIN   gestion.dbo.order_customer AS order_customer ON order_customer.id_payment_means = payment_means.id_payment_means   INNER JOIN  gestion.dbo.ordre_customer_product AS order_customer_product ON order_customer.reference = order_customer_product.id_ordre   INNER JOIN   gestion.dbo.produit AS produit ON order_customer_product.id_product = produit.id_produit;";
   return "SELECT order_customer.id_order, order_customer.reference_order, order_customer.payment_date, order_customer.receved_payment_date, order_customer.presumed_date, order_customer.emission_date,order_customer.id_customer, payment_means.id_payment_means ,payment_means.means,produit.id_produit,asked.unity_asked  FROM "+
       " BaseDonneeProjet.dbo.payment_means AS payment_means   INNER JOIN   BaseDonneeProjet.dbo.order_customer AS order_customer ON order_customer.id_payment_means = "+
       " payment_means.id_payment_means   INNER JOIN  BaseDonneeProjet.dbo.asked AS order_customer_product ON order_customer.id_order = order_customer_product.id_order"+
       "   INNER JOIN   BaseDonneeProjet.dbo.product AS produit ON order_customer_product.id_produit = produit.id_produit "+
       "   INNER JOIN   BaseDonneeProjet.dbo.asked AS asked ON order_customer.id_order = asked.id_order " +
       "   INNER JOIN   BaseDonneeProjet.dbo.product AS product ON product.id_produit = asked.id_produit ";


  /* return "SELECT *"
       + " FROM gestion.dbo.payment_means AS payment_means"
       + "  INNER JOIN gestion.dbo.order_customer AS order_customer ON order_customer.id_payment_means = payment_means.id_payment_means"
       + "  INNER JOIN gestion.dbo.ordre_customer_product AS order_customer_product ON order_customer.reference = order_customer_product.id_ordre"
       + " INNER JOIN gestion.dbo.produit AS produit ON order_customer_product.id_product = produit.id_produit; ";*/


}

String^ Composant::MapCommand::selectAsked()
{
    return "SELECT id_produit, unity_asked FROM asked WHERE id_order = "+this->ID+" ;";
    
}
String^ Composant::MapCommand::selectWithIdCustomer()
{
    return "SELECT id_order FROM  BaseDonneeProjet.dbo.order_customer  WHERE id_customer = " + this->idCustomer;
}
String^ Composant::MapCommand::selectWithId( int id) {
  //pas utilise!!
    return "SELECT * FROM  BaseDonneeProjet.dbo.order_customer  WHERE id_order = " + id;
    
}

String^ Composant::MapCommand::Insert() {
    
    return"DECLARE @DernierID DECIMAL(18, 0);" 
        +" SET @DernierID = (SELECT MAX(id_order) FROM[BaseDonneeProjet].[dbo].[order_customer]);"
        + "IF @DernierID IS NULL SET @DernierID = 0;"
        + " DECLARE @newref NVARCHAR(255);"
        + " SET @newref = '"+this->reference+"' + CAST(@DernierID + 1 AS NVARCHAR);"
        + "INSERT INTO[BaseDonneeProjet].[dbo].[order_customer]([reference_order], [payment_date], [receved_payment_date], [presumed_date], [emission_date], [id_payment_means], [id_customer])  VALUES(@newref, '" +
        this->payementDate + "', '" + this->presumeDate + "', '" + this->emissionDate + "', '" + this->emissionDate + "'," + this->idPayementMeans + "," + this->idCustomer + "); "
        + "SELECT SCOPE_IDENTITY() AS id_order;";

}
String^ Composant::MapCommand::InsertAsked(int quantity) {

    return " INSERT INTO asked(id_produit,id_order,unity_asked) VALUES ("+this->idProduit+","+this->ID+","+quantity + ");";

}


String^ Composant::MapCommand::InsertPaymentMethod() {
  return  "INSERT INTO payment_means( means) " +
        " SELECT '" + this->payementMeanName + "'"+
        " WHERE NOT EXISTS(" +
        " SELECT 1  FROM payment_means WHERE means = '" + this->payementMeanName + "') ;"

        " SELECT TOP 1 id_payment_means   FROM payment_means " +
        " WHERE means = '" + this->payementMeanName + "';";

   // return "INSERT INTO [gestion].[dbo].[payment_means] ([means]) VALUES('"+this->payementMeanName+"'); " + "SELECT SCOPE_IDENTITY();";
}

String^ Composant::MapCommand::Delete() {
    return "DELETE FROM BaseDonneeProjet.dbo.order_customer WHERE id_order  = " + this->ID + ";"+
        "DELETE FROM BaseDonneeProjet.dbo.asked WHERE id_order = " + this->ID + ";";
}

String^ Composant::MapCommand::Update() {
    return " UPDATE BaseDonneeProjet.dbo.order_customer"+
        " SET payment_date = '" + this->payementDate+
        "' ,receved_payment_date = '" +this->receivedPayementDate
        +"' ,presumed_date = '"+this->presumeDate
        +"' ,emission_date = '"+this->emissionDate
        + "' ,id_payment_means = " + this->idPayementMeans
       +" WHERE id_order ="+this->ID+" ; ";
}

String^ Composant::MapCommand::GetBill(void)
{
    return " SELECT oc.payment_date, oc.receved_payment_date,  c.phone_number, c.birth_date, c.company, a.street, ci.city_name, co.country_name "+
        " FROM  order_customer oc JOIN "+
        " customer c ON oc.id_customer = c.id_customer "+
        " JOIN "+
        " live  l ON l.id_customer = c.id_customer "+
       " JOIN "+
        " address a ON l.id_address = a.id_address "+
        " JOIN "+
        " city ci ON a.id_city = ci.id_city "+
        " JOIN "+
        " country co ON ci.id_country = co.id_country "+
        " WHERE "+
         " oc.id_order ="+ this->ID +"; ";
}
