#include "MySQLserviceStock.h"

Services::MySQLserviceStock::MySQLserviceStock()
{
    this->stockMapper = gcnew Composant::MapStock();
    this->productMapper = gcnew Composant::MapProduct();
}

DataSet^ Services::MySQLserviceStock::selectAllStock(String^ dataTable)
{
    String^ command = this->stockMapper->selectStock();
    return this->dbConnexion->getData(command, dataTable);
}


void Services::MySQLserviceStock::addProduct(array<String^>^ productData)
{
    Object^ tempId;
    String^ command;

    this->stockMapper->setIdStock(Convert::ToInt32(productData[1]));
    this->stockMapper->setQuantity(Convert::ToInt32(productData[2]));
    this->stockMapper->setQuantityMax(Convert::ToInt32(productData[3]));
    this->productMapper->setProductName(productData[4]);
    this->productMapper->setProductDescr(productData[5]);
    this->productMapper->setUnitPrice(Convert::ToSingle(productData[6]));
    this->productMapper->setProductColor(productData[7]);
    this->productMapper->setTvaClass(productData[8]);
    this->productMapper->setTvaValue(Convert::ToSingle(productData[9]));

    command = this->productMapper->insertTva();
    tempId = this->dbConnexion->modifyData(command);
    this->productMapper->setTvaId(Convert::ToInt32(tempId));

    command = this->stockMapper->insertStock();
    this->dbConnexion->modifyDataNONSCALAr(command);

    command = this->productMapper->insertProduct();
    tempId = this->dbConnexion->modifyData(command);
    this->productMapper->setProductId(Convert::ToInt32(tempId));

    command = this->productMapper->insertColor();
    tempId = this->dbConnexion->modifyData(command);
    this->productMapper->setColorId(Convert::ToInt32(tempId));

    command = this->productMapper->insertColored();
    this->dbConnexion->modifyDataNONSCALAr(command);

    command = this->stockMapper->insertStocked();
    this->dbConnexion->modifyDataNONSCALAr(command);
}

void Services::MySQLserviceStock::modifyProduct(array<String^>^ productData)
{
    Object^ tempId;
    String^ command;

    this->stockMapper->setIdStock(Convert::ToInt32(productData[1]));
    this->stockMapper->setQuantity(Convert::ToInt32(productData[2]));
    this->stockMapper->setQuantityMax(Convert::ToInt32(productData[3]));

    this->productMapper->setProductId(Convert::ToInt32(productData[0]));
    this->productMapper->setProductName(productData[4]);
    this->productMapper->setProductDescr(productData[5]);
    this->productMapper->setUnitPrice(Convert::ToSingle(productData[6]));
    this->productMapper->setProductColor(productData[7]);
    this->productMapper->setTvaClass(productData[8]);
    this->productMapper->setTvaValue(Convert::ToSingle(productData[9]));

    command = this->productMapper->insertTva();
    tempId = this->dbConnexion->modifyData(command);
    this->productMapper->setTvaId(Convert::ToInt32(tempId));

    command = this->stockMapper->insertStock();
    this->dbConnexion->modifyDataNONSCALAr(command);

    command = this->productMapper->updateProduct();
    this->dbConnexion->modifyDataNONSCALAr(command);

    command = this->productMapper->insertColor();
    tempId = this->dbConnexion->modifyData(command);
    this->productMapper->setColorId(Convert::ToInt32(tempId));

    command = this->productMapper->updtateColored();
    this->dbConnexion->modifyDataNONSCALAr(command);

    command = this->stockMapper->updateStocked();
    this->dbConnexion->modifyDataNONSCALAr(command);
}

void Services::MySQLserviceStock::deleteProduct(int productId)
{
    this->productMapper->setProductId(productId);
    String^ command = this->productMapper->deleteProduct();
    this->dbConnexion->modifyDataNONSCALAr(command);
}

