#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
#include <cmath>

namespace Funkcije {

	/// <summary>
	/// Summary for main
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 2000;
			this->timer1->Tick += gcnew System::EventHandler(this, &main::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(37, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1920, 1080);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"main";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &main::main_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void main_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void main_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  pe) {
				 int sirina = Screen::PrimaryScreen->Bounds.Width;
				 int visina = Screen::PrimaryScreen->Bounds.Height;
				 Graphics^ g = pe->Graphics;
				 g->Clear(Color::White);

				 Pen^ osa = gcnew Pen(Color::Black);
				 Pen^ mreza = gcnew Pen(Color::Aqua);
				 Pen^ funkcija = gcnew Pen(Color::Blue);
				 System::Drawing::Font^ broj = gcnew System::Drawing::Font("Arial", 16);
				 SolidBrush^ brush = gcnew SolidBrush(Color::Black);
				 mreza->Width = 1;
				 osa->Width = 2;
				 funkcija->Width = 2;
				 g->DrawLine(osa,0,visina/2,sirina,visina/2);
				 g->DrawLine(osa,sirina/2,0,sirina/2,visina);
				 for(int i = 100; i<=sirina/2;i+=100)
				 {
					 g->DrawLine(mreza,0,(visina/2)+i,sirina,(visina/2)+i);
				 }
				 for(int i = 100; i<=sirina/2;i+=100)
				 {
					 g->DrawLine(mreza,0,(visina/2)-i,sirina,(visina/2)-i);
				 }
				 for(int i = 100; i<=sirina/2;i+=100)
				 {
					 g->DrawLine(mreza,(sirina/2)+i,0,(sirina/2)+i,visina);
				 }
				 for(int i = 100; i<=sirina/2;i+=100)
				 {
					 g->DrawLine(mreza,(sirina/2)-i,0,(sirina/2)-i,visina);
				 }
				 for(int i = 100; i<=visina/2;i+=100)
				 {
					 g->DrawLine(osa,(sirina/2)-5,i+visina/2,(sirina/2)+5,i+visina/2);
				 }
				 for(int i = 100; i<=visina/2;i+=100)
				 {
					 g->DrawLine(osa,(sirina/2)-5,(visina/2)-i,(sirina/2)+5,(visina/2)-i);
				 }
				 for(int i = 100;i<=sirina/2;i+=100)
				 {
					 g->DrawLine(osa,i+sirina/2,(visina/2)-5,i+sirina/2,(visina/2)+5);
				 }
				 for(int i = 100;i<=sirina/2;i+=100)
				 {
					 g->DrawLine(osa,(sirina/2)-i,(visina/2)-5,(sirina/2)-i,(visina/2)+5);
				 }
				 for(int i = 100; i<=visina/2;i+=100)
				 {
					 g->DrawString(Convert::ToString(i/100), broj, brush,(sirina/2)-32,(visina/2)-i-12);
					 g->DrawString(Convert::ToString(-i/100), broj, brush,(sirina/2)-32,(visina/2)+i-12);
				 }
				 for(int i = 0; i<=sirina/2;i+=100)
				 {
					 g->DrawString(Convert::ToString(-i/100), broj, brush,(sirina/2)-i-12,(visina/2)+12);
					 g->DrawString(Convert::ToString(i/100), broj, brush,(sirina/2)+i-12,(visina/2)+12);
				 }
				 /*array<System::Drawing::Point>^ tacke;
				 for(int i = 0; i<=sirina/2;i++)
				 {
					 tacke[i] = Point((sirina/2)+i,(visina/2)+sin(i*180/3.14));
				 }
				 for(int i = 0; i<=sirina/2;i++)
				 {
					 g->DrawCurve(funkcija, tacke);
				 }*/
				 array<Point>^ tacke = {Point(sirina/2,visina/2),
										Point((sirina/2)+50,(visina/2)-175),
										Point((sirina/2)+100,(visina/2)),
										Point((sirina/2)+150,(visina/2)+175),
										Point((sirina/2)+200,(visina/2)),
										Point((sirina/2)+250,(visina/2)-175),
										Point((sirina/2)+300,(visina/2)),
										Point((sirina/2)+350,(visina/2)+175),
										Point((sirina/2)+400,(visina/2)),
										Point((sirina/2)+450,(visina/2)-175),};
				 g->DrawCurve(funkcija,tacke);

			 }
	};
}
