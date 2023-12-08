#pragma once


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

namespace Service {
	ref class UtilitiesService
	{
	private:
		DataGridView^ inputData;
		String^ keyWordString;
	public:
		UtilitiesService();
		DataGridView^ filterDataset();
		void setInputData(DataGridView^ inData);
		void setKeyWordString(String^ inString);
	};
}
