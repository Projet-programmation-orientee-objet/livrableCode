#pragma once
#include "MySQLservice.h"
#include "MapStock.h"
#include "MapProduct.h"


namespace Services {
	ref class MySQLserviceStock : public Services::MySQLservice
	{
	private:
		Composant::MapStock^ stockMapper;
		Composant::MapProduct^ productMapper;
	public:
		MySQLserviceStock();
		DataSet^ selectAllStock(String^ dataTable);
		void addProduct(array<String^>^ productData);
		void modifyProduct(array<String^>^ productData);
		void deleteProduct(int productId);
	};
}