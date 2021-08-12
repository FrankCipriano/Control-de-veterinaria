#pragma once
#include "Datos.h"
#include "Atencion.h"
#include <fstream>

namespace Salud {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtsalud;
	private: System::Windows::Forms::TextBox^ txtlugar;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtsalud = (gcnew System::Windows::Forms::TextBox());
			this->txtlugar = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(38, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"INGRESAR MASCOTA EN LA LISTA";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Inicio::Button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(446, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 30);
			this->button2->TabIndex = 0;
			this->button2->Text = L"ATENDER MASCOTA";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Inicio::Button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(274, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(411, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"VACUNACION ANTIRRABICA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(16, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Direccion de Area de Salud:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(369, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Lugar de Vacunacion:";
			// 
			// txtsalud
			// 
			this->txtsalud->Location = System::Drawing::Point(19, 20);
			this->txtsalud->Name = L"txtsalud";
			this->txtsalud->Size = System::Drawing::Size(296, 20);
			this->txtsalud->TabIndex = 3;
			// 
			// txtlugar
			// 
			this->txtlugar->Location = System::Drawing::Point(374, 18);
			this->txtlugar->Name = L"txtlugar";
			this->txtlugar->Size = System::Drawing::Size(310, 20);
			this->txtlugar->TabIndex = 4;
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(710, 355);
			this->Controls->Add(this->txtlugar);
			this->Controls->Add(this->txtsalud);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Inicio_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button1_Click(System::Object^ senerd, System::EventArgs^ e) {
		if (txtlugar->Text == "" && txtsalud->Text == "") {
			MessageBox::Show("Indique el lugar de vacuancion", "DATOS", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			StreamWriter^ a = gcnew StreamWriter("salud.txt");
			a->Write("\r\n");
			a->Write(txtsalud->Text); a->Write(";");
			a->Write("R");
			a->Close();
			StreamWriter^ b = gcnew StreamWriter("lugar.txt");
			b->Write("\r\n");
			b->Write(txtlugar->Text); b->Write(";");
			b->Write("R");
			b->Close();
			Datos^ test = gcnew Datos();
			test->ShowDialog();
		}
		
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtlugar->Text == "" && txtsalud->Text == "") {
			MessageBox::Show("Indique el lugar de vacuancion", "DATOS", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			StreamWriter^ areasalud = gcnew StreamWriter("salud.txt");
			areasalud->Write("\r\n");
			areasalud->Write(txtsalud->Text); areasalud->Write(";");
			areasalud->Write("R");
			areasalud->Close();
			StreamWriter^ area = gcnew StreamWriter("lugar.txt");
			area->Write("\r\n");
			area->Write(txtlugar->Text); area->Write(";");
			area->Write("R");
			area->Close();
			Atencion^ test = gcnew Atencion();
			test->ShowDialog();
		}
		
	}
	};
}
