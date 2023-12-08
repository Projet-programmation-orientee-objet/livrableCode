#include "MapStock.h"

//seters :
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Composant::MapStock::MapStock(void) : idProduct(0), idStock(0), quantity(0), quantityMax(0)
{
}

void Composant::MapStock::setIdStock(int tIdStock)
{
	this->idStock = tIdStock;
}

void Composant::MapStock::setQuantity(int tQuantity)
{
	this->quantity = tQuantity;
}

void Composant::MapStock::setQuantityMax(int tQuantityMax)
{
	this->quantityMax = tQuantityMax;
}


//getters :
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


System::String^ Composant::MapStock::getIdProduit()
{
	return "SELECT id_produit FROM product  ";
}

System::String^ Composant::MapStock::getIdStock()
{
	return "SELECT id_stock FROM Stock";
}

System::String^ Composant::MapStock::getQuantity()
{
	return "SELECT quantity FROM product WHERE id_stock = '" + this->idStock + "';";
}
System::String^ Composant::MapStock::getQuantityMax()
{
	return "SELECT quantity_max FROM product WHERE id_stock = '" + this->idStock + "';";
}


//commands :
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//stock :
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

System::String^ Composant::MapStock::selectAllStock()
{
	return "SELECT quantity, quantity_max, product_name FROM Stock NATURAL JOIN stocked NATURAL JOIN product";
}

System::String^ Composant::MapStock::selectStock()
{
	return "SELECT quantity, quantity_max, product_name FROM Stock NATURAL JOIN stocked NATURAL JOIN product" +
		"WHERE id_stock = '" + this->idStock + "'; ";
}

System::String^ Composant::MapStock::insertStock()
{
	return "INSERT INTO stock(id_stock) SELECT '" + this->idStock + "'" +
		" FROM dual WHERE NOT EXISTS (SELECT id_stock FROM stock WHERE id_stock = '" + this->idStock + "');";
}

System::String^ Composant::MapStock::insertStocked()
{
	return "INSERT INTO stocked (id_stock, id_product, quantity, quantity_max) " +
		"VALUES ('" + this->idStock + "','" + this->idProduct + "','" + this->quantity + "','" + this->quantityMax + "');";
}

System::String^ Composant::MapStock::deleteStock()
{
	return "DELETE FROM Stock WHERE id_stock = '" + this->idStock + "'; " +
		"DELETE FROM stocked WHERE id_stock = '" + this->idStock + "';";
}

System::String^ Composant::MapStock::updateStocked()
{
	return "UPDATE stocked SET id_stock = '" + this->idStock +
		"', quantity = '" + this->quantity +
		"', quantity_max = '" + this->quantityMax +
		"' WHERE id_product = '" + this->idProduct + "';";
}
