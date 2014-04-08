#pragma once
#include "windows.h"

namespace qwerty {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(92, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(169, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 65);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Set";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(246, 13);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 65);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Opacity";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(Screen::PrimaryScreen->Bounds.Width, Screen::PrimaryScreen->Bounds.Height);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
void Crtaj()
{
				 Graphics^ g = this->CreateGraphics();
				 //Dobivanje visine i sirine glavnog ekrana preko Screen::PrimaryScreen
				 int sirina = Screen::PrimaryScreen->Bounds.Width;
				 int visina = Screen::PrimaryScreen->Bounds.Height;
				 //Brisanje forme i postavljanje boje
				 g->Clear(Color::White);
				 //Deklarisanje bursha za iscrtavanje stringa
				 SolidBrush^ brush = gcnew SolidBrush(Color::Black);
				 //Deklarisanje fonta
				 System::Drawing::Font^ broj = gcnew System::Drawing::Font("Times New Roman",16);
				 //Deklarisanje olovaka
				 Pen^ ose = gcnew Pen(Color::Black);
				 ose->Width = 3;
				 Pen^ podioci = gcnew Pen(Color::Black);
				 ose->Width = 2;
				 Pen^ mreza = gcnew Pen(Color::Aqua);
				 mreza->Width = 1;
				 ////////////////////////////////////
				 //Crtanje vertikalne mreze
				 for(int i = 100; i<=sirina/2; i+=100)
				 {
					 g->DrawLine(mreza,(sirina/2)+i,0,(sirina/2)+i,visina);
					 g->DrawLine(mreza,(sirina/2)-i,0,(sirina/2)-i,visina);
				 }
				 //Crtanje horizontalne mreze
				 for(int i = 100; i<=visina/2; i+=100)
				 {
					 g->DrawLine(mreza,0,(visina/2)+i,sirina,(visina/2)+i);
					 g->DrawLine(mreza,0,(visina/2)-i,sirina,(visina/2)-i);
				 }
				 //////////////////////////////////////
				 //X Osa
				 g->DrawLine(ose,sirina/2,0,sirina/2,visina);
				 //Y Osa
				 g->DrawLine(ose,0,visina/2,sirina,visina/2);
				 //////////////////////////////////////
				 //Podioci na x osi
				 for(int i = 100; i<=sirina/2; i+=100)
				 {
					 g->DrawLine(podioci,(sirina/2)+i,(visina/2)-5,(sirina/2)+i,(visina/2)+5);
					 g->DrawLine(podioci,(sirina/2)-i,(visina/2)-5,(sirina/2)-i,(visina/2)+5);
				 }
				 //Podioci na y osi
				 for(int i = 100; i<=visina/2; i+=100)
				 {
					 g->DrawLine(podioci,(sirina/2)-5,(visina/2)+i,(sirina/2)+5,(visina/2)+i);
					 g->DrawLine(podioci,(sirina/2)-5,(visina/2)-i,(sirina/2)+5,(visina/2)-i);
				 }
				 //////////////////////////////////////
				 //Ispis stringova, tj. brojeva ispod podioka
				 //Ispis brojeva na x osi
				 for(int i = 100; i<=sirina/2; i+=100)
				 {
					 g->DrawString(Convert::ToString(i/100),broj,brush,(sirina/2)+i-9,(visina/2)+8);
					 g->DrawString(Convert::ToString(-i/100),broj,brush,(sirina/2)-i-12,(visina/2)+8);
				 }
				 //Ispis brojeva na y osi
				 for(int i = 100; i<=visina/2; i+=100)
				 {
					 g->DrawString(Convert::ToString(i/100),broj,brush,(sirina/2)-24,(visina/2)-i-12);
					 g->DrawString(Convert::ToString(-i/100),broj,brush,(sirina/2)-30,(visina/2)+i-12);
				 }


				 
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
			 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Graphics^ gr = this->CreateGraphics();
			 gr->Clear(Color::White);
			 this->TransparencyKey = System::Drawing::Color::Yellow;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->TransparencyKey = System::Drawing::Color::Yellow;
			 Crtaj();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				this->TransparencyKey = System::Drawing::Color::White;
				Crtaj();
		 }
};
}

