#pragma once
#include <fstream>

namespace Salud {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Atencion
	/// </summary>
	public ref class Atencion : public System::Windows::Forms::Form
	{
	public:
		Atencion(void)
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
		~Atencion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:



	private: System::Windows::Forms::Button^ btnatender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PROPIETARIO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ESPECIE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EDAD;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txtnumero;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtvacunador;

	private: System::Windows::Forms::TextBox^ txtfecha;

	private: System::Windows::Forms::TextBox^ txtraza;

	private: System::Windows::Forms::TextBox^ txtcolor;

	private: System::Windows::Forms::TextBox^ txtsexo;

	private: System::Windows::Forms::TextBox^ txtedad;

	private: System::Windows::Forms::TextBox^ txtanimal;

	private: System::Windows::Forms::TextBox^ txtespecie;

	private: System::Windows::Forms::TextBox^ txtdireccion;

	private: System::Windows::Forms::TextBox^ txtnombre;

	private: System::Windows::Forms::TextBox^ txtlugar;

	private: System::Windows::Forms::TextBox^ txtsalud;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtdr;
	private: System::Windows::Forms::Button^ button1;













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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Atencion::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->PROPIETARIO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ESPECIE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EDAD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnatender = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtvacunador = (gcnew System::Windows::Forms::TextBox());
			this->txtfecha = (gcnew System::Windows::Forms::TextBox());
			this->txtraza = (gcnew System::Windows::Forms::TextBox());
			this->txtcolor = (gcnew System::Windows::Forms::TextBox());
			this->txtsexo = (gcnew System::Windows::Forms::TextBox());
			this->txtedad = (gcnew System::Windows::Forms::TextBox());
			this->txtanimal = (gcnew System::Windows::Forms::TextBox());
			this->txtespecie = (gcnew System::Windows::Forms::TextBox());
			this->txtdireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtlugar = (gcnew System::Windows::Forms::TextBox());
			this->txtsalud = (gcnew System::Windows::Forms::TextBox());
			this->txtnumero = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtdr = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Navy;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->PROPIETARIO,
					this->ESPECIE, this->EDAD
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(596, 55);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(694, 376);
			this->dataGridView1->TabIndex = 0;
			// 
			// PROPIETARIO
			// 
			this->PROPIETARIO->HeaderText = L"PROPIETARIO";
			this->PROPIETARIO->Name = L"PROPIETARIO";
			this->PROPIETARIO->ReadOnly = true;
			this->PROPIETARIO->Width = 400;
			// 
			// ESPECIE
			// 
			this->ESPECIE->FillWeight = 150;
			this->ESPECIE->HeaderText = L"ESPECIE";
			this->ESPECIE->Name = L"ESPECIE";
			this->ESPECIE->ReadOnly = true;
			this->ESPECIE->Width = 150;
			// 
			// EDAD
			// 
			this->EDAD->HeaderText = L"EDAD";
			this->EDAD->Name = L"EDAD";
			this->EDAD->ReadOnly = true;
			// 
			// btnatender
			// 
			this->btnatender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnatender->Enabled = false;
			this->btnatender->ForeColor = System::Drawing::Color::White;
			this->btnatender->Location = System::Drawing::Point(635, 459);
			this->btnatender->Name = L"btnatender";
			this->btnatender->Size = System::Drawing::Size(199, 27);
			this->btnatender->TabIndex = 1;
			this->btnatender->Text = L"ATENDER";
			this->btnatender->UseVisualStyleBackColor = false;
			this->btnatender->Click += gcnew System::EventHandler(this, &Atencion::Btnatender_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 510);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1302, 80);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1061, 461);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 101);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->txtvacunador);
			this->panel2->Controls->Add(this->txtfecha);
			this->panel2->Controls->Add(this->txtraza);
			this->panel2->Controls->Add(this->txtcolor);
			this->panel2->Controls->Add(this->txtsexo);
			this->panel2->Controls->Add(this->txtedad);
			this->panel2->Controls->Add(this->txtanimal);
			this->panel2->Controls->Add(this->txtespecie);
			this->panel2->Controls->Add(this->txtdireccion);
			this->panel2->Controls->Add(this->txtnombre);
			this->panel2->Controls->Add(this->txtlugar);
			this->panel2->Controls->Add(this->txtsalud);
			this->panel2->Controls->Add(this->txtnumero);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(103, 24);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(367, 538);
			this->panel2->TabIndex = 4;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Atencion::Panel2_Paint);
			// 
			// txtvacunador
			// 
			this->txtvacunador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtvacunador->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtvacunador->Location = System::Drawing::Point(16, 487);
			this->txtvacunador->Name = L"txtvacunador";
			this->txtvacunador->Size = System::Drawing::Size(262, 20);
			this->txtvacunador->TabIndex = 5;
			// 
			// txtfecha
			// 
			this->txtfecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtfecha->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtfecha->Location = System::Drawing::Point(16, 438);
			this->txtfecha->Name = L"txtfecha";
			this->txtfecha->Size = System::Drawing::Size(262, 20);
			this->txtfecha->TabIndex = 5;
			// 
			// txtraza
			// 
			this->txtraza->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtraza->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtraza->Location = System::Drawing::Point(261, 386);
			this->txtraza->Name = L"txtraza";
			this->txtraza->Size = System::Drawing::Size(90, 20);
			this->txtraza->TabIndex = 5;
			// 
			// txtcolor
			// 
			this->txtcolor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcolor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtcolor->Location = System::Drawing::Point(113, 386);
			this->txtcolor->Name = L"txtcolor";
			this->txtcolor->Size = System::Drawing::Size(55, 20);
			this->txtcolor->TabIndex = 5;
			// 
			// txtsexo
			// 
			this->txtsexo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtsexo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtsexo->Location = System::Drawing::Point(16, 386);
			this->txtsexo->Name = L"txtsexo";
			this->txtsexo->Size = System::Drawing::Size(55, 20);
			this->txtsexo->TabIndex = 5;
			// 
			// txtedad
			// 
			this->txtedad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtedad->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtedad->Location = System::Drawing::Point(261, 342);
			this->txtedad->Name = L"txtedad";
			this->txtedad->Size = System::Drawing::Size(55, 20);
			this->txtedad->TabIndex = 5;
			// 
			// txtanimal
			// 
			this->txtanimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtanimal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtanimal->Location = System::Drawing::Point(113, 342);
			this->txtanimal->Name = L"txtanimal";
			this->txtanimal->Size = System::Drawing::Size(112, 20);
			this->txtanimal->TabIndex = 5;
			// 
			// txtespecie
			// 
			this->txtespecie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtespecie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtespecie->Location = System::Drawing::Point(16, 342);
			this->txtespecie->Name = L"txtespecie";
			this->txtespecie->Size = System::Drawing::Size(55, 20);
			this->txtespecie->TabIndex = 5;
			// 
			// txtdireccion
			// 
			this->txtdireccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtdireccion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtdireccion->Location = System::Drawing::Point(16, 291);
			this->txtdireccion->Name = L"txtdireccion";
			this->txtdireccion->Size = System::Drawing::Size(323, 20);
			this->txtdireccion->TabIndex = 5;
			// 
			// txtnombre
			// 
			this->txtnombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnombre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtnombre->Location = System::Drawing::Point(16, 240);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(323, 20);
			this->txtnombre->TabIndex = 5;
			// 
			// txtlugar
			// 
			this->txtlugar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtlugar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtlugar->Location = System::Drawing::Point(16, 191);
			this->txtlugar->Name = L"txtlugar";
			this->txtlugar->Size = System::Drawing::Size(164, 20);
			this->txtlugar->TabIndex = 5;
			// 
			// txtsalud
			// 
			this->txtsalud->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtsalud->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtsalud->Location = System::Drawing::Point(16, 142);
			this->txtsalud->Name = L"txtsalud";
			this->txtsalud->Size = System::Drawing::Size(164, 20);
			this->txtsalud->TabIndex = 5;
			// 
			// txtnumero
			// 
			this->txtnumero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnumero->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtnumero->Location = System::Drawing::Point(270, 75);
			this->txtnumero->Name = L"txtnumero";
			this->txtnumero->Size = System::Drawing::Size(81, 20);
			this->txtnumero->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Location = System::Drawing::Point(110, 326);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Nombre del animal:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label16->Location = System::Drawing::Point(13, 471);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(137, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Nombre de Vacunador:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label15->Location = System::Drawing::Point(13, 417);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(134, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Fecha de vacunacion:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label14->Location = System::Drawing::Point(258, 370);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Raza:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label13->Location = System::Drawing::Point(110, 370);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Color:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label12->Location = System::Drawing::Point(13, 370);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 13);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Sexo:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Location = System::Drawing::Point(258, 326);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Edad:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(13, 326);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 13);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Especie:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(13, 275);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Direccion de Propietario:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(13, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Nombre de propietario:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(13, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(182, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Lugar en donde fue vacunado:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(13, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Direccion de Area de Salud:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(237, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"No.";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(16, 61);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(103, 51);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(49, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"CARNET DE VACUNACION ANTIRRABICA";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(13, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ministerio de Salud Publica y Asistencia Social";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(-378, -100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"CARNET DE VACUNACION ANTIRRABICA";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Navy;
			this->label17->Location = System::Drawing::Point(570, 23);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(137, 13);
			this->label17->TabIndex = 5;
			this->label17->Text = L"Nombre de Vacunador:";
			// 
			// txtdr
			// 
			this->txtdr->Location = System::Drawing::Point(713, 16);
			this->txtdr->Name = L"txtdr";
			this->txtdr->Size = System::Drawing::Size(281, 20);
			this->txtdr->TabIndex = 6;
			this->txtdr->TextChanged += gcnew System::EventHandler(this, &Atencion::Txtdr_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Navy;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1011, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 25);
			this->button1->TabIndex = 7;
			this->button1->Text = L"REGISTRAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Atencion::Button1_Click);
			// 
			// Atencion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1302, 590);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtdr);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnatender);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Atencion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Atencion";
			this->Load += gcnew System::EventHandler(this, &Atencion::Atencion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		nodo* cabecera = NULL;
		nodo* nuevo_nodo;
		nodo* auxiliar;

		//nodos y puntero para sacar dtos en la cola
		nodo* frente = NULL;
		nodo* fin = NULL;

		//punteros para archivarnodo
		archivarnodo* encabezdo = NULL;
		archivarnodo* pilaN;
		archivarnodo* soporte;


#pragma endregion
		void mostrar() {
			FILE* archivo;
			archivo = fopen("atencion_clientes.txt", "rb");
			cabecera = NULL;

			if (archivo == NULL)
			{
				return;
			}

			while (feof(archivo) == 0)
			{
				nuevo_nodo = (nodo*)malloc(sizeof(nodo));
				if (1 != fread(nuevo_nodo, sizeof(nodo), 1, archivo)) break;
				nuevo_nodo->siguiente = cabecera;
				cabecera = nuevo_nodo;
			}
			fclose(archivo);

			auxiliar = cabecera;
			dataGridView1->Rows->Clear();

			while (auxiliar != NULL)
			{
				try
				{
					String^ nombre;
					String^ especie;
					String^ edad;

					especie = gcnew String(auxiliar->especie.c_str());
					edad = gcnew String(auxiliar->edad.c_str());
					nombre = gcnew String(auxiliar->nombre.c_str());
					dataGridView1->Rows->Add(nombre, especie, edad);

					auxiliar = auxiliar->siguiente;

					String^ name;
					String^ pet;
					String^ old;
					String^ date;
					String^ adress;
					String^ namepet;
					String^ genere;
					String^ color;
					String^ skill;

					name = gcnew String(cabecera->nombre.c_str());
					pet = gcnew String(cabecera->especie.c_str());
					old = gcnew String(cabecera->edad.c_str());
					date = gcnew String(cabecera->fecha.c_str());
					adress = gcnew String(cabecera->direccion.c_str());
					namepet = gcnew String(cabecera->animal.c_str());
					genere = gcnew String(cabecera->sexo.c_str());
					color = gcnew String(cabecera->color.c_str());
					skill = gcnew String(cabecera->raza.c_str());

					txtnombre->Text = name;
					txtespecie->Text = pet;
					txtedad->Text = old;
					txtfecha->Text = date;
					txtdireccion->Text = adress;
					txtanimal->Text = namepet;
					txtsexo->Text = genere;
					txtcolor->Text = color;
					txtraza->Text = skill;
					
				}
				catch (exception ex)
				{
					break;
				}
			}
			
		}
	private: System::Void Atencion_Load(System::Object^ sender, System::EventArgs^ e) {
		mostrar();
		char mystring[100];
		FILE* fe;
		fe = fopen("salud.txt", "r");
		char cadena[50], * nombre;
		rewind(fe);
		bool found = false;
		do {
			fgets(mystring, 100, fe);
			nombre = strtok(mystring, ";");



			String^ name = gcnew String(nombre);



			txtsalud->Text = name;


		} while (feof(fe) == 0);
		fe = fopen("lugar.txt", "r");
		rewind(fe);
		do {
			fgets(mystring, 100, fe);
			nombre = strtok(mystring, ";");



			String^ name = gcnew String(nombre);



			txtlugar->Text = name;


		} while (feof(fe) == 0);
	}
	private: System::Void Btnatender_Click(System::Object^ sender, System::EventArgs^ e) {
		i++;
		FILE* archivo;
		archivo = fopen("atencion_clientes.txt", "rb");

		cabecera = NULL;

		if (archivo == NULL)
		{
			MessageBox::Show("NO HAY MASCOTAS POR VACUNAR", "INFORMACIÓN", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		while (feof(archivo) == 0)
		{
			nuevo_nodo = (nodo*)malloc(sizeof(nodo));
			if (1 != fread(nuevo_nodo, sizeof(nodo), 1, archivo)) break;
			nuevo_nodo->siguiente = cabecera;
			cabecera = nuevo_nodo;
		}
		fclose(archivo);


		//removemos datos en la cola
		auxiliar = NULL;

		if (cabecera != NULL)
		{
			auxiliar = cabecera;
			cabecera = auxiliar->siguiente;

			string dato = "NOMBRE PROPIETARIO: " + auxiliar->nombre + "\n";
			dato += "MASCOTA: " + auxiliar->especie;
			MessageBox::Show(gcnew String(dato.c_str()), "MASCOTA VACUNADO", MessageBoxButtons::OK, MessageBoxIcon::Information);
			free(auxiliar);
		}
		else
		{
			MessageBox::Show("NO HAY MASCOTAS", "INFORMACIÓN", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			i = 0;
		}

		//guardamos la nueva cola en el archivo
		auxiliar = cabecera;
		encabezdo = NULL;

		while (auxiliar != NULL)
		{
			//Depositamos la pila en una nueva estructura para guardar el archivo en orden.
			archivarnodo* pilaN = new archivarnodo();
			pilaN->fecha = auxiliar->fecha;
			pilaN->nombre = auxiliar->nombre;
			pilaN->direccion = auxiliar->direccion;
			pilaN->animal = auxiliar->animal;
			pilaN->especie = auxiliar->especie;
			pilaN->edad = auxiliar->edad;
			pilaN->sexo = auxiliar->sexo;
			pilaN->color = auxiliar->color;
			pilaN->raza = auxiliar->raza;
			pilaN->siguiente = encabezdo;
			encabezdo = pilaN;

			auxiliar = auxiliar->siguiente;

		}

		//Guardamos el archivo recorriendo el pilaSave (orden invertido)
		soporte = encabezdo;
		FILE* archivo2;
		archivo2 = fopen("atencion_clientes.txt", "w");

		while (soporte != NULL)
		{
			fwrite(soporte, sizeof(archivarnodo), 1, archivo2);
			soporte = soporte->siguiente;
		}
		fclose(archivo2);

		//refrescamos de datagridview
		mostrar();
		txtnumero->Text = Convert::ToString(i);
	}
private: System::Void Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtdr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
		 int i = 1;
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtdr->Text == "") {
		MessageBox::Show("Ingrese nombre del vacunador", "DATOS", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		txtvacunador->Text = txtdr->Text;
		btnatender->Enabled = true;
		txtnumero->Text = Convert::ToString(i);
	}
}
};
}
