#pragma once
#include <string>
#include <vector>
#include"triee.h"
#include <fstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>
using namespace std;
#include "user.h"
triee t;
vector<char> cc;
vector<string> stringarr;
user project;
ofstream myfile("trie.txt",true);
ifstream Myfile("trie.txt");

namespace Project25 {


	
	 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ IBtn0;

	private: System::Windows::Forms::Button^ IBtn2;
	private: System::Windows::Forms::Button^ IBtn3;
	private: System::Windows::Forms::Button^ IBtn6;



	private: System::Windows::Forms::Button^ IBtn5;

	private: System::Windows::Forms::Button^ IBtn4;
	private: System::Windows::Forms::Button^ IBtn7;
	private: System::Windows::Forms::Button^ IBtn9;



	private: System::Windows::Forms::Button^ IBtn8;

	private: System::Windows::Forms::Button^ IBtn1;

	private: System::Windows::Forms::Button^ searchbtn;
	private: System::Windows::Forms::Button^ deletebtn;
	private: System::Windows::Forms::TextBox^ Nametextbox;

	private: System::Windows::Forms::Button^ inertbtn;
	private: System::Windows::Forms::Panel^ contactspn;

	private: System::Windows::Forms::Panel^ pn_container;
	private: System::Windows::Forms::Panel^ searchpn;





	private: System::Windows::Forms::Button^ Contact;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Infobtn;
	private: System::Windows::Forms::Button^ minizebtn;
	private: System::Windows::Forms::Button^ closebtn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ deletepn;
	private: System::Windows::Forms::Button^ deletfunbtn;

	private: System::Windows::Forms::TextBox^ deletetxtbx;











	private: System::Windows::Forms::Panel^ ssearchpn;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::TextBox^ SearchTextbox;











	private: System::Windows::Forms::Label^ numberlabel;

	private: System::Windows::Forms::TextBox^ numbertextbox;
	private: System::Windows::Forms::Label^ namelabel;


	private: System::Windows::Forms::Button^ Finsertbtn;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ deletelbl;
private: System::Windows::Forms::Label^ searnlabelname;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ display;
private: System::Windows::Forms::Panel^ displaypn;
private: System::Windows::Forms::ListBox^ listBox1;











	protected:
































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->IBtn0 = (gcnew System::Windows::Forms::Button());
			this->IBtn2 = (gcnew System::Windows::Forms::Button());
			this->IBtn3 = (gcnew System::Windows::Forms::Button());
			this->IBtn6 = (gcnew System::Windows::Forms::Button());
			this->IBtn5 = (gcnew System::Windows::Forms::Button());
			this->IBtn4 = (gcnew System::Windows::Forms::Button());
			this->IBtn7 = (gcnew System::Windows::Forms::Button());
			this->IBtn9 = (gcnew System::Windows::Forms::Button());
			this->IBtn8 = (gcnew System::Windows::Forms::Button());
			this->IBtn1 = (gcnew System::Windows::Forms::Button());
			this->searchbtn = (gcnew System::Windows::Forms::Button());
			this->deletebtn = (gcnew System::Windows::Forms::Button());
			this->Nametextbox = (gcnew System::Windows::Forms::TextBox());
			this->inertbtn = (gcnew System::Windows::Forms::Button());
			this->contactspn = (gcnew System::Windows::Forms::Panel());
			this->display = (gcnew System::Windows::Forms::Button());
			this->pn_container = (gcnew System::Windows::Forms::Panel());
			this->deletepn = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->deletelbl = (gcnew System::Windows::Forms::Label());
			this->deletfunbtn = (gcnew System::Windows::Forms::Button());
			this->deletetxtbx = (gcnew System::Windows::Forms::TextBox());
			this->ssearchpn = (gcnew System::Windows::Forms::Panel());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->searnlabelname = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SearchTextbox = (gcnew System::Windows::Forms::TextBox());
			this->displaypn = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->searchpn = (gcnew System::Windows::Forms::Panel());
			this->Finsertbtn = (gcnew System::Windows::Forms::Button());
			this->numberlabel = (gcnew System::Windows::Forms::Label());
			this->numbertextbox = (gcnew System::Windows::Forms::TextBox());
			this->namelabel = (gcnew System::Windows::Forms::Label());
			this->Contact = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Infobtn = (gcnew System::Windows::Forms::Button());
			this->minizebtn = (gcnew System::Windows::Forms::Button());
			this->closebtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->contactspn->SuspendLayout();
			this->pn_container->SuspendLayout();
			this->deletepn->SuspendLayout();
			this->ssearchpn->SuspendLayout();
			this->displaypn->SuspendLayout();
			this->searchpn->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// IBtn0
			// 
			this->IBtn0->ForeColor = System::Drawing::Color::Red;
			this->IBtn0->Location = System::Drawing::Point(305, 476);
			this->IBtn0->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn0->Name = L"IBtn0";
			this->IBtn0->Size = System::Drawing::Size(115, 79);
			this->IBtn0->TabIndex = 9;
			this->IBtn0->Text = L"0";
			this->IBtn0->UseVisualStyleBackColor = true;
			// 
			// IBtn2
			// 
			this->IBtn2->ForeColor = System::Drawing::Color::Red;
			this->IBtn2->Location = System::Drawing::Point(305, 205);
			this->IBtn2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn2->Name = L"IBtn2";
			this->IBtn2->Size = System::Drawing::Size(115, 79);
			this->IBtn2->TabIndex = 8;
			this->IBtn2->Text = L"2";
			this->IBtn2->UseVisualStyleBackColor = true;
			this->IBtn2->Click += gcnew System::EventHandler(this, &MyForm::IBtn2_Click);
			// 
			// IBtn3
			// 
			this->IBtn3->ForeColor = System::Drawing::Color::Red;
			this->IBtn3->Location = System::Drawing::Point(478, 205);
			this->IBtn3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn3->Name = L"IBtn3";
			this->IBtn3->Size = System::Drawing::Size(115, 79);
			this->IBtn3->TabIndex = 7;
			this->IBtn3->Text = L"3";
			this->IBtn3->UseVisualStyleBackColor = true;
			this->IBtn3->Click += gcnew System::EventHandler(this, &MyForm::IBtn3_Click);
			// 
			// IBtn6
			// 
			this->IBtn6->ForeColor = System::Drawing::Color::Red;
			this->IBtn6->Location = System::Drawing::Point(478, 302);
			this->IBtn6->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn6->Name = L"IBtn6";
			this->IBtn6->Size = System::Drawing::Size(115, 79);
			this->IBtn6->TabIndex = 6;
			this->IBtn6->Text = L"6";
			this->IBtn6->UseVisualStyleBackColor = true;
			this->IBtn6->Click += gcnew System::EventHandler(this, &MyForm::IBtn6_Click);
			// 
			// IBtn5
			// 
			this->IBtn5->ForeColor = System::Drawing::Color::Red;
			this->IBtn5->Location = System::Drawing::Point(305, 302);
			this->IBtn5->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn5->Name = L"IBtn5";
			this->IBtn5->Size = System::Drawing::Size(115, 79);
			this->IBtn5->TabIndex = 5;
			this->IBtn5->Text = L"5";
			this->IBtn5->UseVisualStyleBackColor = true;
			this->IBtn5->Click += gcnew System::EventHandler(this, &MyForm::IBtn5_Click);
			// 
			// IBtn4
			// 
			this->IBtn4->ForeColor = System::Drawing::Color::Red;
			this->IBtn4->Location = System::Drawing::Point(152, 302);
			this->IBtn4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn4->Name = L"IBtn4";
			this->IBtn4->Size = System::Drawing::Size(115, 79);
			this->IBtn4->TabIndex = 4;
			this->IBtn4->Text = L"4";
			this->IBtn4->UseVisualStyleBackColor = true;
			this->IBtn4->Click += gcnew System::EventHandler(this, &MyForm::IBtn4_Click);
			// 
			// IBtn7
			// 
			this->IBtn7->ForeColor = System::Drawing::Color::Red;
			this->IBtn7->Location = System::Drawing::Point(152, 389);
			this->IBtn7->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn7->Name = L"IBtn7";
			this->IBtn7->Size = System::Drawing::Size(115, 79);
			this->IBtn7->TabIndex = 3;
			this->IBtn7->Text = L"7";
			this->IBtn7->UseVisualStyleBackColor = true;
			this->IBtn7->Click += gcnew System::EventHandler(this, &MyForm::IBtn7_Click);
			// 
			// IBtn9
			// 
			this->IBtn9->ForeColor = System::Drawing::Color::Red;
			this->IBtn9->Location = System::Drawing::Point(478, 389);
			this->IBtn9->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn9->Name = L"IBtn9";
			this->IBtn9->Size = System::Drawing::Size(115, 79);
			this->IBtn9->TabIndex = 2;
			this->IBtn9->Text = L"9";
			this->IBtn9->UseVisualStyleBackColor = true;
			this->IBtn9->Click += gcnew System::EventHandler(this, &MyForm::IBtn9_Click);
			// 
			// IBtn8
			// 
			this->IBtn8->ForeColor = System::Drawing::Color::Red;
			this->IBtn8->Location = System::Drawing::Point(305, 389);
			this->IBtn8->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn8->Name = L"IBtn8";
			this->IBtn8->Size = System::Drawing::Size(115, 79);
			this->IBtn8->TabIndex = 1;
			this->IBtn8->Text = L"8";
			this->IBtn8->UseVisualStyleBackColor = true;
			this->IBtn8->Click += gcnew System::EventHandler(this, &MyForm::IBtn8_Click);
			// 
			// IBtn1
			// 
			this->IBtn1->ForeColor = System::Drawing::Color::Red;
			this->IBtn1->Location = System::Drawing::Point(152, 205);
			this->IBtn1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->IBtn1->Name = L"IBtn1";
			this->IBtn1->Size = System::Drawing::Size(115, 79);
			this->IBtn1->TabIndex = 0;
			this->IBtn1->Text = L"1";
			this->IBtn1->UseVisualStyleBackColor = true;
			this->IBtn1->Click += gcnew System::EventHandler(this, &MyForm::IBtn1_Click);
			// 
			// searchbtn
			// 
			this->searchbtn->ForeColor = System::Drawing::Color::Red;
			this->searchbtn->Location = System::Drawing::Point(10, 262);
			this->searchbtn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->searchbtn->Name = L"searchbtn";
			this->searchbtn->Size = System::Drawing::Size(237, 119);
			this->searchbtn->TabIndex = 16;
			this->searchbtn->Text = L"search";
			this->searchbtn->UseVisualStyleBackColor = true;
			this->searchbtn->Click += gcnew System::EventHandler(this, &MyForm::searchbtn_Click);
			// 
			// deletebtn
			// 
			this->deletebtn->ForeColor = System::Drawing::Color::Red;
			this->deletebtn->Location = System::Drawing::Point(232, 115);
			this->deletebtn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->deletebtn->Name = L"deletebtn";
			this->deletebtn->Size = System::Drawing::Size(237, 119);
			this->deletebtn->TabIndex = 15;
			this->deletebtn->Text = L"delete";
			this->deletebtn->UseVisualStyleBackColor = true;
			this->deletebtn->Click += gcnew System::EventHandler(this, &MyForm::deletebtn_Click);
			// 
			// Nametextbox
			// 
			this->Nametextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nametextbox->Location = System::Drawing::Point(152, 36);
			this->Nametextbox->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Nametextbox->Name = L"Nametextbox";
			this->Nametextbox->Size = System::Drawing::Size(439, 49);
			this->Nametextbox->TabIndex = 13;
			// 
			// inertbtn
			// 
			this->inertbtn->BackColor = System::Drawing::Color::Black;
			this->inertbtn->ForeColor = System::Drawing::Color::Red;
			this->inertbtn->Location = System::Drawing::Point(237, 402);
			this->inertbtn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->inertbtn->Name = L"inertbtn";
			this->inertbtn->Size = System::Drawing::Size(237, 119);
			this->inertbtn->TabIndex = 14;
			this->inertbtn->Text = L"inert";
			this->inertbtn->UseVisualStyleBackColor = false;
			this->inertbtn->Click += gcnew System::EventHandler(this, &MyForm::inertbtn_Click);
			// 
			// contactspn
			// 
			this->contactspn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->contactspn->Controls->Add(this->display);
			this->contactspn->Controls->Add(this->deletebtn);
			this->contactspn->Controls->Add(this->searchbtn);
			this->contactspn->Controls->Add(this->inertbtn);
			this->contactspn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->contactspn->Location = System::Drawing::Point(0, 0);
			this->contactspn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->contactspn->Name = L"contactspn";
			this->contactspn->Size = System::Drawing::Size(780, 786);
			this->contactspn->TabIndex = 5;
			// 
			// display
			// 
			this->display->ForeColor = System::Drawing::Color::Red;
			this->display->Location = System::Drawing::Point(463, 262);
			this->display->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(237, 119);
			this->display->TabIndex = 17;
			this->display->Text = L"Display";
			this->display->UseVisualStyleBackColor = true;
			this->display->Click += gcnew System::EventHandler(this, &MyForm::display_Click);
			// 
			// pn_container
			// 
			this->pn_container->Controls->Add(this->searchpn);
			this->pn_container->Controls->Add(this->deletepn);
			this->pn_container->Controls->Add(this->ssearchpn);
			this->pn_container->Controls->Add(this->displaypn);
			this->pn_container->Controls->Add(this->contactspn);
			this->pn_container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_container->Location = System::Drawing::Point(237, 48);
			this->pn_container->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->pn_container->Name = L"pn_container";
			this->pn_container->Size = System::Drawing::Size(780, 786);
			this->pn_container->TabIndex = 5;
			// 
			// deletepn
			// 
			this->deletepn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->deletepn->Controls->Add(this->label1);
			this->deletepn->Controls->Add(this->deletelbl);
			this->deletepn->Controls->Add(this->deletfunbtn);
			this->deletepn->Controls->Add(this->deletetxtbx);
			this->deletepn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deletepn->Location = System::Drawing::Point(0, 0);
			this->deletepn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->deletepn->Name = L"deletepn";
			this->deletepn->Size = System::Drawing::Size(780, 786);
			this->deletepn->TabIndex = 7;
			this->deletepn->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::deletepn_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(228, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 18);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Enter the name you want to delete ";
			// 
			// deletelbl
			// 
			this->deletelbl->AutoSize = true;
			this->deletelbl->Location = System::Drawing::Point(44, 117);
			this->deletelbl->Name = L"deletelbl";
			this->deletelbl->Size = System::Drawing::Size(57, 18);
			this->deletelbl->TabIndex = 15;
			this->deletelbl->Text = L"Name:";
			// 
			// deletfunbtn
			// 
			this->deletfunbtn->AutoEllipsis = true;
			this->deletfunbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletfunbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->deletfunbtn->Location = System::Drawing::Point(215, 242);
			this->deletfunbtn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->deletfunbtn->Name = L"deletfunbtn";
			this->deletfunbtn->Size = System::Drawing::Size(293, 87);
			this->deletfunbtn->TabIndex = 14;
			this->deletfunbtn->Text = L"Delete";
			this->deletfunbtn->UseVisualStyleBackColor = true;
			this->deletfunbtn->Click += gcnew System::EventHandler(this, &MyForm::deletfunbtn_Click);
			// 
			// deletetxtbx
			// 
			this->deletetxtbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletetxtbx->Location = System::Drawing::Point(152, 104);
			this->deletetxtbx->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->deletetxtbx->Name = L"deletetxtbx";
			this->deletetxtbx->Size = System::Drawing::Size(439, 49);
			this->deletetxtbx->TabIndex = 13;
			// 
			// ssearchpn
			// 
			this->ssearchpn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ssearchpn->Controls->Add(this->button33);
			this->ssearchpn->Controls->Add(this->searnlabelname);
			this->ssearchpn->Controls->Add(this->label3);
			this->ssearchpn->Controls->Add(this->SearchTextbox);
			this->ssearchpn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ssearchpn->Location = System::Drawing::Point(0, 0);
			this->ssearchpn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->ssearchpn->Name = L"ssearchpn";
			this->ssearchpn->Size = System::Drawing::Size(780, 786);
			this->ssearchpn->TabIndex = 8;
			this->ssearchpn->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::ssearchpn_Paint);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button33->Location = System::Drawing::Point(277, 205);
			this->button33->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(144, 64);
			this->button33->TabIndex = 14;
			this->button33->Text = L"Search";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// searnlabelname
			// 
			this->searnlabelname->AutoSize = true;
			this->searnlabelname->Location = System::Drawing::Point(70, 104);
			this->searnlabelname->Name = L"searnlabelname";
			this->searnlabelname->Size = System::Drawing::Size(62, 18);
			this->searnlabelname->TabIndex = 16;
			this->searnlabelname->Text = L"Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(233, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(264, 18);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Enter name you wnt to search for ";
			// 
			// SearchTextbox
			// 
			this->SearchTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchTextbox->Location = System::Drawing::Point(152, 90);
			this->SearchTextbox->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->SearchTextbox->Name = L"SearchTextbox";
			this->SearchTextbox->Size = System::Drawing::Size(439, 49);
			this->SearchTextbox->TabIndex = 13;
			// 
			// displaypn
			// 
			this->displaypn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->displaypn->Controls->Add(this->listBox1);
			this->displaypn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->displaypn->Location = System::Drawing::Point(0, 0);
			this->displaypn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->displaypn->Name = L"displaypn";
			this->displaypn->Size = System::Drawing::Size(780, 786);
			this->displaypn->TabIndex = 9;
			this->displaypn->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::displaypn_Paint);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Name                                       Phone" });
			this->listBox1->Location = System::Drawing::Point(138, 90);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(468, 400);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// searchpn
			// 
			this->searchpn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->searchpn->Controls->Add(this->Finsertbtn);
			this->searchpn->Controls->Add(this->numberlabel);
			this->searchpn->Controls->Add(this->numbertextbox);
			this->searchpn->Controls->Add(this->namelabel);
			this->searchpn->Controls->Add(this->Nametextbox);
			this->searchpn->Controls->Add(this->IBtn0);
			this->searchpn->Controls->Add(this->IBtn2);
			this->searchpn->Controls->Add(this->IBtn3);
			this->searchpn->Controls->Add(this->IBtn6);
			this->searchpn->Controls->Add(this->IBtn5);
			this->searchpn->Controls->Add(this->IBtn4);
			this->searchpn->Controls->Add(this->IBtn7);
			this->searchpn->Controls->Add(this->IBtn9);
			this->searchpn->Controls->Add(this->IBtn8);
			this->searchpn->Controls->Add(this->IBtn1);
			this->searchpn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchpn->Location = System::Drawing::Point(0, 0);
			this->searchpn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->searchpn->Name = L"searchpn";
			this->searchpn->Size = System::Drawing::Size(780, 786);
			this->searchpn->TabIndex = 6;
			// 
			// Finsertbtn
			// 
			this->Finsertbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Finsertbtn->Location = System::Drawing::Point(250, 571);
			this->Finsertbtn->Name = L"Finsertbtn";
			this->Finsertbtn->Size = System::Drawing::Size(247, 56);
			this->Finsertbtn->TabIndex = 17;
			this->Finsertbtn->Text = L"Insert";
			this->Finsertbtn->UseVisualStyleBackColor = true;
			this->Finsertbtn->Click += gcnew System::EventHandler(this, &MyForm::Finsertbtn_Click);
			// 
			// numberlabel
			// 
			this->numberlabel->AutoSize = true;
			this->numberlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numberlabel->Location = System::Drawing::Point(44, 135);
			this->numberlabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->numberlabel->Name = L"numberlabel";
			this->numberlabel->Size = System::Drawing::Size(66, 15);
			this->numberlabel->TabIndex = 16;
			this->numberlabel->Text = L"Number :";
			// 
			// numbertextbox
			// 
			this->numbertextbox->BackColor = System::Drawing::SystemColors::Window;
			this->numbertextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numbertextbox->Location = System::Drawing::Point(154, 117);
			this->numbertextbox->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->numbertextbox->Name = L"numbertextbox";
			this->numbertextbox->Size = System::Drawing::Size(439, 49);
			this->numbertextbox->TabIndex = 15;
			// 
			// namelabel
			// 
			this->namelabel->AutoSize = true;
			this->namelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namelabel->Location = System::Drawing::Point(44, 50);
			this->namelabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->namelabel->Name = L"namelabel";
			this->namelabel->Size = System::Drawing::Size(53, 15);
			this->namelabel->TabIndex = 14;
			this->namelabel->Text = L"Name :";
			// 
			// Contact
			// 
			this->Contact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Contact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Contact->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Contact.Image")));
			this->Contact->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Contact->Location = System::Drawing::Point(0, 58);
			this->Contact->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Contact->Name = L"Contact";
			this->Contact->Size = System::Drawing::Size(237, 64);
			this->Contact->TabIndex = 0;
			this->Contact->Text = L"contacts";
			this->Contact->UseVisualStyleBackColor = false;
			this->Contact->Click += gcnew System::EventHandler(this, &MyForm::Contact_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->Controls->Add(this->Contact);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(237, 186);
			this->panel3->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->flowLayoutPanel1);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 48);
			this->panel2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(237, 786);
			this->panel2->TabIndex = 4;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Gray;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 186);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(237, 600);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(588, 18);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"phone book";
			// 
			// Infobtn
			// 
			this->Infobtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Infobtn.BackgroundImage")));
			this->Infobtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Infobtn->FlatAppearance->BorderSize = 0;
			this->Infobtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Infobtn->Location = System::Drawing::Point(18, 4);
			this->Infobtn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Infobtn->Name = L"Infobtn";
			this->Infobtn->Size = System::Drawing::Size(47, 32);
			this->Infobtn->TabIndex = 5;
			this->Infobtn->UseVisualStyleBackColor = true;
			// 
			// minizebtn
			// 
			this->minizebtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minizebtn.BackgroundImage")));
			this->minizebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->minizebtn->FlatAppearance->BorderSize = 0;
			this->minizebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minizebtn->Location = System::Drawing::Point(910, 4);
			this->minizebtn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->minizebtn->Name = L"minizebtn";
			this->minizebtn->Size = System::Drawing::Size(47, 32);
			this->minizebtn->TabIndex = 3;
			this->minizebtn->UseVisualStyleBackColor = true;
			this->minizebtn->Click += gcnew System::EventHandler(this, &MyForm::minizebtn_Click);
			// 
			// closebtn
			// 
			this->closebtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closebtn.BackgroundImage")));
			this->closebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->closebtn->FlatAppearance->BorderSize = 0;
			this->closebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closebtn->Location = System::Drawing::Point(1023, 4);
			this->closebtn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->closebtn->Name = L"closebtn";
			this->closebtn->Size = System::Drawing::Size(47, 32);
			this->closebtn->TabIndex = 2;
			this->closebtn->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gray;
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->Infobtn);
			this->panel1->Controls->Add(this->minizebtn);
			this->panel1->Controls->Add(this->closebtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1017, 48);
			this->panel1->TabIndex = 3;
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(965, 4);
			this->button11->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(47, 32);
			this->button11->TabIndex = 8;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 834);
			this->Controls->Add(this->pn_container);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"MyForm";
			this->Text = L" ";
			this->contactspn->ResumeLayout(false);
			this->pn_container->ResumeLayout(false);
			this->deletepn->ResumeLayout(false);
			this->deletepn->PerformLayout();
			this->ssearchpn->ResumeLayout(false);
			this->ssearchpn->PerformLayout();
			this->displaypn->ResumeLayout(false);
			this->searchpn->ResumeLayout(false);
			this->searchpn->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void deletebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		deletepn->BringToFront();
		

	}
private: System::Void Contact_Click(System::Object^ sender, System::EventArgs^ e) {
	contactspn->BringToFront();
}



private: System::Void minizebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void inertbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	searchpn->BringToFront();
}

private: System::Void IBtn1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ number = numbertextbox->Text;
	if (!(number->Length >= 11)) {
		numbertextbox->Text = numbertextbox->Text + IBtn1->Text;
	}
	else {
		MessageBox::Show("You cannot enter more than 11 digit", "WARNING!");
	}
}
private: System::Void IBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ number = numbertextbox->Text;
	if (!(number->Length >= 11)) {
		numbertextbox->Text = numbertextbox->Text + IBtn2->Text;
	}
	else {
		MessageBox::Show("You cannot enter more than 11 digit", "WARNING!");
	}
}
private: System::Void IBtn3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ number = numbertextbox->Text;
	if (!(number->Length >= 11)) {
		numbertextbox->Text = numbertextbox->Text + IBtn3->Text;
	}
	else {
		MessageBox::Show("You cannot enter more than 11 digit", "WARNING!");
	}
}
private: System::Void IBtn4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ number = numbertextbox->Text;
	if (!(number->Length >= 11)) {
		numbertextbox->Text = numbertextbox->Text + IBtn4->Text;
	}
	else {
		MessageBox::Show("You cannot enter more than 11 digit", "WARNING!");
	}
}
private: System::Void IBtn5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ number = numbertextbox->Text;
	if (!(number->Length >= 11)) {
		numbertextbox->Text = numbertextbox->Text + IBtn5->Text;
	}
	else {
		MessageBox::Show("You cannot enter more than 11 digit", "WARNING!");
	}
}
private: System::Void IBtn6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ number = numbertextbox->Text;
	if (!(number->Length >= 11)) {
		numbertextbox->Text = numbertextbox->Text + IBtn6->Text;
	}
	else {
		MessageBox::Show("You cannot enter more than 11 digit", "WARNING!");
	}
}
private: System::Void IBtn7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ number = numbertextbox->Text;
	if (!(number->Length >= 11)) {
		numbertextbox->Text = numbertextbox->Text + IBtn7->Text;
	}
	else {
		MessageBox::Show("You cannot enter more than 11 digit", "WARNING!");
	}
}
private: System::Void IBtn8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ number = numbertextbox->Text;
	if (!(number->Length >= 11)) {
		numbertextbox->Text = numbertextbox->Text + IBtn8->Text;
	}
	else {
		MessageBox::Show("You cannot enter more than 11 digit", "WARNING!");
	}
}
private: System::Void IBtn9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ number = numbertextbox->Text;
	if (!(number->Length >= 11)) {
		numbertextbox->Text = numbertextbox->Text + IBtn9->Text;
	}
	else {
		MessageBox::Show("You cannot enter more than 11 digit", "WARNING!");
	} 
	
}
private: System::Void Finsertbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ n = Nametextbox->Text;
	msclr::interop::marshal_context context;
	string nn = context.marshal_as<std::string>(n);
	int num = System::Convert::ToInt64(numbertextbox->Text);
	char a[100];
	t.printAllWords(t.root, a);
	string x = t.printWordd(nn, a, 0);
	String^ x2 = gcnew String(x.c_str());
	listBox1->Items->Add(x2);

	listBox1->Items->Add(n + "\t\t\t" + numbertextbox->Text);

	//project.t.search():
	stringarr.push_back(nn);
	project.name = nn;
		project.phone = num;
	project.add();
	numbertextbox->Text = "";
	Nametextbox->Text = "";
	myfile << nn << " " << num << endl;
	myfile.close();

}
private: System::Void deletfunbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ n = Nametextbox->Text;
	msclr::interop::marshal_context context;
	string nn = context.marshal_as<std::string>(n);
	user f;
	string names[100];
	string nums[100];
//	listBox1->Items->Clear();
	
	if (project.search(nn)==1) {
		project.del_user(nn);
		MessageBox::Show("contact deleted succussfuly");
	deletetxtbx->Text = "";

	}else  {
		MessageBox::Show("this contact doesnot exist");
	}
	for (int i = 0; i < stringarr.size(); i++) {
		if (stringarr[i] == nn) {
			for (int j = i; j < stringarr.size() - 1; j++) {
				stringarr[j] = stringarr[j + 1];
			}
			stringarr.pop_back();
		}
	}
	
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	ssearchpn->BringToFront();
	bool exist = false;
	String^ n = SearchTextbox->Text;
	msclr::interop::marshal_context context;
	string nn = context.marshal_as<std::string>(n);
	for (int i = 0; i < stringarr.size(); i++) {
		if (nn == stringarr[i]) {
			exist = true;
			MessageBox::Show("the contact exists");
		}
	}
	if (!exist) {
		MessageBox::Show("the contact is not found ");
	}
	/*if (project.search(nn) == 1) {
		MessageBox::Show("the contact exists");
	}
	else {
		MessageBox::Show("the contact is not found ");

	}*/

}
private: System::Void deletepn_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void searchbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	ssearchpn->BringToFront();

}
private: System::Void displaypn_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void displaylbl_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ n = SearchTextbox->Text;
	msclr::interop::marshal_context context;
	string nn = context.marshal_as<std::string>(n);

}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		/*try {
			int size = Convert::ToInt32(cc.size());
			for (int i = 0; i < size; i++) {
				listBox1->Items->Add(cc[i]);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Exception : " + e->Message);
		}*/
		
		for (int i = 0; i < stringarr.size(); i++) {
			string str = stringarr[i];
			String^ str2 = gcnew String(str.c_str());
			listBox1->Items->Add(str2);
		}

	}
private: System::Void display_Click(System::Object^ sender, System::EventArgs^ e) {
	displaypn->BringToFront();
}
private: System::Void ssearchpn_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
