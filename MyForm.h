#pragma once

namespace porjet6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
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




	private: System::Windows::Forms::TabPage^ tabPageStockInCommand;
	private: System::Windows::Forms::Button^ clientInCommandRefreshButton;
	private: System::Windows::Forms::Button^ clientInCommandSearchButton;
	private: System::Windows::Forms::TextBox^ clientInCommandSearchBox;
	private: System::Windows::Forms::DataGridView^ dataGridViewClientInCommand;
	private: System::Windows::Forms::Button^ stockInCommandRefreshButton;
	private: System::Windows::Forms::Button^ stockInCommandSearchButton;
	private: System::Windows::Forms::TextBox^ stockInCommandSearchBox;
	private: System::Windows::Forms::DataGridView^ stockInCommandGridView;









	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->tabPageCommand = (gcnew System::Windows::Forms::TabPage());
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
			this->dataGridViewClient->Location = System::Drawing::Point(7, 32);
			this->dataGridViewClient->Name = L"dataGridViewClient";
			this->dataGridViewClient->Size = System::Drawing::Size(613, 259);
			this->dataGridViewClient->TabIndex = 3;
			// 
			// searchTextBoxClient
			// 
			this->searchTextBoxClient->ForeColor = System::Drawing::Color::DimGray;
			this->searchTextBoxClient->Location = System::Drawing::Point(7, 7);
			this->searchTextBoxClient->Name = L"searchTextBoxClient";
			this->searchTextBoxClient->Size = System::Drawing::Size(198, 20);
			this->searchTextBoxClient->TabIndex = 5;
			this->searchTextBoxClient->Text = L"Entrez une recherche ici...";
			// 
			// searchButtonClient
			// 
			this->searchButtonClient->Location = System::Drawing::Point(211, 7);
			this->searchButtonClient->Name = L"searchButtonClient";
			this->searchButtonClient->Size = System::Drawing::Size(75, 20);
			this->searchButtonClient->TabIndex = 6;
			this->searchButtonClient->Text = L"Rechercher";
			this->searchButtonClient->UseVisualStyleBackColor = true;
			// 
			// addButtonClient
			// 
			this->addButtonClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->addButtonClient->Location = System::Drawing::Point(7, 297);
			this->addButtonClient->Name = L"addButtonClient";
			this->addButtonClient->Size = System::Drawing::Size(103, 32);
			this->addButtonClient->TabIndex = 7;
			this->addButtonClient->Text = L"Ajouter";
			this->addButtonClient->UseVisualStyleBackColor = true;
			// 
			// modifyButtonClient
			// 
			this->modifyButtonClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->modifyButtonClient->Location = System::Drawing::Point(116, 297);
			this->modifyButtonClient->Name = L"modifyButtonClient";
			this->modifyButtonClient->Size = System::Drawing::Size(103, 32);
			this->modifyButtonClient->TabIndex = 8;
			this->modifyButtonClient->Text = L"Modifier";
			this->modifyButtonClient->UseVisualStyleBackColor = true;
			// 
			// deleteButtonClient
			// 
			this->deleteButtonClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->deleteButtonClient->Location = System::Drawing::Point(225, 297);
			this->deleteButtonClient->Name = L"deleteButtonClient";
			this->deleteButtonClient->Size = System::Drawing::Size(103, 32);
			this->deleteButtonClient->TabIndex = 9;
			this->deleteButtonClient->Text = L"Supprimer";
			this->deleteButtonClient->UseVisualStyleBackColor = true;
			// 
			// refreshButtonClient
			// 
			this->refreshButtonClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->refreshButtonClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refreshButtonClient.Image")));
			this->refreshButtonClient->Location = System::Drawing::Point(600, 6);
			this->refreshButtonClient->Name = L"refreshButtonClient";
			this->refreshButtonClient->Size = System::Drawing::Size(20, 20);
			this->refreshButtonClient->TabIndex = 11;
			this->refreshButtonClient->UseVisualStyleBackColor = true;
			// 
			// messageTextBoxClient
			// 
			this->messageTextBoxClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->messageTextBoxClient->Location = System::Drawing::Point(7, 348);
			this->messageTextBoxClient->Name = L"messageTextBoxClient";
			this->messageTextBoxClient->ReadOnly = true;
			this->messageTextBoxClient->Size = System::Drawing::Size(613, 43);
			this->messageTextBoxClient->TabIndex = 12;
			this->messageTextBoxClient->Text = L"";
			// 
			// messageBoxLabelClient
			// 
			this->messageBoxLabelClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->messageBoxLabelClient->AutoSize = true;
			this->messageBoxLabelClient->Location = System::Drawing::Point(4, 332);
			this->messageBoxLabelClient->Name = L"messageBoxLabelClient";
			this->messageBoxLabelClient->Size = System::Drawing::Size(50, 13);
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
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(637, 420);
			this->tabControl1->TabIndex = 14;
			// 
			// tabPageClient
			// 
			this->tabPageClient->Controls->Add(this->dataGridViewClient);
			this->tabPageClient->Controls->Add(this->messageBoxLabelClient);
			this->tabPageClient->Controls->Add(this->searchTextBoxClient);
			this->tabPageClient->Controls->Add(this->messageTextBoxClient);
			this->tabPageClient->Controls->Add(this->searchButtonClient);
			this->tabPageClient->Controls->Add(this->refreshButtonClient);
			this->tabPageClient->Controls->Add(this->deleteButtonClient);
			this->tabPageClient->Controls->Add(this->addButtonClient);
			this->tabPageClient->Controls->Add(this->modifyButtonClient);
			this->tabPageClient->Location = System::Drawing::Point(4, 22);
			this->tabPageClient->Name = L"tabPageClient";
			this->tabPageClient->Padding = System::Windows::Forms::Padding(3);
			this->tabPageClient->Size = System::Drawing::Size(629, 394);
			this->tabPageClient->TabIndex = 0;
			this->tabPageClient->Text = L"Gestion clients";
			this->tabPageClient->UseVisualStyleBackColor = true;
			// 
			// tabPageCommand
			// 
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
			this->tabPageCommand->Location = System::Drawing::Point(4, 22);
			this->tabPageCommand->Name = L"tabPageCommand";
			this->tabPageCommand->Padding = System::Windows::Forms::Padding(3);
			this->tabPageCommand->Size = System::Drawing::Size(629, 394);
			this->tabPageCommand->TabIndex = 1;
			this->tabPageCommand->Text = L"Gestion commandes";
			this->tabPageCommand->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl2->Controls->Add(this->tabPageClientInCommand);
			this->tabControl2->Controls->Add(this->tabPageStockInCommand);
			this->tabControl2->Location = System::Drawing::Point(334, 7);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(286, 284);
			this->tabControl2->TabIndex = 20;
			// 
			// tabPageClientInCommand
			// 
			this->tabPageClientInCommand->Controls->Add(this->clientInCommandRefreshButton);
			this->tabPageClientInCommand->Controls->Add(this->clientInCommandSearchButton);
			this->tabPageClientInCommand->Controls->Add(this->clientInCommandSearchBox);
			this->tabPageClientInCommand->Controls->Add(this->dataGridViewClientInCommand);
			this->tabPageClientInCommand->Location = System::Drawing::Point(4, 22);
			this->tabPageClientInCommand->Name = L"tabPageClientInCommand";
			this->tabPageClientInCommand->Padding = System::Windows::Forms::Padding(3);
			this->tabPageClientInCommand->Size = System::Drawing::Size(278, 258);
			this->tabPageClientInCommand->TabIndex = 0;
			this->tabPageClientInCommand->Text = L"Clients view";
			this->tabPageClientInCommand->UseVisualStyleBackColor = true;
			// 
			// clientInCommandRefreshButton
			// 
			this->clientInCommandRefreshButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->clientInCommandRefreshButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clientInCommandRefreshButton.Image")));
			this->clientInCommandRefreshButton->Location = System::Drawing::Point(258, 6);
			this->clientInCommandRefreshButton->Name = L"clientInCommandRefreshButton";
			this->clientInCommandRefreshButton->Size = System::Drawing::Size(20, 20);
			this->clientInCommandRefreshButton->TabIndex = 21;
			this->clientInCommandRefreshButton->UseVisualStyleBackColor = true;
			// 
			// clientInCommandSearchButton
			// 
			this->clientInCommandSearchButton->Location = System::Drawing::Point(146, 6);
			this->clientInCommandSearchButton->Name = L"clientInCommandSearchButton";
			this->clientInCommandSearchButton->Size = System::Drawing::Size(75, 20);
			this->clientInCommandSearchButton->TabIndex = 16;
			this->clientInCommandSearchButton->Text = L"Rechercher";
			this->clientInCommandSearchButton->UseVisualStyleBackColor = true;
			// 
			// clientInCommandSearchBox
			// 
			this->clientInCommandSearchBox->ForeColor = System::Drawing::Color::DimGray;
			this->clientInCommandSearchBox->Location = System::Drawing::Point(3, 6);
			this->clientInCommandSearchBox->Name = L"clientInCommandSearchBox";
			this->clientInCommandSearchBox->Size = System::Drawing::Size(137, 20);
			this->clientInCommandSearchBox->TabIndex = 15;
			this->clientInCommandSearchBox->Text = L"Entrez une recherche ici...";
			// 
			// dataGridViewClientInCommand
			// 
			this->dataGridViewClientInCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewClientInCommand->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClientInCommand->Location = System::Drawing::Point(0, 32);
			this->dataGridViewClientInCommand->Name = L"dataGridViewClientInCommand";
			this->dataGridViewClientInCommand->Size = System::Drawing::Size(278, 226);
			this->dataGridViewClientInCommand->TabIndex = 14;
			// 
			// tabPageStockInCommand
			// 
			this->tabPageStockInCommand->Controls->Add(this->stockInCommandRefreshButton);
			this->tabPageStockInCommand->Controls->Add(this->stockInCommandSearchButton);
			this->tabPageStockInCommand->Controls->Add(this->stockInCommandSearchBox);
			this->tabPageStockInCommand->Controls->Add(this->stockInCommandGridView);
			this->tabPageStockInCommand->Location = System::Drawing::Point(4, 22);
			this->tabPageStockInCommand->Name = L"tabPageStockInCommand";
			this->tabPageStockInCommand->Padding = System::Windows::Forms::Padding(3);
			this->tabPageStockInCommand->Size = System::Drawing::Size(278, 258);
			this->tabPageStockInCommand->TabIndex = 1;
			this->tabPageStockInCommand->Text = L"Stock view";
			this->tabPageStockInCommand->UseVisualStyleBackColor = true;
			// 
			// stockInCommandRefreshButton
			// 
			this->stockInCommandRefreshButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->stockInCommandRefreshButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stockInCommandRefreshButton.Image")));
			this->stockInCommandRefreshButton->Location = System::Drawing::Point(258, 6);
			this->stockInCommandRefreshButton->Name = L"stockInCommandRefreshButton";
			this->stockInCommandRefreshButton->Size = System::Drawing::Size(20, 20);
			this->stockInCommandRefreshButton->TabIndex = 25;
			this->stockInCommandRefreshButton->UseVisualStyleBackColor = true;
			// 
			// stockInCommandSearchButton
			// 
			this->stockInCommandSearchButton->Location = System::Drawing::Point(146, 6);
			this->stockInCommandSearchButton->Name = L"stockInCommandSearchButton";
			this->stockInCommandSearchButton->Size = System::Drawing::Size(75, 20);
			this->stockInCommandSearchButton->TabIndex = 24;
			this->stockInCommandSearchButton->Text = L"Rechercher";
			this->stockInCommandSearchButton->UseVisualStyleBackColor = true;
			// 
			// stockInCommandSearchBox
			// 
			this->stockInCommandSearchBox->ForeColor = System::Drawing::Color::DimGray;
			this->stockInCommandSearchBox->Location = System::Drawing::Point(3, 6);
			this->stockInCommandSearchBox->Name = L"stockInCommandSearchBox";
			this->stockInCommandSearchBox->Size = System::Drawing::Size(137, 20);
			this->stockInCommandSearchBox->TabIndex = 23;
			this->stockInCommandSearchBox->Text = L"Entrez une recherche ici...";
			// 
			// stockInCommandGridView
			// 
			this->stockInCommandGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stockInCommandGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->stockInCommandGridView->Location = System::Drawing::Point(0, 32);
			this->stockInCommandGridView->Name = L"stockInCommandGridView";
			this->stockInCommandGridView->Size = System::Drawing::Size(278, 226);
			this->stockInCommandGridView->TabIndex = 22;
			// 
			// billButton
			// 
			this->billButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->billButton->Location = System::Drawing::Point(334, 297);
			this->billButton->Name = L"billButton";
			this->billButton->Size = System::Drawing::Size(286, 32);
			this->billButton->TabIndex = 19;
			this->billButton->Text = L"Editer facture";
			this->billButton->UseVisualStyleBackColor = true;
			// 
			// messageTextBoxLabelCommand
			// 
			this->messageTextBoxLabelCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->messageTextBoxLabelCommand->AutoSize = true;
			this->messageTextBoxLabelCommand->Location = System::Drawing::Point(4, 332);
			this->messageTextBoxLabelCommand->Name = L"messageTextBoxLabelCommand";
			this->messageTextBoxLabelCommand->Size = System::Drawing::Size(50, 13);
			this->messageTextBoxLabelCommand->TabIndex = 18;
			this->messageTextBoxLabelCommand->Text = L"Message";
			// 
			// richTextBoxCommand
			// 
			this->richTextBoxCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBoxCommand->Location = System::Drawing::Point(7, 348);
			this->richTextBoxCommand->Name = L"richTextBoxCommand";
			this->richTextBoxCommand->ReadOnly = true;
			this->richTextBoxCommand->Size = System::Drawing::Size(613, 43);
			this->richTextBoxCommand->TabIndex = 17;
			this->richTextBoxCommand->Text = L"";
			// 
			// deleteButtonCommand
			// 
			this->deleteButtonCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->deleteButtonCommand->Location = System::Drawing::Point(225, 297);
			this->deleteButtonCommand->Name = L"deleteButtonCommand";
			this->deleteButtonCommand->Size = System::Drawing::Size(103, 32);
			this->deleteButtonCommand->TabIndex = 16;
			this->deleteButtonCommand->Text = L"Supprimer";
			this->deleteButtonCommand->UseVisualStyleBackColor = true;
			// 
			// modifyButtonCommand
			// 
			this->modifyButtonCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->modifyButtonCommand->Location = System::Drawing::Point(116, 297);
			this->modifyButtonCommand->Name = L"modifyButtonCommand";
			this->modifyButtonCommand->Size = System::Drawing::Size(103, 32);
			this->modifyButtonCommand->TabIndex = 15;
			this->modifyButtonCommand->Text = L"Modifier";
			this->modifyButtonCommand->UseVisualStyleBackColor = true;
			// 
			// addButtonCommand
			// 
			this->addButtonCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->addButtonCommand->Location = System::Drawing::Point(7, 297);
			this->addButtonCommand->Name = L"addButtonCommand";
			this->addButtonCommand->Size = System::Drawing::Size(103, 32);
			this->addButtonCommand->TabIndex = 14;
			this->addButtonCommand->Text = L"Ajouter";
			this->addButtonCommand->UseVisualStyleBackColor = true;
			// 
			// dataGridViewCommand
			// 
			this->dataGridViewCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewCommand->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCommand->Location = System::Drawing::Point(7, 32);
			this->dataGridViewCommand->Name = L"dataGridViewCommand";
			this->dataGridViewCommand->Size = System::Drawing::Size(321, 259);
			this->dataGridViewCommand->TabIndex = 13;
			// 
			// refreshButtonCommand
			// 
			this->refreshButtonCommand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->refreshButtonCommand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refreshButtonCommand.Image")));
			this->refreshButtonCommand->Location = System::Drawing::Point(308, 7);
			this->refreshButtonCommand->Name = L"refreshButtonCommand";
			this->refreshButtonCommand->Size = System::Drawing::Size(20, 20);
			this->refreshButtonCommand->TabIndex = 12;
			this->refreshButtonCommand->UseVisualStyleBackColor = true;
			// 
			// searchButtonCommand
			// 
			this->searchButtonCommand->Location = System::Drawing::Point(211, 7);
			this->searchButtonCommand->Name = L"searchButtonCommand";
			this->searchButtonCommand->Size = System::Drawing::Size(75, 20);
			this->searchButtonCommand->TabIndex = 7;
			this->searchButtonCommand->Text = L"Rechercher";
			this->searchButtonCommand->UseVisualStyleBackColor = true;
			// 
			// searchTextBoxCommand
			// 
			this->searchTextBoxCommand->ForeColor = System::Drawing::Color::DimGray;
			this->searchTextBoxCommand->Location = System::Drawing::Point(7, 7);
			this->searchTextBoxCommand->Name = L"searchTextBoxCommand";
			this->searchTextBoxCommand->Size = System::Drawing::Size(198, 20);
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
			this->tabPageStock->Location = System::Drawing::Point(4, 22);
			this->tabPageStock->Name = L"tabPageStock";
			this->tabPageStock->Padding = System::Windows::Forms::Padding(3);
			this->tabPageStock->Size = System::Drawing::Size(629, 394);
			this->tabPageStock->TabIndex = 2;
			this->tabPageStock->Text = L"Gestion stock";
			this->tabPageStock->UseVisualStyleBackColor = true;
			// 
			// MessageBoxLabelStock
			// 
			this->MessageBoxLabelStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->MessageBoxLabelStock->AutoSize = true;
			this->MessageBoxLabelStock->Location = System::Drawing::Point(4, 332);
			this->MessageBoxLabelStock->Name = L"MessageBoxLabelStock";
			this->MessageBoxLabelStock->Size = System::Drawing::Size(50, 13);
			this->MessageBoxLabelStock->TabIndex = 28;
			this->MessageBoxLabelStock->Text = L"Message";
			// 
			// messageRichTextBoxStock
			// 
			this->messageRichTextBoxStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->messageRichTextBoxStock->Location = System::Drawing::Point(7, 348);
			this->messageRichTextBoxStock->Name = L"messageRichTextBoxStock";
			this->messageRichTextBoxStock->ReadOnly = true;
			this->messageRichTextBoxStock->Size = System::Drawing::Size(613, 43);
			this->messageRichTextBoxStock->TabIndex = 27;
			this->messageRichTextBoxStock->Text = L"";
			// 
			// deleteButtonStock
			// 
			this->deleteButtonStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->deleteButtonStock->Location = System::Drawing::Point(225, 297);
			this->deleteButtonStock->Name = L"deleteButtonStock";
			this->deleteButtonStock->Size = System::Drawing::Size(103, 32);
			this->deleteButtonStock->TabIndex = 26;
			this->deleteButtonStock->Text = L"Supprimer";
			this->deleteButtonStock->UseVisualStyleBackColor = true;
			// 
			// modifyButtonStock
			// 
			this->modifyButtonStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->modifyButtonStock->Location = System::Drawing::Point(116, 297);
			this->modifyButtonStock->Name = L"modifyButtonStock";
			this->modifyButtonStock->Size = System::Drawing::Size(103, 32);
			this->modifyButtonStock->TabIndex = 25;
			this->modifyButtonStock->Text = L"Modifier";
			this->modifyButtonStock->UseVisualStyleBackColor = true;
			// 
			// addButtonStock
			// 
			this->addButtonStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->addButtonStock->Location = System::Drawing::Point(7, 297);
			this->addButtonStock->Name = L"addButtonStock";
			this->addButtonStock->Size = System::Drawing::Size(103, 32);
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
			this->dataGridViewStock->Location = System::Drawing::Point(7, 32);
			this->dataGridViewStock->Name = L"dataGridViewStock";
			this->dataGridViewStock->Size = System::Drawing::Size(613, 259);
			this->dataGridViewStock->TabIndex = 23;
			// 
			// refreshButtonStock
			// 
			this->refreshButtonStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->refreshButtonStock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refreshButtonStock.Image")));
			this->refreshButtonStock->Location = System::Drawing::Point(600, 6);
			this->refreshButtonStock->Name = L"refreshButtonStock";
			this->refreshButtonStock->Size = System::Drawing::Size(20, 20);
			this->refreshButtonStock->TabIndex = 22;
			this->refreshButtonStock->UseVisualStyleBackColor = true;
			// 
			// searchButtonStock
			// 
			this->searchButtonStock->Location = System::Drawing::Point(211, 7);
			this->searchButtonStock->Name = L"searchButtonStock";
			this->searchButtonStock->Size = System::Drawing::Size(75, 20);
			this->searchButtonStock->TabIndex = 21;
			this->searchButtonStock->Text = L"Rechercher";
			this->searchButtonStock->UseVisualStyleBackColor = true;
			// 
			// searchTextBoxStock
			// 
			this->searchTextBoxStock->ForeColor = System::Drawing::Color::DimGray;
			this->searchTextBoxStock->Location = System::Drawing::Point(7, 7);
			this->searchTextBoxStock->Name = L"searchTextBoxStock";
			this->searchTextBoxStock->Size = System::Drawing::Size(198, 20);
			this->searchTextBoxStock->TabIndex = 20;
			this->searchTextBoxStock->Text = L"Entrez une recherche ici...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 424);
			this->Controls->Add(this->tabControl1);
			this->MinimumSize = System::Drawing::Size(556, 440);
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
};
}
