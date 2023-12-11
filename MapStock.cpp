#include "MapStock.h"
#include "MapStock.h"

//seters :
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Composant::MapStock::MapStock(void) : idProduct(0), idStock(0), quantity(0), quantityMax(0)
{
}
void Composant::MapStock::setNom(String^ nom)
{
	this->nom = nom;
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
void Composant::MapStock::setIdProduct(int n)
{
	this->idProduct = n;
}
System::String^ Composant::MapStock::selectAllStock()
{
	return "SELECT stocked.[id_stock],stock.Nom, stocked.[quantity], stocked.[quantity_max], stocked.[id_produit],product.product_name,product.product_description,product.unit_price, tva.id_tva ,tva_class,tva_percentage,color.id_color,color.color " +
		" FROM BaseDonneeProjet.dbo.Stock AS stock " +
		" INNER JOIN BaseDonneeProjet.dbo.stocked AS stocked ON stock.id_stock = stocked.id_stock "
		+ " INNER JOIN BaseDonneeProjet.dbo.product AS product  ON product.id_produit = stocked.id_produit " +
		"INNER JOIN BaseDonneeProjet.dbo.tva as tva ON tva.id_tva=product.id_tva " +
		"INNER JOIN BaseDonneeProjet.dbo.colored as colored ON colored.id_produit=product.id_produit " +
		"INNER JOIN BaseDonneeProjet.dbo.color as color ON color.id_color=colored.id_color ;";
}

System::String^ Composant::MapStock::selectStock()
{
	return "SELECT quantity, quantity_max, product_name FROM Stock NATURAL JOIN stocked NATURAL JOIN product" +
		"WHERE id_stock = '" + this->idStock + "'; ";
}

System::String^ Composant::MapStock::insertStock()
{	
	return  "INSERT INTO Stock (Nom) "
		"OUTPUT INSERTED.id_stock "+
		" SELECT '" + this->nom + "'"
		"WHERE NOT EXISTS ( "
		"    SELECT 1 "
		"    FROM Stock "
		"    WHERE Nom = '" + this->nom + "' "
		"); "
		"SELECT id_stock "
		"FROM Stock "
		"WHERE Nom = '" + this->nom + "';"
	;
}

System::String^ Composant::MapStock::insertStocked()
{
	return  "DECLARE @exist INT; "
		"SELECT @exist = quantity "
		"FROM stocked "
		"WHERE id_stock = " + this->idStock + " AND id_produit = " + this->idProduct + "; "
		"IF @exist IS NOT NULL "
		"    UPDATE stocked "
		"    SET quantity = @exist + " + this->quantity + " "
		"    WHERE id_stock = " + this->idStock + " AND id_produit = " + this->idProduct + "; "
		"ELSE "
		"    INSERT INTO stocked (id_stock, id_produit, quantity, quantity_max) "
		"    VALUES (" + this->idStock + ", " + this->idProduct + ", " + this->quantity + ", " + this->quantityMax + ");";
}

System::String^ Composant::MapStock::deleteStock()
{
	return "DELETE FROM Stock WHERE id_stock = " + this->idStock + "; " +
		"DELETE FROM stocked WHERE id_stock = '" + this->idStock + ";";
}

System::String^ Composant::MapStock::updateStocked()
{
	return "UPDATE stocked SET quantity = " + this->quantity +
		" , quantity_max = " + this->quantityMax +
		" WHERE id_stock = " + this->idStock + ";";
}
System::String^ Composant::MapStock::updateStock()
{
	return "UPDATE stock SET Nom = '" + this->nom +
		"' WHERE id_stock= " + this->idStock + " ;";
}
