#pragma once
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include "boje.h"


namespace cpick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using System::Runtime::InteropServices::Marshal;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^  textRed;
	private: System::Windows::Forms::NumericUpDown^  textGreen;
	private: System::Windows::Forms::NumericUpDown^  textBlue;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  textYellow;

	private: System::Windows::Forms::NumericUpDown^  textMagenta;

	private: System::Windows::Forms::NumericUpDown^  textCyan;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  textKey;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  prikazBoje;
	private: System::Windows::Forms::TrackBar^  trackRed;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TrackBar^  trackGreen;
	private: System::Windows::Forms::TrackBar^  trackBlue;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TrackBar^  trackYellow;

	private: System::Windows::Forms::TrackBar^  trackMagenta;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TrackBar^  trackKey;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TrackBar^  trackCyan;
	private: System::Windows::Forms::Button^  puno;
	private: System::Windows::Forms::Button^  mini;
	private: System::Windows::Forms::Button^  button1;


	private: System::ComponentModel::IContainer^  components;


	private: 

















	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textRed = (gcnew System::Windows::Forms::NumericUpDown());
			this->textGreen = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBlue = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textYellow = (gcnew System::Windows::Forms::NumericUpDown());
			this->textMagenta = (gcnew System::Windows::Forms::NumericUpDown());
			this->textCyan = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textKey = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->prikazBoje = (gcnew System::Windows::Forms::Panel());
			this->trackRed = (gcnew System::Windows::Forms::TrackBar());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->trackGreen = (gcnew System::Windows::Forms::TrackBar());
			this->trackBlue = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->trackYellow = (gcnew System::Windows::Forms::TrackBar());
			this->trackMagenta = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->trackKey = (gcnew System::Windows::Forms::TrackBar());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->trackCyan = (gcnew System::Windows::Forms::TrackBar());
			this->puno = (gcnew System::Windows::Forms::Button());
			this->mini = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textYellow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textMagenta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textCyan))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textKey))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBlue))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackYellow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackMagenta))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackKey))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackCyan))->BeginInit();
			this->SuspendLayout();
			// 
			// textRed
			// 
			this->textRed->Location = System::Drawing::Point(33, 181);
			this->textRed->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->textRed->Name = L"textRed";
			this->textRed->Size = System::Drawing::Size(43, 20);
			this->textRed->TabIndex = 0;
			this->textRed->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Form1::textRed_PreviewKeyDown);
			this->textRed->Click += gcnew System::EventHandler(this, &Form1::textRed_Click);
			// 
			// textGreen
			// 
			this->textGreen->Location = System::Drawing::Point(33, 207);
			this->textGreen->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->textGreen->Name = L"textGreen";
			this->textGreen->Size = System::Drawing::Size(43, 20);
			this->textGreen->TabIndex = 1;
			this->textGreen->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Form1::textGreen_PreviewKeyDown);
			this->textGreen->Click += gcnew System::EventHandler(this, &Form1::textGreen_Click);
			// 
			// textBlue
			// 
			this->textBlue->Location = System::Drawing::Point(33, 233);
			this->textBlue->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->textBlue->Name = L"textBlue";
			this->textBlue->Size = System::Drawing::Size(43, 20);
			this->textBlue->TabIndex = 2;
			this->textBlue->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Form1::textBlue_PreviewKeyDown);
			this->textBlue->Click += gcnew System::EventHandler(this, &Form1::textBlue_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"R:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"G:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"B:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(109, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Y:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(109, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"M:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(109, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"C:";
			// 
			// textYellow
			// 
			this->textYellow->Location = System::Drawing::Point(130, 233);
			this->textYellow->Name = L"textYellow";
			this->textYellow->Size = System::Drawing::Size(43, 20);
			this->textYellow->TabIndex = 8;
			this->textYellow->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Form1::textYellow_PreviewKeyDown);
			this->textYellow->Click += gcnew System::EventHandler(this, &Form1::textYellow_Click);
			// 
			// textMagenta
			// 
			this->textMagenta->Location = System::Drawing::Point(130, 207);
			this->textMagenta->Name = L"textMagenta";
			this->textMagenta->Size = System::Drawing::Size(43, 20);
			this->textMagenta->TabIndex = 7;
			this->textMagenta->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Form1::textMagenta_PreviewKeyDown);
			this->textMagenta->Click += gcnew System::EventHandler(this, &Form1::textMagenta_Click);
			// 
			// textCyan
			// 
			this->textCyan->Location = System::Drawing::Point(130, 181);
			this->textCyan->Name = L"textCyan";
			this->textCyan->Size = System::Drawing::Size(43, 20);
			this->textCyan->TabIndex = 6;
			this->textCyan->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Form1::textCyan_PreviewKeyDown);
			this->textCyan->Click += gcnew System::EventHandler(this, &Form1::textCyan_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(109, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"K:";
			// 
			// textKey
			// 
			this->textKey->Location = System::Drawing::Point(130, 259);
			this->textKey->Name = L"textKey";
			this->textKey->Size = System::Drawing::Size(43, 20);
			this->textKey->TabIndex = 12;
			this->textKey->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Form1::textKey_PreviewKeyDown);
			this->textKey->Click += gcnew System::EventHandler(this, &Form1::textKey_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(179, 183);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"%";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(179, 261);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"%";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(179, 235);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"%";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(179, 209);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"%";
			// 
			// prikazBoje
			// 
			this->prikazBoje->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->prikazBoje->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->prikazBoje->Location = System::Drawing::Point(41, 18);
			this->prikazBoje->Name = L"prikazBoje";
			this->prikazBoje->Size = System::Drawing::Size(132, 140);
			this->prikazBoje->TabIndex = 18;
			this->prikazBoje->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// trackRed
			// 
			this->trackRed->BackColor = System::Drawing::Color::Red;
			this->trackRed->Location = System::Drawing::Point(29, 19);
			this->trackRed->Maximum = 255;
			this->trackRed->Name = L"trackRed";
			this->trackRed->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackRed->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackRed->Size = System::Drawing::Size(45, 260);
			this->trackRed->TabIndex = 19;
			this->trackRed->Scroll += gcnew System::EventHandler(this, &Form1::trackRed_Scroll);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(143, 281);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"B:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(93, 281);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(18, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"G:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(38, 281);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(18, 13);
			this->label14->TabIndex = 20;
			this->label14->Text = L"R:";
			// 
			// trackGreen
			// 
			this->trackGreen->BackColor = System::Drawing::Color::Green;
			this->trackGreen->Location = System::Drawing::Point(82, 19);
			this->trackGreen->Maximum = 255;
			this->trackGreen->Name = L"trackGreen";
			this->trackGreen->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackGreen->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackGreen->Size = System::Drawing::Size(45, 260);
			this->trackGreen->TabIndex = 23;
			this->trackGreen->Scroll += gcnew System::EventHandler(this, &Form1::trackGreen_Scroll);
			// 
			// trackBlue
			// 
			this->trackBlue->BackColor = System::Drawing::Color::Blue;
			this->trackBlue->Location = System::Drawing::Point(133, 19);
			this->trackBlue->Maximum = 255;
			this->trackBlue->Name = L"trackBlue";
			this->trackBlue->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBlue->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackBlue->Size = System::Drawing::Size(45, 260);
			this->trackBlue->TabIndex = 24;
			this->trackBlue->Scroll += gcnew System::EventHandler(this, &Form1::trackBlue_Scroll);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->trackBlue);
			this->groupBox1->Controls->Add(this->trackGreen);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->trackRed);
			this->groupBox1->Location = System::Drawing::Point(292, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(206, 298);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RGB Model";
			// 
			// trackYellow
			// 
			this->trackYellow->BackColor = System::Drawing::Color::Yellow;
			this->trackYellow->Location = System::Drawing::Point(133, 19);
			this->trackYellow->Maximum = 100;
			this->trackYellow->Name = L"trackYellow";
			this->trackYellow->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackYellow->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackYellow->Size = System::Drawing::Size(45, 260);
			this->trackYellow->TabIndex = 24;
			this->trackYellow->Scroll += gcnew System::EventHandler(this, &Form1::trackYellow_Scroll);
			// 
			// trackMagenta
			// 
			this->trackMagenta->BackColor = System::Drawing::Color::Magenta;
			this->trackMagenta->Location = System::Drawing::Point(82, 19);
			this->trackMagenta->Maximum = 100;
			this->trackMagenta->Name = L"trackMagenta";
			this->trackMagenta->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackMagenta->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackMagenta->Size = System::Drawing::Size(45, 260);
			this->trackMagenta->TabIndex = 23;
			this->trackMagenta->Scroll += gcnew System::EventHandler(this, &Form1::trackMagenta_Scroll);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->trackKey);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->trackYellow);
			this->groupBox2->Controls->Add(this->trackMagenta);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->trackCyan);
			this->groupBox2->Location = System::Drawing::Point(527, 5);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(258, 298);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"CMYK Model";
			// 
			// trackKey
			// 
			this->trackKey->BackColor = System::Drawing::Color::Black;
			this->trackKey->Location = System::Drawing::Point(185, 19);
			this->trackKey->Maximum = 100;
			this->trackKey->Name = L"trackKey";
			this->trackKey->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackKey->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackKey->Size = System::Drawing::Size(45, 260);
			this->trackKey->TabIndex = 26;
			this->trackKey->Value = 100;
			this->trackKey->Scroll += gcnew System::EventHandler(this, &Form1::trackKey_Scroll);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(195, 281);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 13);
			this->label18->TabIndex = 25;
			this->label18->Text = L"K:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(143, 281);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(17, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Y:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(93, 281);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 13);
			this->label16->TabIndex = 21;
			this->label16->Text = L"M:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(38, 281);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(17, 13);
			this->label17->TabIndex = 20;
			this->label17->Text = L"C:";
			// 
			// trackCyan
			// 
			this->trackCyan->BackColor = System::Drawing::Color::Cyan;
			this->trackCyan->Location = System::Drawing::Point(29, 19);
			this->trackCyan->Maximum = 100;
			this->trackCyan->Name = L"trackCyan";
			this->trackCyan->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackCyan->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackCyan->Size = System::Drawing::Size(45, 260);
			this->trackCyan->TabIndex = 19;
			this->trackCyan->Scroll += gcnew System::EventHandler(this, &Form1::trackCyan_Scroll);
			// 
			// puno
			// 
			this->puno->Location = System::Drawing::Point(212, 18);
			this->puno->Name = L"puno";
			this->puno->Size = System::Drawing::Size(53, 267);
			this->puno->TabIndex = 27;
			this->puno->Text = L">>";
			this->puno->UseVisualStyleBackColor = true;
			this->puno->Click += gcnew System::EventHandler(this, &Form1::puno_Click);
			// 
			// mini
			// 
			this->mini->Location = System::Drawing::Point(796, 18);
			this->mini->Name = L"mini";
			this->mini->Size = System::Drawing::Size(53, 267);
			this->mini->TabIndex = 28;
			this->mini->Text = L"<<";
			this->mini->UseVisualStyleBackColor = true;
			this->mini->Click += gcnew System::EventHandler(this, &Form1::mini_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 28);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Sheme boja";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(861, 309);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->mini);
			this->Controls->Add(this->puno);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->prikazBoje);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textKey);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textYellow);
			this->Controls->Add(this->textMagenta);
			this->Controls->Add(this->textCyan);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBlue);
			this->Controls->Add(this->textGreen);
			this->Controls->Add(this->textRed);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Izabirac boja";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textYellow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textMagenta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textCyan))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textKey))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBlue))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackYellow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackMagenta))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackKey))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackCyan))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
// 
// Konverzija RGB->CMYK
//
void konverzijaRGBuCMYK()
{
	double r,g,b,c,m,y,k;
	r = Convert::ToDouble(textRed->Text);
	g = Convert::ToDouble(textGreen->Text);
	b = Convert::ToDouble(textBlue->Text);
	c = 1 - (r/255);
	m = 1 - (g/255);
	y = 1 - (b/255);
	k = c;
	if(m<k){k=m;}
	if(y<k){k=y;}
	c = (c-k)/(1-k);
	m = (m-k)/(1-k);
	y = (y-k)/(1-k);
	if(c != c) {c=0;}
	if(m != m) {m=0;}
	if(y != y) {y=0;}
	if(k != k) {k=1;}
	textCyan->Text = Convert::ToString(Convert::ToInt16(c*100));
	textMagenta->Text = Convert::ToString(Convert::ToInt16(m*100));
	textYellow->Text = Convert::ToString(Convert::ToInt16(y*100));
	textKey->Text = Convert::ToString(Convert::ToInt16(k*100));
}
void konverzijaCMYKuRGB()
{
	double r,g,b,c,m,y,k;
	c = Convert::ToDouble(textCyan->Text)/100;
	m = Convert::ToDouble(textMagenta->Text)/100;
	y = Convert::ToDouble(textYellow->Text)/100;
	k = Convert::ToDouble(textKey->Text)/100;
	r = 255*(1-c)*(1-k);
	g = 255*(1-m)*(1-k);
	b = 255*(1-y)*(1-k);
	if(r != r) {r=0;}
	if(g != g) {g=0;}
	if(b != b) {b=0;}
	textRed->Text = Convert::ToString(Convert::ToInt16(r));
	textGreen->Text = Convert::ToString(Convert::ToInt16(g));
	textBlue->Text = Convert::ToString(Convert::ToInt16(b));

}
void promjeniBoju()
{
	int r,g,b,c,m,y,k;
	r = Convert::ToInt16(textRed->Text);
	g = Convert::ToInt16(textGreen->Text);
	b = Convert::ToInt16(textBlue->Text);
	c = Convert::ToInt16(textCyan->Text);
	m = Convert::ToInt16(textMagenta->Text);
	y = Convert::ToInt16(textYellow->Text);
	k = Convert::ToInt16(textKey->Text);
	prikazBoje->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(r)), static_cast<System::Int32>(static_cast<System::Byte>(g)), 
				static_cast<System::Int32>(static_cast<System::Byte>(b)));
	trackRed->Value=r;
	trackGreen->Value=g;
	trackBlue->Value=b;
	trackCyan->Value=c;
	trackMagenta->Value=m;
	trackYellow->Value=y;
	trackKey->Value=k;
	boje ^ Boje = gcnew boje();
			 Boje->r=r;
			 Boje->g=g;
			 Boje->b=b;
			 Boje->c=c;
			 Boje->m=m;
			 Boje->y=y;
			 Boje->k=k;
}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textRed_Click(System::Object^  sender, System::EventArgs^  e) {
			 konverzijaRGBuCMYK();
			 promjeniBoju();
		 }
private: System::Void textGreen_Click(System::Object^  sender, System::EventArgs^  e) {
			 konverzijaRGBuCMYK();
			 promjeniBoju();
		 }
private: System::Void textBlue_Click(System::Object^  sender, System::EventArgs^  e) {
			 konverzijaRGBuCMYK();
			 promjeniBoju();
		 }
private: System::Void textRed_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
			 konverzijaRGBuCMYK();
			 promjeniBoju();
		 }
private: System::Void textGreen_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
			 konverzijaRGBuCMYK();
			 promjeniBoju();
		 }
private: System::Void textBlue_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
			 konverzijaRGBuCMYK();
			 promjeniBoju();
		 }
private: System::Void textCyan_Click(System::Object^  sender, System::EventArgs^  e) {
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void textCyan_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void textMagenta_Click(System::Object^  sender, System::EventArgs^  e) {
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void textMagenta_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void textYellow_Click(System::Object^  sender, System::EventArgs^  e) {
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void textYellow_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void textKey_Click(System::Object^  sender, System::EventArgs^  e) {
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void textKey_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void trackRed_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 textRed->Value=trackRed->Value;
			 konverzijaRGBuCMYK();
			 promjeniBoju();
		 }
private: System::Void trackGreen_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 textGreen->Value=trackGreen->Value;
			 konverzijaRGBuCMYK();
			 promjeniBoju();
		 }
private: System::Void trackBlue_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 textBlue->Value=trackBlue->Value;
			 konverzijaRGBuCMYK();
			 promjeniBoju();
		 }
private: System::Void trackCyan_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 textCyan->Value=trackCyan->Value;
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void trackMagenta_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 textMagenta->Value=trackMagenta->Value;
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void trackYellow_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 textYellow->Value=trackYellow->Value;
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }
private: System::Void trackKey_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 textKey->Value=trackKey->Value;
			 konverzijaCMYKuRGB();
			 promjeniBoju();
		 }

private: System::Void puno_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ClientSize = System::Drawing::Size(867, 309);
			 puno->Visible=false;
		 }
private: System::Void mini_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ClientSize = System::Drawing::Size(281, 309);
			 puno->Visible=true;
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 boje ^ Boje = gcnew boje();
			 Boje->Show();
		 }
};
}

