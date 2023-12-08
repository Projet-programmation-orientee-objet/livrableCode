#include "UtilitiesService.h"

Service::UtilitiesService::UtilitiesService() : inputData(), keyWordString("")
{
}

DataGridView^ Service::UtilitiesService::filterDataset()
{
    array<String^>^ keywords = this->keyWordString->Split(' ');
    DataGridView^ output;
    for each (String ^ s in keywords) {
        for (int r = 0; r < this->inputData->RowCount; r++) {
            this->inputData->Rows[r];
            for (int c = 0; c < this->inputData->ColumnCount; c++) {
                this->inputData->Rows[r]->Cells[c];
                if (this->inputData->Rows[r]->Cells[c]->Value->ToString() == s) {
                    output->Rows->Add(this->inputData->Rows[r]);
                    break;
                }
            }
        }
    }
    return output;
}

void Service::UtilitiesService::setInputData(DataGridView^ inData)
{
    this->inputData = inData;
}

void Service::UtilitiesService::setKeyWordString(String^ inString)
{
    this->keyWordString = inString;
}
