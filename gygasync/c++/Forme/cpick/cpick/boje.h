#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace cpick {

	/// <summary>
	/// Summary for boje
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class boje : public System::Windows::Forms::Form
	{
	public:
		boje(void)
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
		~boje()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		public :static int r,g,b,c,m,y,k;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Panel^  origin2;
	private: System::Windows::Forms::Panel^  originp1;
	public: 


	private: System::Windows::Forms::Panel^  origin3;
	private: System::Windows::Forms::Panel^  origin1;
	private: System::Windows::Forms::Panel^  originp2;



	private: System::Windows::Forms::Panel^  origin;
	private: System::Windows::Forms::Panel^  originp3;
	private: System::Windows::Forms::NumericUpDown^  textGreen;
	private: System::Windows::Forms::NumericUpDown^  textBlue;




	private: System::Windows::Forms::NumericUpDown^  textRed;









	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  lorigin;
	private: System::Windows::Forms::Label^  lorigin2;
	private: System::Windows::Forms::Label^  lorigin1;
	private: System::Windows::Forms::Label^  lorigin3;
	private: System::Windows::Forms::Label^  loriginp1;
	private: System::Windows::Forms::Label^  loriginp2;
	private: System::Windows::Forms::Label^  loriginp3;

	private: System::Windows::Forms::Panel^  panel1;
	public: 



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->origin2 = (gcnew System::Windows::Forms::Panel());
			this->lorigin2 = (gcnew System::Windows::Forms::Label());
			this->originp1 = (gcnew System::Windows::Forms::Panel());
			this->origin3 = (gcnew System::Windows::Forms::Panel());
			this->lorigin1 = (gcnew System::Windows::Forms::Label());
			this->origin1 = (gcnew System::Windows::Forms::Panel());
			this->lorigin3 = (gcnew System::Windows::Forms::Label());
			this->originp2 = (gcnew System::Windows::Forms::Panel());
			this->origin = (gcnew System::Windows::Forms::Panel());
			this->lorigin = (gcnew System::Windows::Forms::Label());
			this->originp3 = (gcnew System::Windows::Forms::Panel());
			this->textGreen = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBlue = (gcnew System::Windows::Forms::NumericUpDown());
			this->textRed = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->loriginp1 = (gcnew System::Windows::Forms::Label());
			this->loriginp2 = (gcnew System::Windows::Forms::Label());
			this->loriginp3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->origin2->SuspendLayout();
			this->originp1->SuspendLayout();
			this->origin3->SuspendLayout();
			this->origin1->SuspendLayout();
			this->originp2->SuspendLayout();
			this->origin->SuspendLayout();
			this->originp3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textRed))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(24, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(150, 150);
			this->panel1->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->origin2);
			this->groupBox1->Controls->Add(this->originp1);
			this->groupBox1->Controls->Add(this->origin3);
			this->groupBox1->Controls->Add(this->origin1);
			this->groupBox1->Controls->Add(this->originp2);
			this->groupBox1->Controls->Add(this->origin);
			this->groupBox1->Controls->Add(this->originp3);
			this->groupBox1->Location = System::Drawing::Point(180, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(229, 361);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Monohromatska shema";
			// 
			// origin2
			// 
			this->origin2->Controls->Add(this->lorigin2);
			this->origin2->Location = System::Drawing::Point(6, 263);
			this->origin2->Name = L"origin2";
			this->origin2->Size = System::Drawing::Size(217, 41);
			this->origin2->TabIndex = 3;
			// 
			// lorigin2
			// 
			this->lorigin2->AutoSize = true;
			this->lorigin2->BackColor = System::Drawing::Color::White;
			this->lorigin2->Location = System::Drawing::Point(56, 13);
			this->lorigin2->Name = L"lorigin2";
			this->lorigin2->Size = System::Drawing::Size(102, 13);
			this->lorigin2->TabIndex = 2;
			this->lorigin2->Text = L" R 255 G 255 B 255";
			this->lorigin2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// originp1
			// 
			this->originp1->Controls->Add(this->loriginp1);
			this->originp1->Location = System::Drawing::Point(6, 122);
			this->originp1->Name = L"originp1";
			this->originp1->Size = System::Drawing::Size(217, 41);
			this->originp1->TabIndex = 1;
			this->originp1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &boje::panel3_Paint);
			// 
			// origin3
			// 
			this->origin3->Controls->Add(this->lorigin1);
			this->origin3->Location = System::Drawing::Point(6, 310);
			this->origin3->Name = L"origin3";
			this->origin3->Size = System::Drawing::Size(217, 41);
			this->origin3->TabIndex = 2;
			// 
			// lorigin1
			// 
			this->lorigin1->AutoSize = true;
			this->lorigin1->BackColor = System::Drawing::Color::White;
			this->lorigin1->Location = System::Drawing::Point(56, 14);
			this->lorigin1->Name = L"lorigin1";
			this->lorigin1->Size = System::Drawing::Size(102, 13);
			this->lorigin1->TabIndex = 3;
			this->lorigin1->Text = L" R 255 G 255 B 255";
			this->lorigin1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// origin1
			// 
			this->origin1->Controls->Add(this->lorigin3);
			this->origin1->Location = System::Drawing::Point(6, 216);
			this->origin1->Name = L"origin1";
			this->origin1->Size = System::Drawing::Size(217, 41);
			this->origin1->TabIndex = 4;
			// 
			// lorigin3
			// 
			this->lorigin3->AutoSize = true;
			this->lorigin3->BackColor = System::Drawing::Color::White;
			this->lorigin3->Location = System::Drawing::Point(56, 12);
			this->lorigin3->Name = L"lorigin3";
			this->lorigin3->Size = System::Drawing::Size(102, 13);
			this->lorigin3->TabIndex = 1;
			this->lorigin3->Text = L" R 255 G 255 B 255";
			this->lorigin3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// originp2
			// 
			this->originp2->Controls->Add(this->loriginp2);
			this->originp2->Location = System::Drawing::Point(6, 75);
			this->originp2->Name = L"originp2";
			this->originp2->Size = System::Drawing::Size(217, 41);
			this->originp2->TabIndex = 1;
			// 
			// origin
			// 
			this->origin->Controls->Add(this->lorigin);
			this->origin->Location = System::Drawing::Point(6, 169);
			this->origin->Name = L"origin";
			this->origin->Size = System::Drawing::Size(217, 41);
			this->origin->TabIndex = 2;
			// 
			// lorigin
			// 
			this->lorigin->AutoSize = true;
			this->lorigin->BackColor = System::Drawing::Color::White;
			this->lorigin->Location = System::Drawing::Point(56, 14);
			this->lorigin->Name = L"lorigin";
			this->lorigin->Size = System::Drawing::Size(102, 13);
			this->lorigin->TabIndex = 0;
			this->lorigin->Text = L" R 255 G 255 B 255";
			this->lorigin->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// originp3
			// 
			this->originp3->Controls->Add(this->loriginp3);
			this->originp3->Location = System::Drawing::Point(6, 28);
			this->originp3->Name = L"originp3";
			this->originp3->Size = System::Drawing::Size(217, 41);
			this->originp3->TabIndex = 0;
			// 
			// textGreen
			// 
			this->textGreen->Location = System::Drawing::Point(65, 219);
			this->textGreen->Name = L"textGreen";
			this->textGreen->Size = System::Drawing::Size(109, 20);
			this->textGreen->TabIndex = 5;
			// 
			// textBlue
			// 
			this->textBlue->Location = System::Drawing::Point(65, 245);
			this->textBlue->Name = L"textBlue";
			this->textBlue->Size = System::Drawing::Size(109, 20);
			this->textBlue->TabIndex = 6;
			// 
			// textRed
			// 
			this->textRed->Location = System::Drawing::Point(65, 193);
			this->textRed->Name = L"textRed";
			this->textRed->Size = System::Drawing::Size(109, 20);
			this->textRed->TabIndex = 7;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 75;
			this->timer1->Tick += gcnew System::EventHandler(this, &boje::timer1_Tick);
			// 
			// loriginp1
			// 
			this->loriginp1->AutoSize = true;
			this->loriginp1->BackColor = System::Drawing::Color::White;
			this->loriginp1->Location = System::Drawing::Point(56, 15);
			this->loriginp1->Name = L"loriginp1";
			this->loriginp1->Size = System::Drawing::Size(102, 13);
			this->loriginp1->TabIndex = 1;
			this->loriginp1->Text = L" R 255 G 255 B 255";
			this->loriginp1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// loriginp2
			// 
			this->loriginp2->AutoSize = true;
			this->loriginp2->BackColor = System::Drawing::Color::White;
			this->loriginp2->Location = System::Drawing::Point(56, 13);
			this->loriginp2->Name = L"loriginp2";
			this->loriginp2->Size = System::Drawing::Size(102, 13);
			this->loriginp2->TabIndex = 2;
			this->loriginp2->Text = L" R 255 G 255 B 255";
			this->loriginp2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// loriginp3
			// 
			this->loriginp3->AutoSize = true;
			this->loriginp3->BackColor = System::Drawing::Color::White;
			this->loriginp3->Location = System::Drawing::Point(56, 15);
			this->loriginp3->Name = L"loriginp3";
			this->loriginp3->Size = System::Drawing::Size(102, 13);
			this->loriginp3->TabIndex = 3;
			this->loriginp3->Text = L" R 255 G 255 B 255";
			this->loriginp3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// boje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 401);
			this->Controls->Add(this->textRed);
			this->Controls->Add(this->textBlue);
			this->Controls->Add(this->textGreen);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"boje";
			this->Text = L"Sheme boja";
			this->Load += gcnew System::EventHandler(this, &boje::boje_Load);
			this->groupBox1->ResumeLayout(false);
			this->origin2->ResumeLayout(false);
			this->origin2->PerformLayout();
			this->originp1->ResumeLayout(false);
			this->originp1->PerformLayout();
			this->origin3->ResumeLayout(false);
			this->origin3->PerformLayout();
			this->origin1->ResumeLayout(false);
			this->origin1->PerformLayout();
			this->originp2->ResumeLayout(false);
			this->originp2->PerformLayout();
			this->origin->ResumeLayout(false);
			this->origin->PerformLayout();
			this->originp3->ResumeLayout(false);
			this->originp3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textRed))->EndInit();
			this->ResumeLayout(false);

		}
int pozitivan(int x)
{
	if(x>255){x=255;}
	if(x<0){x=0;}
	return x;
}
#pragma endregion
	private: System::Void boje_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(r)), static_cast<System::Int32>(static_cast<System::Byte>(g)), 
				static_cast<System::Int32>(static_cast<System::Byte>(b)));
				 origin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(r)), static_cast<System::Int32>(static_cast<System::Byte>(g)), 
				static_cast<System::Int32>(static_cast<System::Byte>(b)));
				 origin1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(r-40))), static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(g-40))), 
				static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(b-40))));
				 origin2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(r-80))), static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(g-80))), 
				static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(b-80))));
				 origin3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(r-120))), static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(g-120))), 
				static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(b-120))));
				 originp1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(r+40))), static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(g+40))), 
				static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(b+40))));
				 originp2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(r+80))), static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(g+80))), 
				static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(b+80))));
				 originp3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(r+120))), static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(g+120))), 
				static_cast<System::Int32>(static_cast<System::Byte>(pozitivan(b+120))));
				 lorigin->Text="R:"+Convert::ToString(r)+" G:"+Convert::ToString(g)+" B:"+Convert::ToString(b);
				 lorigin1->Text="R:"+Convert::ToString(pozitivan(r-120))+" G:"+Convert::ToString(pozitivan(g-120))+" B:"+Convert::ToString(pozitivan(b-120));
				 lorigin2->Text="R:"+Convert::ToString(pozitivan(r-80))+" G:"+Convert::ToString(pozitivan(g-80))+" B:"+Convert::ToString(pozitivan(b-80));
				 lorigin3->Text="R:"+Convert::ToString(pozitivan(r-40))+" G:"+Convert::ToString(pozitivan(g-40))+" B:"+Convert::ToString(pozitivan(b-40));
				 loriginp3->Text="R:"+Convert::ToString(pozitivan(r+120))+" G:"+Convert::ToString(pozitivan(g+120))+" B:"+Convert::ToString(pozitivan(b+120));
				 loriginp2->Text="R:"+Convert::ToString(pozitivan(r+80))+" G:"+Convert::ToString(pozitivan(g+80))+" B:"+Convert::ToString(pozitivan(b+80));
				 loriginp1->Text="R:"+Convert::ToString(pozitivan(r+40))+" G:"+Convert::ToString(pozitivan(g+40))+" B:"+Convert::ToString(pozitivan(b+40));
			 }
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
