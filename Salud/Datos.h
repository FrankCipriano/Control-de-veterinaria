#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#define _CRT_SECURE_NO_WARNINGS
namespace Salud {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public struct nodo {
		string fecha;
		string  nombre;
		string direccion;
		string animal;
		string especie;
		string edad;
		string sexo;
		string color;
		string raza;
		nodo* siguiente;
	};


	public struct archivarnodo {
		string fecha;
		string  nombre;
		string direccion;
		string animal;
		string especie;
		string edad;
		string sexo;
		string color;
		string raza;
		archivarnodo* siguiente;
	};

	/// <summary>
	/// Resumen de Datos
	/// </summary>
	public ref class Datos : public System::Windows::Forms::Form
	{
	public:
		Datos(void)
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
		~Datos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtfecha;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtdireccion;
	private: System::Windows::Forms::TextBox^ txtnombre;






	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtraza;
	private: System::Windows::Forms::TextBox^ txtcolor;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::CheckBox^ cbmacho;
	private: System::Windows::Forms::CheckBox^ cbhembra;
	private: System::Windows::Forms::TextBox^ txtanimal;

	private: System::Windows::Forms::TextBox^ txtedad;



	private: System::Windows::Forms::RadioButton^ rbgato;
	private: System::Windows::Forms::RadioButton^ rbperro;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Datos::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtfecha = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtdireccion = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtraza = (gcnew System::Windows::Forms::TextBox());
			this->txtcolor = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cbmacho = (gcnew System::Windows::Forms::CheckBox());
			this->cbhembra = (gcnew System::Windows::Forms::CheckBox());
			this->txtanimal = (gcnew System::Windows::Forms::TextBox());
			this->txtedad = (gcnew System::Windows::Forms::TextBox());
			this->rbgato = (gcnew System::Windows::Forms::RadioButton());
			this->rbperro = (gcnew System::Windows::Forms::RadioButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(186, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha de vacunacion";
			// 
			// txtfecha
			// 
			this->txtfecha->BackColor = System::Drawing::Color::White;
			this->txtfecha->ForeColor = System::Drawing::Color::Blue;
			this->txtfecha->Location = System::Drawing::Point(322, 76);
			this->txtfecha->Name = L"txtfecha";
			this->txtfecha->Size = System::Drawing::Size(362, 20);
			this->txtfecha->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtnombre);
			this->groupBox1->Controls->Add(this->txtdireccion);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->groupBox1->Location = System::Drawing::Point(191, 130);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(516, 109);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del propietario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Direccion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre";
			// 
			// txtnombre
			// 
			this->txtnombre->BackColor = System::Drawing::Color::White;
			this->txtnombre->ForeColor = System::Drawing::Color::Blue;
			this->txtnombre->Location = System::Drawing::Point(72, 32);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(421, 20);
			this->txtnombre->TabIndex = 1;
			// 
			// txtdireccion
			// 
			this->txtdireccion->BackColor = System::Drawing::Color::White;
			this->txtdireccion->ForeColor = System::Drawing::Color::Blue;
			this->txtdireccion->Location = System::Drawing::Point(72, 70);
			this->txtdireccion->Name = L"txtdireccion";
			this->txtdireccion->Size = System::Drawing::Size(421, 20);
			this->txtdireccion->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(121, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Nombre";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(144, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Especie";
			// 
			// txtraza
			// 
			this->txtraza->BackColor = System::Drawing::Color::White;
			this->txtraza->ForeColor = System::Drawing::Color::Blue;
			this->txtraza->Location = System::Drawing::Point(172, 119);
			this->txtraza->Name = L"txtraza";
			this->txtraza->Size = System::Drawing::Size(146, 20);
			this->txtraza->TabIndex = 1;
			// 
			// txtcolor
			// 
			this->txtcolor->BackColor = System::Drawing::Color::White;
			this->txtcolor->ForeColor = System::Drawing::Color::Blue;
			this->txtcolor->Location = System::Drawing::Point(172, 86);
			this->txtcolor->Name = L"txtcolor";
			this->txtcolor->Size = System::Drawing::Size(146, 20);
			this->txtcolor->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->cbmacho);
			this->groupBox2->Controls->Add(this->cbhembra);
			this->groupBox2->Controls->Add(this->txtanimal);
			this->groupBox2->Controls->Add(this->txtedad);
			this->groupBox2->Controls->Add(this->txtcolor);
			this->groupBox2->Controls->Add(this->rbgato);
			this->groupBox2->Controls->Add(this->rbperro);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->txtraza);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->groupBox2->Location = System::Drawing::Point(198, 259);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(508, 235);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos del animal";
			// 
			// cbmacho
			// 
			this->cbmacho->AutoSize = true;
			this->cbmacho->Location = System::Drawing::Point(270, 192);
			this->cbmacho->Name = L"cbmacho";
			this->cbmacho->Size = System::Drawing::Size(64, 17);
			this->cbmacho->TabIndex = 3;
			this->cbmacho->Text = L"Macho";
			this->cbmacho->UseVisualStyleBackColor = true;
			this->cbmacho->CheckedChanged += gcnew System::EventHandler(this, &Datos::Cbmacho_CheckedChanged);
			// 
			// cbhembra
			// 
			this->cbhembra->AutoSize = true;
			this->cbhembra->Location = System::Drawing::Point(204, 192);
			this->cbhembra->Name = L"cbhembra";
			this->cbhembra->Size = System::Drawing::Size(69, 17);
			this->cbhembra->TabIndex = 3;
			this->cbhembra->Text = L"Hembra";
			this->cbhembra->UseVisualStyleBackColor = true;
			this->cbhembra->CheckedChanged += gcnew System::EventHandler(this, &Datos::Cbhembra_CheckedChanged);
			// 
			// txtanimal
			// 
			this->txtanimal->BackColor = System::Drawing::Color::White;
			this->txtanimal->ForeColor = System::Drawing::Color::Blue;
			this->txtanimal->Location = System::Drawing::Point(172, 19);
			this->txtanimal->Name = L"txtanimal";
			this->txtanimal->Size = System::Drawing::Size(146, 20);
			this->txtanimal->TabIndex = 1;
			// 
			// txtedad
			// 
			this->txtedad->BackColor = System::Drawing::Color::White;
			this->txtedad->ForeColor = System::Drawing::Color::Blue;
			this->txtedad->Location = System::Drawing::Point(172, 53);
			this->txtedad->Name = L"txtedad";
			this->txtedad->Size = System::Drawing::Size(146, 20);
			this->txtedad->TabIndex = 1;
			// 
			// rbgato
			// 
			this->rbgato->AutoSize = true;
			this->rbgato->Location = System::Drawing::Point(270, 160);
			this->rbgato->Name = L"rbgato";
			this->rbgato->Size = System::Drawing::Size(52, 17);
			this->rbgato->TabIndex = 2;
			this->rbgato->TabStop = true;
			this->rbgato->Text = L"Gato";
			this->rbgato->UseVisualStyleBackColor = true;
			this->rbgato->CheckedChanged += gcnew System::EventHandler(this, &Datos::Rbgato_CheckedChanged);
			// 
			// rbperro
			// 
			this->rbperro->AutoSize = true;
			this->rbperro->Location = System::Drawing::Point(204, 158);
			this->rbperro->Name = L"rbperro";
			this->rbperro->Size = System::Drawing::Size(55, 17);
			this->rbperro->TabIndex = 2;
			this->rbperro->TabStop = true;
			this->rbperro->Text = L"Perro";
			this->rbperro->UseVisualStyleBackColor = true;
			this->rbperro->CheckedChanged += gcnew System::EventHandler(this, &Datos::Rbperro_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(133, 123);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Raza";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(133, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Color";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(134, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Edad";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(152, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Sexo";
			// 
			// btnagregar
			// 
			this->btnagregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnagregar->ForeColor = System::Drawing::Color::White;
			this->btnagregar->Location = System::Drawing::Point(322, 518);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(260, 31);
			this->btnagregar->TabIndex = 4;
			this->btnagregar->Text = L"AGREGAR";
			this->btnagregar->UseVisualStyleBackColor = false;
			this->btnagregar->Click += gcnew System::EventHandler(this, &Datos::Btnagregar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(717, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(188, 104);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(164, 563);
			this->panel1->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Location = System::Drawing::Point(300, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(375, 25);
			this->label10->TabIndex = 7;
			this->label10->Text = L"!La rabia es una enferedad mortal!";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(717, 345);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(188, 195);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// Datos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(917, 563);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btnagregar);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txtfecha);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"Datos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Datos";
			this->Load += gcnew System::EventHandler(this, &Datos::Datos_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		nodo* frente = NULL;
		nodo* fin = NULL;
		//punteros para 
		nodo* cabecera = NULL;
		nodo* nuevo_nodo;
		nodo* auxiliar;
		String^ genero = "";
		String^ mascota = "";
		//punteros para archivarnodo
		archivarnodo* encabezdo = NULL;
		archivarnodo* pilaN;
		archivarnodo* soporte;
#pragma endregion
		
	private: System::Void Datos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void Btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (
		txtfecha->Text == "" ||
		txtnombre->Text == "" ||
		txtdireccion->Text == "" ||
		txtanimal->Text == "" ||
		txtedad->Text == "" ||
		txtcolor->Text == "" ||
		txtraza->Text == "" ||
		genero == "" ||
		mascota == ""
		) {
		MessageBox::Show("Debe llenar todos los campos", "Error al ingresar datos", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		armarcola();
	}
}
		 void armarcola() {
			 String^ fecha = txtfecha->Text;
			 String^ nombre = txtnombre->Text;
			 String^ direccion = txtdireccion->Text;
			 String^ animal = txtanimal->Text;
			 String^ especie = mascota;
			 String^ edad = txtedad->Text;
			 String^ sexo = genero;
			 String^ color = txtcolor->Text;
			 String^ raza = txtraza->Text;


			 nodo* nuevo_nodo = new nodo();
			 nuevo_nodo->fecha = msclr::interop::marshal_as<string>(fecha);
			 nuevo_nodo->nombre = msclr::interop::marshal_as<string>(nombre);
			 nuevo_nodo->direccion = msclr::interop::marshal_as<string>(direccion);
			 nuevo_nodo->animal = msclr::interop::marshal_as<string>(animal);
			 nuevo_nodo->especie = msclr::interop::marshal_as<string>(especie);
			 nuevo_nodo->edad = msclr::interop::marshal_as<string>(edad);
			 nuevo_nodo->sexo = msclr::interop::marshal_as<string>(sexo);
			 nuevo_nodo->color = msclr::interop::marshal_as<string>(color);
			 nuevo_nodo->raza = msclr::interop::marshal_as<string>(raza);
			 nuevo_nodo->siguiente = NULL;
			 cabecera = nuevo_nodo;

			 if (cola_vacia(frente)) {
				 frente = nuevo_nodo;
			 }
			 else {
				 fin->siguiente = nuevo_nodo;
			 }
			 fin = nuevo_nodo;

			 txtfecha->Text = "";
			 txtnombre->Text = "";
			 txtdireccion->Text = "";
			 txtanimal->Text = "";
			 rbgato->Checked = false;
			 rbperro->Checked = false;
			 txtedad->Text = "";
			 cbmacho->Checked = false;
			 cbhembra->Checked = false;
			 txtcolor->Text = "";
			 txtraza->Text = "";
			 txtfecha->Focus();

			 MessageBox::Show("Datos registrados con Exito", "Registro Exitoso", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 archivar();
		 }

		 bool cola_vacia(nodo* frente) {
			 return(frente == NULL) ? true : false;
		 }

		 void archivar() {
			 auxiliar = cabecera;

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
			 FILE* archivo;
			 archivo = fopen("atencion_clientes.txt", "w");

			 while (soporte != NULL)
			 {
				 fwrite(soporte, sizeof(archivarnodo), 1, archivo);
				 soporte = soporte->siguiente;
			 }
			 fclose(archivo);
		 }
private: System::Void Rbperro_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mascota = "Perro";
}
private: System::Void Rbgato_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mascota = "Gato";
}
private: System::Void Cbmacho_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	genero = "Macho";
}
private: System::Void Cbhembra_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	genero = "Hembra";
}

};
}
