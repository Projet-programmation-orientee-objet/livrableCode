#include "MySQLserviceCommand.h"
#include "ClientService.h"

#pragma once

	namespace porjet6 {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		using namespace System::Collections::Generic;
		/// <summary>
		/// Description résumée de MyForm
		/// </summary>
		public ref class MyForm : public System::Windows::Forms::Form
		{
		public:
			MyForm(void)
			{
				listIDs = gcnew List<Tuple<int, int>^>();
				this->ServiceClient = (gcnew Services::ClientService());
				this->ServiceCommand = (gcnew Service::MySQLserviceCommand());
				InitializeComponent();
				//
				//TODO: ajoutez ici le code du constructeur
				//
			}

		protected:
			/// <summary>
			/// Nettoyage des ressources utilisées.
			/// </summary>
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}



		private: System::Windows::Forms::DataGridView^ dataGridViewClient;



		private: Service::MySQLserviceCommand^ ServiceCommand;

		private: Services::ClientService^ ServiceClient;



		private: System::Windows::Forms::TextBox^ searchTextBoxClient;
		private: System::Windows::Forms::Button^ searchButtonClient;
		private: System::Windows::Forms::Button^ addButtonClient;
		private: System::Windows::Forms::Button^ modifyButtonClient;
		private: System::Windows::Forms::Button^ deleteButtonClient;

		private: System::Windows::Forms::Button^ refreshButtonClient;
		private: System::Windows::Forms::RichTextBox^ messageTextBoxClient;
		private: System::Windows::Forms::Label^ messageBoxLabelClient;
		private: System::Windows::Forms::TabControl^ tabControl1;
		private: System::Windows::Forms::TabPage^ tabPageClient;
		private: System::Windows::Forms::TabPage^ tabPageCommand;
		private: System::Windows::Forms::Label^ messageTextBoxLabelCommand;
		private: System::Windows::Forms::RichTextBox^ richTextBoxCommand;
		private: System::Windows::Forms::Button^ deleteButtonCommand;
		private: System::Windows::Forms::Button^ modifyButtonCommand;
		private: System::Windows::Forms::Button^ addButtonCommand;
		private: System::Windows::Forms::DataGridView^ dataGridViewCommand;
		private: System::Windows::Forms::Button^ refreshButtonCommand;
		private: System::Windows::Forms::Button^ searchButtonCommand;
		private: System::Windows::Forms::TextBox^ searchTextBoxCommand;
		private: System::Windows::Forms::Button^ billButton;
		private: System::Windows::Forms::TabPage^ tabPageStock;
		private: System::Windows::Forms::Label^ MessageBoxLabelStock;
		private: System::Windows::Forms::RichTextBox^ messageRichTextBoxStock;
		private: System::Windows::Forms::Button^ deleteButtonStock;
		private: System::Windows::Forms::Button^ modifyButtonStock;
		private: System::Windows::Forms::Button^ addButtonStock;
		private: System::Windows::Forms::DataGridView^ dataGridViewStock;
		private: System::Windows::Forms::Button^ refreshButtonStock;
		private: System::Windows::Forms::Button^ searchButtonStock;
		private: System::Windows::Forms::TextBox^ searchTextBoxStock;
		private: System::Windows::Forms::TabControl^ tabControl2;
		private: System::Windows::Forms::TabPage^ tabPageClientInCommand;
		private:List <Tuple<int, int>^>^ listIDs;



		private: System::Windows::Forms::TabPage^ tabPageStockInCommand;
		private: System::Windows::Forms::Button^ clientInCommandRefreshButton;
		private: System::Windows::Forms::Button^ clientInCommandSearchButton;
		private: System::Windows::Forms::TextBox^ clientInCommandSearchBox;
		private: System::Windows::Forms::DataGridView^ dataGridViewClientInCommand;
		private: System::Windows::Forms::Button^ stockInCommandRefreshButton;
		private: System::Windows::Forms::Button^ stockInCommandSearchButton;
		private: System::Windows::Forms::TextBox^ stockInCommandSearchBox;
		private: System::Windows::Forms::DataGridView^ stockInCommandGridView;
		private: System::Windows::Forms::Button^ MiseAjourbtn;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::TextBox^ textBox1;










		protected:

		private:
			/// <summary>
			/// Variable nécessaire au concepteur.
			/// </summary>
			System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
			/// le contenu de cette méthode avec l'éditeur de code.
			/// </summary>
			void InitializeComponent(void)
			{
				this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
				this->searchTextBoxClient = (gcnew System::Windows::Forms::TextBox());
				this->searchButtonClient = (gcnew System::Windows::Forms::Button());
				this->addButtonClient = (gcnew System::Windows::Forms::Button());
				this->modifyButtonClient = (gcnew System::Windows::Forms::Button());
				this->deleteButtonClient = (gcnew System::Windows::Forms::Button());
				this->refreshButtonClient = (gcnew System::Windows::Forms::Button());
				this->messageTextBoxClient = (gcnew System::Windows::Forms::RichTextBox());
				this->messageBoxLabelClient = (gcnew System::Windows::Forms::Label());
				this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
				this->tabPageClient = (gcnew System::Windows::Forms::TabPage());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->tabPageCommand = (gcnew System::Windows::Forms::TabPage());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->MiseAjourbtn = (gcnew System::Windows::Forms::Button());
				this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
				this->tabPageClientInCommand = (gcnew System::Windows::Forms::TabPage());
				this->clientInCommandRefreshButton = (gcnew System::Windows::Forms::Button());
				this->clientInCommandSearchButton = (gcnew System::Windows::Forms::Button());
				this->clientInCommandSearchBox = (gcnew System::Windows::Forms::TextBox());
				this->dataGridViewClientInCommand = (gcnew System::Windows::Forms::DataGridView());
				this->tabPageStockInCommand = (gcnew System::Windows::Forms::TabPage());
				this->stockInCommandRefreshButton = (gcnew System::Windows::Forms::Button());
				this->stockInCommandSearchButton = (gcnew System::Windows::Forms::Button());
				this->stockInCommandSearchBox = (gcnew System::Windows::Forms::TextBox());
				this->stockInCommandGridView = (gcnew System::Windows::Forms::DataGridView());
				this->billButton = (gcnew System::Windows::Forms::Button());
				this->messageTextBoxLabelCommand = (gcnew System::Windows::Forms::Label());
				this->richTextBoxCommand = (gcnew System::Windows::Forms::RichTextBox());
				this->deleteButtonCommand = (gcnew System::Windows::Forms::Button());
				this->modifyButtonCommand = (gcnew System::Windows::Forms::Button());
				this->addButtonCommand = (gcnew System::Windows::Forms::Button());
				this->dataGridViewCommand = (gcnew System::Windows::Forms::DataGridView());
				this->refreshButtonCommand = (gcnew System::Windows::Forms::Button());
				this->searchButtonCommand = (gcnew System::Windows::Forms::Button());
				this->searchTextBoxCommand = (gcnew System::Windows::Forms::TextBox());
				this->tabPageStock = (gcnew System::Windows::Forms::TabPage());
				this->MessageBoxLabelStock = (gcnew System::Windows::Forms::Label());
				this->messageRichTextBoxStock = (gcnew System::Windows::Forms::RichTextBox());
				this->deleteButtonStock = (gcnew System::Windows::Forms::Button());
				this->modifyButtonStock = (gcnew System::Windows::Forms::Button());
				this->addButtonStock = (gcnew System::Windows::Forms::Button());
				this->dataGridViewStock = (gcnew System::Windows::Forms::DataGridView());
				this->refreshButtonStock = (gcnew System::Windows::Forms::Button());
				this->searchButtonStock = (gcnew System::Windows::Forms::Button());
				this->searchTextBoxStock = (gcnew System::Windows::Forms::TextBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
				this->tabControl1->SuspendLayout();
				this->tabPageClient->SuspendLayout();
				this->tabPageCommand->SuspendLayout();
				this->tabControl2->SuspendLayout();
				this->tabPageClientInCommand->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClientInCommand))->BeginInit();
				this->tabPageStockInCommand->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockInCommandGridView))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommand))->BeginInit();
				this->tabPageStock->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->BeginInit();
				this->SuspendLayout();
				// 
				// dataGridViewClient
				// 
				this->dataGridViewClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->dataGridViewClient->Location = System::Drawing::Point(9, 39);
				this->dataGridViewClient->Margin = System::Windows::Forms::Padding(4);
				this->dataGridViewClient->Name = L"dataGridViewClient";
				this->dataGridViewClient->RowHeadersWidth = 51;
				this->dataGridViewClient->Size = System::Drawing::Size(817, 319);
				this->dataGridViewClient->TabIndex = 3;
				// 
				// searchTextBoxClient
				// 
				this->searchTextBoxClient->ForeColor = System::Drawing::Color::DimGray;
				this->searchTextBoxClient->Location = System::Drawing::Point(9, 9);
				this->searchTextBoxClient->Margin = System::Windows::Forms::Padding(4);
				this->searchTextBoxClient->Name = L"searchTextBoxClient";
				this->searchTextBoxClient->Size = System::Drawing::Size(263, 22);
				this->searchTextBoxClient->TabIndex = 5;
				this->searchTextBoxClient->Text = L"Entrez une recherche ici...";
				// 
				// searchButtonClient
				// 
				this->searchButtonClient->Location = System::Drawing::Point(281, 9);
				this->searchButtonClient->Margin = System::Windows::Forms::Padding(4);
				this->searchButtonClient->Name = L"searchButtonClient";
				this->searchButtonClient->Size = System::Drawing::Size(100, 25);
				this->searchButtonClient->TabIndex = 6;
				this->searchButtonClient->Text = L"Rechercher";
				this->searchButtonClient->UseVisualStyleBackColor = true;
				// 
				// addButtonClient
				// 
				this->addButtonClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->addButtonClient->Location = System::Drawing::Point(151, 366);
				this->addButtonClient->Margin = System::Windows::Forms::Padding(4);
				this->addButtonClient->Name = L"addButtonClient";
				this->addButtonClient->Size = System::Drawing::Size(137, 39);
				this->addButtonClient->TabIndex = 7;
				this->addButtonClient->Text = L"Ajouter";
				this->addButtonClient->UseVisualStyleBackColor = true;
				this->addButtonClient->Click += gcnew System::EventHandler(this, &MyForm::addButtonClient_Click);
				// 
				// modifyButtonClient
				// 
				this->modifyButtonClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->modifyButtonClient->Location = System::Drawing::Point(296, 366);
				this->modifyButtonClient->Margin = System::Windows::Forms::Padding(4);
				this->modifyButtonClient->Name = L"modifyButtonClient";
				this->modifyButtonClient->Size = System::Drawing::Size(137, 39);
				this->modifyButtonClient->TabIndex = 8;
				this->modifyButtonClient->Text = L"Modifier";
				this->modifyButtonClient->UseVisualStyleBackColor = true;
				this->modifyButtonClient->Click += gcnew System::EventHandler(this, &MyForm::modifyButtonClient_Click);
				// 
				// deleteButtonClient
				// 
				this->deleteButtonClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->deleteButtonClient->Location = System::Drawing::Point(441, 366);
				this->deleteButtonClient->Margin = System::Windows::Forms::Padding(4);
				this->deleteButtonClient->Name = L"deleteButtonClient";
				this->deleteButtonClient->Size = System::Drawing::Size(137, 39);
				this->deleteButtonClient->TabIndex = 9;
				this->deleteButtonClient->Text = L"Supprimer";
				this->deleteButtonClient->UseVisualStyleBackColor = true;
				this->deleteButtonClient->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonClient_Click);
				// 
				// refreshButtonClient
				// 
				this->refreshButtonClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->refreshButtonClient->Location = System::Drawing::Point(800, 7);
				this->refreshButtonClient->Margin = System::Windows::Forms::Padding(4);
				this->refreshButtonClient->Name = L"refreshButtonClient";
				this->refreshButtonClient->Size = System::Drawing::Size(27, 25);
				this->refreshButtonClient->TabIndex = 11;
				this->refreshButtonClient->UseVisualStyleBackColor = true;
				// 
				// messageTextBoxClient
				// 
				this->messageTextBoxClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->messageTextBoxClient->Location = System::Drawing::Point(9, 428);
				this->messageTextBoxClient->Margin = System::Windows::Forms::Padding(4);
				this->messageTextBoxClient->Name = L"messageTextBoxClient";
				this->messageTextBoxClient->ReadOnly = true;
				this->messageTextBoxClient->Size = System::Drawing::Size(816, 52);
				this->messageTextBoxClient->TabIndex = 12;
				this->messageTextBoxClient->Text = L"";
				// 
				// messageBoxLabelClient
				// 
				this->messageBoxLabelClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->messageBoxLabelClient->AutoSize = true;
				this->messageBoxLabelClient->Location = System::Drawing::Point(5, 409);
				this->messageBoxLabelClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->messageBoxLabelClient->Name = L"messageBoxLabelClient";
				this->messageBoxLabelClient->Size = System::Drawing::Size(64, 16);
				this->messageBoxLabelClient->TabIndex = 13;
				this->messageBoxLabelClient->Text = L"Message";
				// 
				// tabControl1
				// 
				this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->tabControl1->Controls->Add(this->tabPageClient);
				this->tabControl1->Controls->Add(this->tabPageCommand);
				this->tabControl1->Controls->Add(this->tabPageStock);
				this->tabControl1->Location = System::Drawing::Point(1, 2);
				this->tabControl1->Margin = System::Windows::Forms::Padding(4);
				this->tabControl1->Name = L"tabControl1";
				this->tabControl1->SelectedIndex = 0;
				this->tabControl1->Size = System::Drawing::Size(849, 517);
				this->tabControl1->TabIndex = 14;
				// 
				// tabPageClient
				// 
				this->tabPageClient->Controls->Add(this->button1);
				this->tabPageClient->Controls->Add(this->dataGridViewClient);
				this->tabPageClient->Controls->Add(this->messageBoxLabelClient);
				this->tabPageClient->Controls->Add(this->searchTextBoxClient);
				this->tabPageClient->Controls->Add(this->messageTextBoxClient);
				this->tabPageClient->Controls->Add(this->searchButtonClient);
				this->tabPageClient->Controls->Add(this->refreshButtonClient);
				this->tabPageClient->Controls->Add(this->deleteButtonClient);
				this->tabPageClient->Controls->Add(this->addButtonClient);
				this->tabPageClient->Controls->Add(this->modifyButtonClient);
				this->tabPageClient->Location = System::Drawing::Point(4, 25);
				this->tabPageClient->Margin = System::Windows::Forms::Padding(4);
				this->tabPageClient->Name = L"tabPageClient";
				this->tabPageClient->Padding = System::Windows::Forms::Padding(4);
				this->tabPageClient->Size = System::Drawing::Size(841, 488);
				this->tabPageClient->TabIndex = 0;
				this->tabPageClient->Text = L"Gestion clients";
				this->tabPageClient->UseVisualStyleBackColor = true;
				// 
				// button1
				// 
				this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->button1->Location = System::Drawing::Point(8, 366);
				this->button1->Margin = System::Windows::Forms::Padding(4);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(125, 39);
				this->button1->TabIndex = 22;
				this->button1->Text = L"Mise a jour";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
				// 
				// tabPageCommand
				// 
				this->tabPageCommand->Controls->Add(this->button2);
				this->tabPageCommand->Controls->Add(this->textBox1);
				this->tabPageCommand->Controls->Add(this->MiseAjourbtn);
				this->tabPageCommand->Controls->Add(this->tabControl2);
				this->tabPageCommand->Controls->Add(this->billButton);
				this->tabPageCommand->Controls->Add(this->messageTextBoxLabelCommand);
				this->tabPageCommand->Controls->Add(this->richTextBoxCommand);
				this->tabPageCommand->Controls->Add(this->deleteButtonCommand);
				this->tabPageCommand->Controls->Add(this->modifyButtonCommand);
				this->tabPageCommand->Controls->Add(this->addButtonCommand);
				this->tabPageCommand->Controls->Add(this->dataGridViewCommand);
				this->tabPageCommand->Controls->Add(this->refreshButtonCommand);
				this->tabPageCommand->Controls->Add(this->searchButtonCommand);
				this->tabPageCommand->Controls->Add(this->searchTextBoxCommand);
				this->tabPageCommand->Location = System::Drawing::Point(4, 25);
				this->tabPageCommand->Margin = System::Windows::Forms::Padding(4);
				this->tabPageCommand->Name = L"tabPageCommand";
				this->tabPageCommand->Padding = System::Windows::Forms::Padding(4);
				this->tabPageCommand->Size = System::Drawing::Size(841, 488);
				this->tabPageCommand->TabIndex = 1;
				this->tabPageCommand->Text = L"Gestion commandes";
				this->tabPageCommand->UseVisualStyleBackColor = true;
				// 
				// button2
				// 
				this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->button2->Location = System::Drawing::Point(513, 367);
				this->button2->Margin = System::Windows::Forms::Padding(4);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(93, 39);
				this->button2->TabIndex = 23;
				this->button2->Text = L"Add product";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(453, 375);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(53, 22);
				this->textBox1->TabIndex = 22;
				// 
				// MiseAjourbtn
				// 
				this->MiseAjourbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->MiseAjourbtn->Location = System::Drawing::Point(4, 366);
				this->MiseAjourbtn->Margin = System::Windows::Forms::Padding(4);
				this->MiseAjourbtn->Name = L"MiseAjourbtn";
				this->MiseAjourbtn->Size = System::Drawing::Size(98, 39);
				this->MiseAjourbtn->TabIndex = 21;
				this->MiseAjourbtn->Text = L"Mise a jour";
				this->MiseAjourbtn->UseVisualStyleBackColor = true;
				this->MiseAjourbtn->Click += gcnew System::EventHandler(this, &MyForm::MiseAjourbtn_Click);
				// 
				// tabControl2
				// 
				this->tabControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Right));
				this->tabControl2->Controls->Add(this->tabPageClientInCommand);
				this->tabControl2->Controls->Add(this->tabPageStockInCommand);
				this->tabControl2->Location = System::Drawing::Point(445, 9);
				this->tabControl2->Margin = System::Windows::Forms::Padding(4);
				this->tabControl2->Name = L"tabControl2";
				this->tabControl2->SelectedIndex = 0;
				this->tabControl2->Size = System::Drawing::Size(381, 350);
				this->tabControl2->TabIndex = 20;
				// 
				// tabPageClientInCommand
				// 
				this->tabPageClientInCommand->Controls->Add(this->clientInCommandRefreshButton);
				this->tabPageClientInCommand->Controls->Add(this->clientInCommandSearchButton);
				this->tabPageClientInCommand->Controls->Add(this->clientInCommandSearchBox);
				this->tabPageClientInCommand->Controls->Add(this->dataGridViewClientInCommand);
				this->tabPageClientInCommand->Location = System::Drawing::Point(4, 25);
				this->tabPageClientInCommand->Margin = System::Windows::Forms::Padding(4);
				this->tabPageClientInCommand->Name = L"tabPageClientInCommand";
				this->tabPageClientInCommand->Padding = System::Windows::Forms::Padding(4);
				this->tabPageClientInCommand->Size = System::Drawing::Size(373, 321);
				this->tabPageClientInCommand->TabIndex = 0;
				this->tabPageClientInCommand->Text = L"Clients view";
				this->tabPageClientInCommand->UseVisualStyleBackColor = true;
				// 
				// clientInCommandRefreshButton
				// 
				this->clientInCommandRefreshButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->clientInCommandRefreshButton->Location = System::Drawing::Point(344, 7);
				this->clientInCommandRefreshButton->Margin = System::Windows::Forms::Padding(4);
				this->clientInCommandRefreshButton->Name = L"clientInCommandRefreshButton";
				this->clientInCommandRefreshButton->Size = System::Drawing::Size(27, 25);
				this->clientInCommandRefreshButton->TabIndex = 21;
				this->clientInCommandRefreshButton->UseVisualStyleBackColor = true;
				// 
				// clientInCommandSearchButton
				// 
				this->clientInCommandSearchButton->Location = System::Drawing::Point(195, 7);
				this->clientInCommandSearchButton->Margin = System::Windows::Forms::Padding(4);
				this->clientInCommandSearchButton->Name = L"clientInCommandSearchButton";
				this->clientInCommandSearchButton->Size = System::Drawing::Size(100, 25);
				this->clientInCommandSearchButton->TabIndex = 16;
				this->clientInCommandSearchButton->Text = L"Rechercher";
				this->clientInCommandSearchButton->UseVisualStyleBackColor = true;
				// 
				// clientInCommandSearchBox
				// 
				this->clientInCommandSearchBox->ForeColor = System::Drawing::Color::DimGray;
				this->clientInCommandSearchBox->Location = System::Drawing::Point(4, 7);
				this->clientInCommandSearchBox->Margin = System::Windows::Forms::Padding(4);
				this->clientInCommandSearchBox->Name = L"clientInCommandSearchBox";
				this->clientInCommandSearchBox->Size = System::Drawing::Size(181, 22);
				this->clientInCommandSearchBox->TabIndex = 15;
				this->clientInCommandSearchBox->Text = L"Entrez une recherche ici...";
				// 
				// dataGridViewClientInCommand
				// 
				this->dataGridViewClientInCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->dataGridViewClientInCommand->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->dataGridViewClientInCommand->Location = System::Drawing::Point(0, 39);
				this->dataGridViewClientInCommand->Margin = System::Windows::Forms::Padding(4);
				this->dataGridViewClientInCommand->Name = L"dataGridViewClientInCommand";
				this->dataGridViewClientInCommand->RowHeadersWidth = 51;
				this->dataGridViewClientInCommand->Size = System::Drawing::Size(371, 274);
				this->dataGridViewClientInCommand->TabIndex = 14;
				// 
				// tabPageStockInCommand
				// 
				this->tabPageStockInCommand->Controls->Add(this->stockInCommandRefreshButton);
				this->tabPageStockInCommand->Controls->Add(this->stockInCommandSearchButton);
				this->tabPageStockInCommand->Controls->Add(this->stockInCommandSearchBox);
				this->tabPageStockInCommand->Controls->Add(this->stockInCommandGridView);
				this->tabPageStockInCommand->Location = System::Drawing::Point(4, 25);
				this->tabPageStockInCommand->Margin = System::Windows::Forms::Padding(4);
				this->tabPageStockInCommand->Name = L"tabPageStockInCommand";
				this->tabPageStockInCommand->Padding = System::Windows::Forms::Padding(4);
				this->tabPageStockInCommand->Size = System::Drawing::Size(373, 321);
				this->tabPageStockInCommand->TabIndex = 1;
				this->tabPageStockInCommand->Text = L"Stock view";
				this->tabPageStockInCommand->UseVisualStyleBackColor = true;
				// 
				// stockInCommandRefreshButton
				// 
				this->stockInCommandRefreshButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->stockInCommandRefreshButton->Location = System::Drawing::Point(344, 7);
				this->stockInCommandRefreshButton->Margin = System::Windows::Forms::Padding(4);
				this->stockInCommandRefreshButton->Name = L"stockInCommandRefreshButton";
				this->stockInCommandRefreshButton->Size = System::Drawing::Size(27, 25);
				this->stockInCommandRefreshButton->TabIndex = 25;
				this->stockInCommandRefreshButton->UseVisualStyleBackColor = true;
				// 
				// stockInCommandSearchButton
				// 
				this->stockInCommandSearchButton->Location = System::Drawing::Point(195, 7);
				this->stockInCommandSearchButton->Margin = System::Windows::Forms::Padding(4);
				this->stockInCommandSearchButton->Name = L"stockInCommandSearchButton";
				this->stockInCommandSearchButton->Size = System::Drawing::Size(100, 25);
				this->stockInCommandSearchButton->TabIndex = 24;
				this->stockInCommandSearchButton->Text = L"Rechercher";
				this->stockInCommandSearchButton->UseVisualStyleBackColor = true;
				// 
				// stockInCommandSearchBox
				// 
				this->stockInCommandSearchBox->ForeColor = System::Drawing::Color::DimGray;
				this->stockInCommandSearchBox->Location = System::Drawing::Point(4, 7);
				this->stockInCommandSearchBox->Margin = System::Windows::Forms::Padding(4);
				this->stockInCommandSearchBox->Name = L"stockInCommandSearchBox";
				this->stockInCommandSearchBox->Size = System::Drawing::Size(181, 22);
				this->stockInCommandSearchBox->TabIndex = 23;
				this->stockInCommandSearchBox->Text = L"Entrez une recherche ici...";
				// 
				// stockInCommandGridView
				// 
				this->stockInCommandGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->stockInCommandGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->stockInCommandGridView->Location = System::Drawing::Point(0, 39);
				this->stockInCommandGridView->Margin = System::Windows::Forms::Padding(4);
				this->stockInCommandGridView->Name = L"stockInCommandGridView";
				this->stockInCommandGridView->RowHeadersWidth = 51;
				this->stockInCommandGridView->Size = System::Drawing::Size(371, 274);
				this->stockInCommandGridView->TabIndex = 22;
				this->stockInCommandGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::stockInCommandGridView_CellContentClick);
				// 
				// billButton
				// 
				this->billButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->billButton->Location = System::Drawing::Point(609, 366);
				this->billButton->Margin = System::Windows::Forms::Padding(4);
				this->billButton->Name = L"billButton";
				this->billButton->Size = System::Drawing::Size(217, 39);
				this->billButton->TabIndex = 19;
				this->billButton->Text = L"Editer facture";
				this->billButton->UseVisualStyleBackColor = true;
				// 
				// messageTextBoxLabelCommand
				// 
				this->messageTextBoxLabelCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->messageTextBoxLabelCommand->AutoSize = true;
				this->messageTextBoxLabelCommand->Location = System::Drawing::Point(5, 409);
				this->messageTextBoxLabelCommand->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->messageTextBoxLabelCommand->Name = L"messageTextBoxLabelCommand";
				this->messageTextBoxLabelCommand->Size = System::Drawing::Size(64, 16);
				this->messageTextBoxLabelCommand->TabIndex = 18;
				this->messageTextBoxLabelCommand->Text = L"Message";
				// 
				// richTextBoxCommand
				// 
				this->richTextBoxCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->richTextBoxCommand->Location = System::Drawing::Point(9, 428);
				this->richTextBoxCommand->Margin = System::Windows::Forms::Padding(4);
				this->richTextBoxCommand->Name = L"richTextBoxCommand";
				this->richTextBoxCommand->ReadOnly = true;
				this->richTextBoxCommand->Size = System::Drawing::Size(816, 52);
				this->richTextBoxCommand->TabIndex = 17;
				this->richTextBoxCommand->Text = L"";
				// 
				// deleteButtonCommand
				// 
				this->deleteButtonCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->deleteButtonCommand->Location = System::Drawing::Point(320, 366);
				this->deleteButtonCommand->Margin = System::Windows::Forms::Padding(4);
				this->deleteButtonCommand->Name = L"deleteButtonCommand";
				this->deleteButtonCommand->Size = System::Drawing::Size(117, 39);
				this->deleteButtonCommand->TabIndex = 16;
				this->deleteButtonCommand->Text = L"Supprimer";
				this->deleteButtonCommand->UseVisualStyleBackColor = true;
				this->deleteButtonCommand->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonCommand_Click);
				// 
				// modifyButtonCommand
				// 
				this->modifyButtonCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->modifyButtonCommand->Location = System::Drawing::Point(209, 366);
				this->modifyButtonCommand->Margin = System::Windows::Forms::Padding(4);
				this->modifyButtonCommand->Name = L"modifyButtonCommand";
				this->modifyButtonCommand->Size = System::Drawing::Size(103, 39);
				this->modifyButtonCommand->TabIndex = 15;
				this->modifyButtonCommand->Text = L"Modifier";
				this->modifyButtonCommand->UseVisualStyleBackColor = true;
				// 
				// addButtonCommand
				// 
				this->addButtonCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->addButtonCommand->Location = System::Drawing::Point(103, 366);
				this->addButtonCommand->Margin = System::Windows::Forms::Padding(4);
				this->addButtonCommand->Name = L"addButtonCommand";
				this->addButtonCommand->Size = System::Drawing::Size(98, 39);
				this->addButtonCommand->TabIndex = 14;
				this->addButtonCommand->Text = L"Ajouter";
				this->addButtonCommand->UseVisualStyleBackColor = true;
				this->addButtonCommand->Click += gcnew System::EventHandler(this, &MyForm::addButtonCommand_Click);
				// 
				// dataGridViewCommand
				// 
				this->dataGridViewCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->dataGridViewCommand->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->dataGridViewCommand->Location = System::Drawing::Point(9, 39);
				this->dataGridViewCommand->Margin = System::Windows::Forms::Padding(4);
				this->dataGridViewCommand->Name = L"dataGridViewCommand";
				this->dataGridViewCommand->RowHeadersWidth = 51;
				this->dataGridViewCommand->Size = System::Drawing::Size(428, 319);
				this->dataGridViewCommand->TabIndex = 13;
				// 
				// refreshButtonCommand
				// 
				this->refreshButtonCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->refreshButtonCommand->Location = System::Drawing::Point(411, 9);
				this->refreshButtonCommand->Margin = System::Windows::Forms::Padding(4);
				this->refreshButtonCommand->Name = L"refreshButtonCommand";
				this->refreshButtonCommand->Size = System::Drawing::Size(27, 25);
				this->refreshButtonCommand->TabIndex = 12;
				this->refreshButtonCommand->UseVisualStyleBackColor = true;
				// 
				// searchButtonCommand
				// 
				this->searchButtonCommand->Location = System::Drawing::Point(281, 9);
				this->searchButtonCommand->Margin = System::Windows::Forms::Padding(4);
				this->searchButtonCommand->Name = L"searchButtonCommand";
				this->searchButtonCommand->Size = System::Drawing::Size(100, 25);
				this->searchButtonCommand->TabIndex = 7;
				this->searchButtonCommand->Text = L"Rechercher";
				this->searchButtonCommand->UseVisualStyleBackColor = true;
				// 
				// searchTextBoxCommand
				// 
				this->searchTextBoxCommand->ForeColor = System::Drawing::Color::DimGray;
				this->searchTextBoxCommand->Location = System::Drawing::Point(9, 9);
				this->searchTextBoxCommand->Margin = System::Windows::Forms::Padding(4);
				this->searchTextBoxCommand->Name = L"searchTextBoxCommand";
				this->searchTextBoxCommand->Size = System::Drawing::Size(263, 22);
				this->searchTextBoxCommand->TabIndex = 6;
				this->searchTextBoxCommand->Text = L"Entrez une recherche ici...";
				// 
				// tabPageStock
				// 
				this->tabPageStock->Controls->Add(this->MessageBoxLabelStock);
				this->tabPageStock->Controls->Add(this->messageRichTextBoxStock);
				this->tabPageStock->Controls->Add(this->deleteButtonStock);
				this->tabPageStock->Controls->Add(this->modifyButtonStock);
				this->tabPageStock->Controls->Add(this->addButtonStock);
				this->tabPageStock->Controls->Add(this->dataGridViewStock);
				this->tabPageStock->Controls->Add(this->refreshButtonStock);
				this->tabPageStock->Controls->Add(this->searchButtonStock);
				this->tabPageStock->Controls->Add(this->searchTextBoxStock);
				this->tabPageStock->Location = System::Drawing::Point(4, 25);
				this->tabPageStock->Margin = System::Windows::Forms::Padding(4);
				this->tabPageStock->Name = L"tabPageStock";
				this->tabPageStock->Padding = System::Windows::Forms::Padding(4);
				this->tabPageStock->Size = System::Drawing::Size(841, 488);
				this->tabPageStock->TabIndex = 2;
				this->tabPageStock->Text = L"Gestion stock";
				this->tabPageStock->UseVisualStyleBackColor = true;
				// 
				// MessageBoxLabelStock
				// 
				this->MessageBoxLabelStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->MessageBoxLabelStock->AutoSize = true;
				this->MessageBoxLabelStock->Location = System::Drawing::Point(5, 409);
				this->MessageBoxLabelStock->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->MessageBoxLabelStock->Name = L"MessageBoxLabelStock";
				this->MessageBoxLabelStock->Size = System::Drawing::Size(64, 16);
				this->MessageBoxLabelStock->TabIndex = 28;
				this->MessageBoxLabelStock->Text = L"Message";
				// 
				// messageRichTextBoxStock
				// 
				this->messageRichTextBoxStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->messageRichTextBoxStock->Location = System::Drawing::Point(9, 428);
				this->messageRichTextBoxStock->Margin = System::Windows::Forms::Padding(4);
				this->messageRichTextBoxStock->Name = L"messageRichTextBoxStock";
				this->messageRichTextBoxStock->ReadOnly = true;
				this->messageRichTextBoxStock->Size = System::Drawing::Size(816, 52);
				this->messageRichTextBoxStock->TabIndex = 27;
				this->messageRichTextBoxStock->Text = L"";
				// 
				// deleteButtonStock
				// 
				this->deleteButtonStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->deleteButtonStock->Location = System::Drawing::Point(300, 366);
				this->deleteButtonStock->Margin = System::Windows::Forms::Padding(4);
				this->deleteButtonStock->Name = L"deleteButtonStock";
				this->deleteButtonStock->Size = System::Drawing::Size(137, 39);
				this->deleteButtonStock->TabIndex = 26;
				this->deleteButtonStock->Text = L"Supprimer";
				this->deleteButtonStock->UseVisualStyleBackColor = true;
				// 
				// modifyButtonStock
				// 
				this->modifyButtonStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->modifyButtonStock->Location = System::Drawing::Point(155, 366);
				this->modifyButtonStock->Margin = System::Windows::Forms::Padding(4);
				this->modifyButtonStock->Name = L"modifyButtonStock";
				this->modifyButtonStock->Size = System::Drawing::Size(137, 39);
				this->modifyButtonStock->TabIndex = 25;
				this->modifyButtonStock->Text = L"Modifier";
				this->modifyButtonStock->UseVisualStyleBackColor = true;
				// 
				// addButtonStock
				// 
				this->addButtonStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->addButtonStock->Location = System::Drawing::Point(9, 366);
				this->addButtonStock->Margin = System::Windows::Forms::Padding(4);
				this->addButtonStock->Name = L"addButtonStock";
				this->addButtonStock->Size = System::Drawing::Size(137, 39);
				this->addButtonStock->TabIndex = 24;
				this->addButtonStock->Text = L"Ajouter";
				this->addButtonStock->UseVisualStyleBackColor = true;
				// 
				// dataGridViewStock
				// 
				this->dataGridViewStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->dataGridViewStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->dataGridViewStock->Location = System::Drawing::Point(9, 39);
				this->dataGridViewStock->Margin = System::Windows::Forms::Padding(4);
				this->dataGridViewStock->Name = L"dataGridViewStock";
				this->dataGridViewStock->RowHeadersWidth = 51;
				this->dataGridViewStock->Size = System::Drawing::Size(817, 319);
				this->dataGridViewStock->TabIndex = 23;
				// 
				// refreshButtonStock
				// 
				this->refreshButtonStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->refreshButtonStock->Location = System::Drawing::Point(800, 7);
				this->refreshButtonStock->Margin = System::Windows::Forms::Padding(4);
				this->refreshButtonStock->Name = L"refreshButtonStock";
				this->refreshButtonStock->Size = System::Drawing::Size(27, 25);
				this->refreshButtonStock->TabIndex = 22;
				this->refreshButtonStock->UseVisualStyleBackColor = true;
				// 
				// searchButtonStock
				// 
				this->searchButtonStock->Location = System::Drawing::Point(281, 9);
				this->searchButtonStock->Margin = System::Windows::Forms::Padding(4);
				this->searchButtonStock->Name = L"searchButtonStock";
				this->searchButtonStock->Size = System::Drawing::Size(100, 25);
				this->searchButtonStock->TabIndex = 21;
				this->searchButtonStock->Text = L"Rechercher";
				this->searchButtonStock->UseVisualStyleBackColor = true;
				// 
				// searchTextBoxStock
				// 
				this->searchTextBoxStock->ForeColor = System::Drawing::Color::DimGray;
				this->searchTextBoxStock->Location = System::Drawing::Point(9, 9);
				this->searchTextBoxStock->Margin = System::Windows::Forms::Padding(4);
				this->searchTextBoxStock->Name = L"searchTextBoxStock";
				this->searchTextBoxStock->Size = System::Drawing::Size(263, 22);
				this->searchTextBoxStock->TabIndex = 20;
				this->searchTextBoxStock->Text = L"Entrez une recherche ici...";
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(849, 522);
				this->Controls->Add(this->tabControl1);
				this->Margin = System::Windows::Forms::Padding(4);
				this->MinimumSize = System::Drawing::Size(735, 531);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
				this->tabControl1->ResumeLayout(false);
				this->tabPageClient->ResumeLayout(false);
				this->tabPageClient->PerformLayout();
				this->tabPageCommand->ResumeLayout(false);
				this->tabPageCommand->PerformLayout();
				this->tabControl2->ResumeLayout(false);
				this->tabPageClientInCommand->ResumeLayout(false);
				this->tabPageClientInCommand->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClientInCommand))->EndInit();
				this->tabPageStockInCommand->ResumeLayout(false);
				this->tabPageStockInCommand->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockInCommandGridView))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommand))->EndInit();
				this->tabPageStock->ResumeLayout(false);
				this->tabPageStock->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->EndInit();
				this->ResumeLayout(false);

			}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void toolStripContainer1_TopToolStripPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void addButtonCommand_Click(System::Object^ sender, System::EventArgs^ e) {
			int selectedIndex;
			int idClient;
			//ajout de getter apres ca depend du bouton
			
			if (dataGridViewClient->SelectedRows->Count > 0)
			{

				selectedIndex = this->dataGridViewClient->SelectedRows[0]->Index;
				DataGridViewRow^ selectedRow = dataGridViewCommand->Rows[selectedIndex];
				idClient = (System::Convert::ToInt32(selectedRow->Cells[0]->Value));
				this->ServiceCommand->customerMapper->setId(idClient);
				this->ServiceCommand->commandMapper->setIdCustomer(idClient);
				String^ s = System::Convert::ToString(selectedRow->Cells[1]->Value);
				this->ServiceCommand->customerMapper->setLastName(System::Convert::ToString(selectedRow->Cells[1]->Value));
				this->ServiceCommand->customerMapper->setFirstName(System::Convert::ToString(selectedRow->Cells[2]->Value));
				this->ServiceCommand->adressMapper->city = System::Convert::ToString(selectedRow->Cells[8]->Value);
				//
				

				if (s != nullptr)
				{
					int lastEmptyRowIndex = -1;

					for (int i = dataGridViewClient->Rows->Count - 1; i >= 0; i--)
					{
						DataGridViewRow^ row = dataGridViewClient->Rows[i];

						// Check if all cells in the row are empty
						bool isEmpty = true;
						for each (DataGridViewCell ^ cell in row->Cells)
						{
							if (cell->Value != nullptr && cell->Value->ToString() != "")
							{
								isEmpty = false;
								break;
							}
						}

						if (isEmpty)
						{
							lastEmptyRowIndex = i;
							DataGridViewRow^ selectedRow = dataGridViewClient->Rows[lastEmptyRowIndex - 1];
							this->ServiceCommand->commandMapper->setPayMeanName(System::Convert::ToString(selectedRow->Cells[1]->Value));
							this->ServiceCommand->commandMapper->setPayementDate(System::Convert::ToString(selectedRow->Cells[4]->Value));
							this->ServiceCommand->commandMapper->setPresumeDate(System::Convert::ToString(selectedRow->Cells[6]->Value));
							this->ServiceCommand->commandMapper->setEmissionDate(System::Convert::ToString(selectedRow->Cells[7]->Value));
							this->ServiceCommand->commandMapper->setIdCustomer(idClient);
							this->ServiceCommand->CreerCommande(listIDs);
							break;
						}
					}

					
				}
				else
				{
					MessageBox::Show("ya pas de moyen de paiement");
					return;
				}
			}
			else
			{
				MessageBox::Show("ya pas de client selectionne");
				return;
			}



		}
		private: System::Void MiseAjourbtn_Click(System::Object^ sender, System::EventArgs^ e) {
			//initialize datagriwview

			//else if (this->tabControl1->SelectedTab == tabPageCommand) {

				// For the first grid
			try {
				System::Data::DataSet^ d2 = this->ServiceCommand->selectAllCommands("tabcommand");
				this->dataGridViewCommand->DataSource = d2;
				this->dataGridViewCommand->DataMember = "tabcommand";
				this->dataGridViewCommand->Refresh();
				// For the second grid
			
				System::Data::DataSet^ d4 = this->ServiceCommand->selectAllProducts("tabstock");
				this->stockInCommandGridView->DataSource = d4;
				this->stockInCommandGridView->DataMember = "tabstock";
				this->stockInCommandGridView->Refresh();



			
				System::Data::DataSet^ d3 = this->ServiceClient->selectAllCustomers("tabcustomer");
				this->dataGridViewClientInCommand->DataSource = d3;
				this->dataGridViewClientInCommand->DataMember = "tabcustomer";
				this->dataGridViewClientInCommand->Refresh();
			}
			catch (Exception^ ex) {
				// Handle the exception (e.g., display an error message or log the details)
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}




		}
		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
			this->dataGridViewClient->Refresh();
			System::Data::DataSet^ d = this->ServiceClient->selectAllCustomers("tabcustomers");
			this->dataGridViewClient->DataSource = d;
			this->dataGridViewClient->DataMember = "tabcustomers";
			this->dataGridViewClient->Columns["ID_Client"]->Visible = false;
			this->dataGridViewClient->Columns["ID_Adress"]->Visible = false;
			this->dataGridViewClient->Columns["ID_City"]->Visible = false;
			this->dataGridViewClient->Columns["ID_Country"]->Visible = false;

		}
		private: System::Void addButtonClient_Click(System::Object^ sender, System::EventArgs^ e) {

			int lastEmptyRowIndex = -1;

			for (int i = dataGridViewClient->Rows->Count - 1; i >= 0; i--)
			{
				DataGridViewRow^ row = dataGridViewClient->Rows[i];

				// Check if all cells in the row are empty
				bool isEmpty = true;
				for each (DataGridViewCell ^ cell in row->Cells)
				{
					if (cell->Value != nullptr && cell->Value->ToString() != "")
					{
						isEmpty = false;
						break;
					}
				}

				if (isEmpty)
				{
					lastEmptyRowIndex = i;
					DataGridViewRow^ selectedRow = dataGridViewClient->Rows[lastEmptyRowIndex-1];
					this->ServiceClient->adress->setID_Customer(this->ServiceClient->customer->ID_Client);
					this->ServiceClient->customer->setLastName(System::Convert::ToString(selectedRow->Cells[1]->Value));
					this->ServiceClient->customer->setFirstName(System::Convert::ToString(selectedRow->Cells[2]->Value));
					this->ServiceClient->customer->setPhone(System::Convert::ToString(selectedRow->Cells[3]->Value));
					this->ServiceClient->customer->setMail(System::Convert::ToString(selectedRow->Cells[4]->Value));
					this->ServiceClient->adress->setstreet(System::Convert::ToString(selectedRow->Cells[6]->Value));
					this->ServiceClient->adress->setcity(System::Convert::ToString(selectedRow->Cells[8]->Value));
					this->ServiceClient->adress->setcountry(System::Convert::ToString(selectedRow->Cells[10]->Value));
					this->ServiceClient->addCustomer();
					break;
				}
			}
			

		}
		private: System::Void modifyButtonClient_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->dataGridViewClient->SelectedRows->Count > 0)
			{
				int selectedIndex;
				// Get the index of the first selected row (assuming single selection mode)
				for (int i = 0; i < dataGridViewClient->SelectedRows->Count; i++)
				{
					selectedIndex = dataGridViewClient->SelectedRows[i]->Index;
					DataGridViewRow^ selectedRow = dataGridViewClient->Rows[selectedIndex];

					this->ServiceClient->customer->setId(System::Convert::ToInt32(selectedRow->Cells[0]->Value));
					this->ServiceClient->adress->setID_Customer(this->ServiceClient->customer->ID_Client);
					this->ServiceClient->customer->setLastName(System::Convert::ToString(selectedRow->Cells[1]->Value));
					this->ServiceClient->customer->setFirstName(System::Convert::ToString(selectedRow->Cells[2]->Value));
					this->ServiceClient->customer->setPhone(System::Convert::ToString(selectedRow->Cells[3]->Value));
					this->ServiceClient->customer->setMail(System::Convert::ToString(selectedRow->Cells[4]->Value));
					this->ServiceClient->adress->setID_Adress(System::Convert::ToInt32(selectedRow->Cells[5]->Value));
					this->ServiceClient->adress->setstreet(System::Convert::ToString(selectedRow->Cells[6]->Value));
					this->ServiceClient->adress->setID_city(System::Convert::ToInt32(selectedRow->Cells[7]->Value));
					this->ServiceClient->adress->setcity(System::Convert::ToString(selectedRow->Cells[8]->Value));
					this->ServiceClient->adress->setID_country(System::Convert::ToInt32(selectedRow->Cells[9]->Value));//inchangeable nrmlt
					this->ServiceClient->adress->setcountry(System::Convert::ToString(selectedRow->Cells[10]->Value));
					try {
						this->ServiceClient->ModifierClient();
					}
					catch (Exception^ e)
					{
						MessageBox::Show("error", e->Message);
					}
				}


			}
			else
			{
				MessageBox::Show("t'as rien change");
				return;
			}
		}
		
private: System::Void deleteButtonClient_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewClient->SelectedRows->Count > 0)
	{
		int selectedIndex;
		// Get the index of the first selected row (assuming single selection mode)
		for (int i = 0; i < dataGridViewClient->SelectedRows->Count; i++)
		{
			selectedIndex = dataGridViewClient->SelectedRows[i]->Index;
			DataGridViewRow^ selectedRow = dataGridViewClient->Rows[selectedIndex];

			this->ServiceClient->customer->setId(System::Convert::ToInt32(selectedRow->Cells[0]->Value));
			this->ServiceClient->adress->setID_Customer(this->ServiceClient->customer->ID_Client);
			this->ServiceClient->adress->setID_Adress(System::Convert::ToInt32(selectedRow->Cells[5]->Value));
			this->ServiceClient->adress->setID_city(System::Convert::ToInt32(selectedRow->Cells[7]->Value));
			this->ServiceClient->adress->setID_country(System::Convert::ToInt32(selectedRow->Cells[9]->Value));
			try {
				this->ServiceClient->supprimerClient();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("error", e->Message);
			}
		}



	}
	else
	{
		MessageBox::Show("select properly the client to delete");
	}
}
private: System::Void deleteButtonCommand_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedIndex;

	if (this->dataGridViewCommand->SelectedRows->Count > 0)
	{
		
		// Get the index of the first selected row (assuming single selection mode)
		for (int i = 0; i < dataGridViewCommand->SelectedRows->Count; i++)
		{
			//cli::array<int>^ ArrayIDs;

			selectedIndex = dataGridViewCommand->SelectedRows[i]->Index;
			DataGridViewRow^ selectedRow = dataGridViewCommand->Rows[selectedIndex];
			int idOrder = (System::Convert::ToInt32(selectedRow->Cells[2]->Value));
			for each (DataGridViewRow ^ row in this->dataGridViewCommand->Rows)
			{
				// Assuming your columns are at index 0 and 1, change accordingly
				Object^ valueInColumnID = row->Cells[2]->Value;

				if (valueInColumnID != nullptr  && Convert::ToInt32(valueInColumnID) == idOrder )
				{
					int idProduit = System::Convert::ToInt32(selectedRow->Cells[9]->Value);
					int quantity = System::Convert::ToInt32(selectedRow->Cells[11]->Value);
					listIDs->Add(Tuple::Create(idProduit, quantity));
				}
			}
			
			try {
				this->ServiceCommand->commandMapper->setID(idOrder);
				this->ServiceCommand->SupprimerCommande(listIDs);

			}
			catch (Exception^ e)
			{
				MessageBox::Show("Une erreur s'est produite : " + e->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	else
	{
		Console::WriteLine("No row selected");
	}








}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedIndex;

	if (this->stockInCommandGridView->SelectedRows->Count > 0)
	{
		int number = System::Convert::ToInt32(textBox1->Text);
		// Get the index of the first selected row (assuming single selection mode)
		for (int i = 0; i < stockInCommandGridView->SelectedRows->Count; i++)
		{
			//cli::array<int>^ ArrayIDs;

			selectedIndex = stockInCommandGridView->SelectedRows[i]->Index;
			DataGridViewRow^ selectedRow = stockInCommandGridView->Rows[selectedIndex];
			int quantite = (System::Convert::ToInt32(selectedRow->Cells[5]->Value));
			int idProduit = (System::Convert::ToInt32(selectedRow->Cells[0]->Value));
			if (quantite - number < 0)
			{
				MessageBox::Show("quantite de produit insuffisante");
				return;
			}
			else
			{
				listIDs->Add(Tuple::Create(idProduit, number));
				richTextBoxCommand->AppendText("product id: "+ idProduit+" added quantity : "+ number);
			}
			try {

			}
			catch (Exception^ e)
			{
				MessageBox::Show("Une erreur s'est produite : " + e->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}



	}
	else
	{
		Console::WriteLine("No row selected");
	}
}
private: System::Void stockInCommandGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
	

