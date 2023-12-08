#include "pch.h"
#include "MapCommand.h"
#include "SQLio.h"

Composant::MapCommand::MapCommand(){}

void Composant::MapCommand::setPayementDate(String^ date){
	this->payementDate = date;
}

void Composant::MapCommand::setRecPayDate(String^ date){
	this->receivedPayementDate = date;
}

void Composant::MapCommand::setPresumeDate(String^ date){
	this->presumeDate = date;
}

void Composant::MapCommand::setEmissionDate(String^ date){
	this->emissionDate = date;
}

void Composant::MapCommand::setPayMeanName(String^ name){
	this->payementMeanName = name;
}

void Composant::MapCommand::setIdCustomer(int id){
	this->idCustomer = id;
}

void Composant::MapCommand::setIdPaymentMeans(int id){
	this->idPayementMeans = id;
}

void Composant::MapCommand::setIdProduct(int id){
	this->idProduct = id;
}

String^ Composant::MapCommand::getPayementDate() {
	return this->payementDate;
}

String^ Composant::MapCommand::getRecPayDate() {
	return this->receivedPayementDate;
}

String^ Composant::MapCommand::getPresumeDate() {
	return this->presumeDate;
}

String^ Composant::MapCommand::getEmissionDate() {
	return this->emissionDate;
}

String^ Composant::MapCommand::getPayMeanName() {
	return this->payementMeanName;
}

int Composant::MapCommand::getIdCustomer() {
	return this->idCustomer;
}

int Composant::MapCommand::getIdPaymentMeans() {
	return this->idPayementMeans;
}

int Composant::MapCommand::getIdProduct() {
	return this->idProduct;
}

String^ Composant::MapCommand::selectAll(String^ dataTableName){
	return "SELECT * FROM order_customer;";
}

String^ Composant::MapCommand::selectWithId(String^ dataTableName){
	return "SELECT * FROM order_customer WHERE ID = '" + this->idCustomer + "';";
}

String^ Composant::MapCommand::Insert(){
	return "INSERT INTO order_customer (payement_date,sold_date,presume_date,emission_date) VALUES ('" + this->payementDate + "','" + this->receivedPayementDate + "','" + this->presumeDate + "','" + this->emissionDate + "');";
}

String^ Composant::MapCommand::Delete(){
	return "DELETE FROM order_customer WHERE ID = '"+this->idCustomer+"';";
}

String^ Composant::MapCommand::Update(){
	return "UPDATE order_customer SET"+" "+"WHERE"; //a modifier
}

String^ Composant::MapCommand::createReference() {
	//String^ reference = getFirstName->Substring(0, 2) + getLastName->Substring(0, 2) + this->getPayementDate()->Substring(0,4) + getCityName->Substring(0, 3) + std::to_string(valeur);
	//valeur++;
	//return reference;
	return "";
}
