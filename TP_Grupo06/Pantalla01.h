#pragma once
#include "CJuego.h"
//#include "CGraficos.h"
#include <vcclr.h>
//#include "Inicio.h"


namespace TPGrupo06 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pantalla01
	/// </summary>
	public ref class Pantalla01 : public System::Windows::Forms::Form
	{
	public:
		Pantalla01(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			juego = new CJuego();
			tipo = 0;
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pantalla01()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelCabecera;
	protected:
	private: System::Windows::Forms::Button^ btnRestaurar;
	private: System::Windows::Forms::Button^ btnMinimizar;
	private: System::Windows::Forms::Button^ btnMaximizar;
	private: System::Windows::Forms::Button^ btnCerrar;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


		//Declaracion de CJuego // KHT
	CJuego* juego;
	int tipo;
	private: System::Windows::Forms::ListView^ lstTabla;
	private: System::Windows::Forms::Label^ lblTipoEstrategia;
	private: System::Windows::Forms::Label^ lblResultado;
	private: System::Windows::Forms::Label^ lbl1menosQ;
	private: System::Windows::Forms::Label^ lblQ;
	private: System::Windows::Forms::Label^ lbl1menosP;
	private: System::Windows::Forms::Label^ lblP;
	private: System::Windows::Forms::Button^ btnGrafico;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnMenu;





		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pantalla01::typeid));
			this->panelCabecera = (gcnew System::Windows::Forms::Panel());
			this->btnRestaurar = (gcnew System::Windows::Forms::Button());
			this->btnMinimizar = (gcnew System::Windows::Forms::Button());
			this->btnMaximizar = (gcnew System::Windows::Forms::Button());
			this->btnCerrar = (gcnew System::Windows::Forms::Button());
			this->lstTabla = (gcnew System::Windows::Forms::ListView());
			this->lblTipoEstrategia = (gcnew System::Windows::Forms::Label());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->lbl1menosQ = (gcnew System::Windows::Forms::Label());
			this->lblQ = (gcnew System::Windows::Forms::Label());
			this->lbl1menosP = (gcnew System::Windows::Forms::Label());
			this->lblP = (gcnew System::Windows::Forms::Label());
			this->btnGrafico = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnMenu = (gcnew System::Windows::Forms::Button());
			this->panelCabecera->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelCabecera
			// 
			this->panelCabecera->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panelCabecera->Controls->Add(this->btnRestaurar);
			this->panelCabecera->Controls->Add(this->btnMinimizar);
			this->panelCabecera->Controls->Add(this->btnMaximizar);
			this->panelCabecera->Controls->Add(this->btnCerrar);
			this->panelCabecera->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelCabecera->Location = System::Drawing::Point(0, 0);
			this->panelCabecera->Name = L"panelCabecera";
			this->panelCabecera->Size = System::Drawing::Size(500, 40);
			this->panelCabecera->TabIndex = 1;
			// 
			// btnRestaurar
			// 
			this->btnRestaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnRestaurar->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnRestaurar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRestaurar->FlatAppearance->BorderSize = 0;
			this->btnRestaurar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->btnRestaurar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btnRestaurar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRestaurar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRestaurar.Image")));
			this->btnRestaurar->Location = System::Drawing::Point(414, 0);
			this->btnRestaurar->Name = L"btnRestaurar";
			this->btnRestaurar->Size = System::Drawing::Size(40, 40);
			this->btnRestaurar->TabIndex = 4;
			this->btnRestaurar->UseVisualStyleBackColor = false;
			this->btnRestaurar->Visible = false;
			this->btnRestaurar->Click += gcnew System::EventHandler(this, &Pantalla01::btnRestaurar_Click);
			// 
			// btnMinimizar
			// 
			this->btnMinimizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimizar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMinimizar->FlatAppearance->BorderSize = 0;
			this->btnMinimizar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->btnMinimizar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btnMinimizar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimizar.Image")));
			this->btnMinimizar->Location = System::Drawing::Point(368, 0);
			this->btnMinimizar->Name = L"btnMinimizar";
			this->btnMinimizar->Size = System::Drawing::Size(40, 40);
			this->btnMinimizar->TabIndex = 3;
			this->btnMinimizar->UseVisualStyleBackColor = true;
			this->btnMinimizar->Click += gcnew System::EventHandler(this, &Pantalla01::btnMinimizar_Click);
			// 
			// btnMaximizar
			// 
			this->btnMaximizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMaximizar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMaximizar->FlatAppearance->BorderSize = 0;
			this->btnMaximizar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->btnMaximizar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btnMaximizar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaximizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaximizar.Image")));
			this->btnMaximizar->Location = System::Drawing::Point(414, 0);
			this->btnMaximizar->Name = L"btnMaximizar";
			this->btnMaximizar->Size = System::Drawing::Size(40, 40);
			this->btnMaximizar->TabIndex = 2;
			this->btnMaximizar->UseVisualStyleBackColor = true;
			this->btnMaximizar->Click += gcnew System::EventHandler(this, &Pantalla01::btnMaximizar_Click);
			// 
			// btnCerrar
			// 
			this->btnCerrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnCerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCerrar->FlatAppearance->BorderSize = 0;
			this->btnCerrar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->btnCerrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btnCerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCerrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCerrar.Image")));
			this->btnCerrar->Location = System::Drawing::Point(460, 0);
			this->btnCerrar->Name = L"btnCerrar";
			this->btnCerrar->Size = System::Drawing::Size(40, 40);
			this->btnCerrar->TabIndex = 1;
			this->btnCerrar->UseVisualStyleBackColor = true;
			this->btnCerrar->Click += gcnew System::EventHandler(this, &Pantalla01::btnCerrar_Click);
			// 
			// lstTabla
			// 
			this->lstTabla->HideSelection = false;
			this->lstTabla->Location = System::Drawing::Point(124, 164);
			this->lstTabla->Name = L"lstTabla";
			this->lstTabla->Size = System::Drawing::Size(248, 113);
			this->lstTabla->TabIndex = 3;
			this->lstTabla->UseCompatibleStateImageBehavior = false;
			// 
			// lblTipoEstrategia
			// 
			this->lblTipoEstrategia->AutoSize = true;
			this->lblTipoEstrategia->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTipoEstrategia->Location = System::Drawing::Point(56, 340);
			this->lblTipoEstrategia->Name = L"lblTipoEstrategia";
			this->lblTipoEstrategia->Size = System::Drawing::Size(106, 16);
			this->lblTipoEstrategia->TabIndex = 4;
			this->lblTipoEstrategia->Text = L"lblTipoEstrategia";
			// 
			// lblResultado
			// 
			this->lblResultado->AutoSize = true;
			this->lblResultado->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultado->Location = System::Drawing::Point(54, 314);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(81, 16);
			this->lblResultado->TabIndex = 5;
			this->lblResultado->Text = L"lblResultado";
			// 
			// lbl1menosQ
			// 
			this->lbl1menosQ->AutoSize = true;
			this->lbl1menosQ->Location = System::Drawing::Point(259, 148);
			this->lbl1menosQ->Name = L"lbl1menosQ";
			this->lbl1menosQ->Size = System::Drawing::Size(22, 13);
			this->lbl1menosQ->TabIndex = 6;
			this->lbl1menosQ->Text = L"1-q";
			this->lbl1menosQ->Visible = false;
			// 
			// lblQ
			// 
			this->lblQ->AutoSize = true;
			this->lblQ->Location = System::Drawing::Point(164, 148);
			this->lblQ->Name = L"lblQ";
			this->lblQ->Size = System::Drawing::Size(13, 13);
			this->lblQ->TabIndex = 7;
			this->lblQ->Text = L"q";
			this->lblQ->Visible = false;
			// 
			// lbl1menosP
			// 
			this->lbl1menosP->AutoSize = true;
			this->lbl1menosP->Location = System::Drawing::Point(78, 222);
			this->lbl1menosP->Name = L"lbl1menosP";
			this->lbl1menosP->Size = System::Drawing::Size(22, 13);
			this->lbl1menosP->TabIndex = 8;
			this->lbl1menosP->Text = L"1-p";
			this->lbl1menosP->Visible = false;
			// 
			// lblP
			// 
			this->lblP->AutoSize = true;
			this->lblP->Location = System::Drawing::Point(87, 179);
			this->lblP->Name = L"lblP";
			this->lblP->Size = System::Drawing::Size(13, 13);
			this->lblP->TabIndex = 9;
			this->lblP->Text = L"p";
			this->lblP->Visible = false;
			// 
			// btnGrafico
			// 
			this->btnGrafico->BackColor = System::Drawing::Color::Brown;
			this->btnGrafico->FlatAppearance->BorderSize = 0;
			this->btnGrafico->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Firebrick;
			this->btnGrafico->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btnGrafico->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGrafico->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGrafico->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnGrafico->Location = System::Drawing::Point(394, 250);
			this->btnGrafico->Name = L"btnGrafico";
			this->btnGrafico->Size = System::Drawing::Size(85, 36);
			this->btnGrafico->TabIndex = 10;
			this->btnGrafico->Text = L"Ver Gráfico";
			this->btnGrafico->UseVisualStyleBackColor = false;
			this->btnGrafico->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label1->Location = System::Drawing::Point(162, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Teoría de juegos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(170, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 23);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Equilibrio de Nash";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(390, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(89, 85);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 19);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Resultado: ";
			// 
			// btnMenu
			// 
			this->btnMenu->BackColor = System::Drawing::Color::Brown;
			this->btnMenu->FlatAppearance->BorderSize = 0;
			this->btnMenu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Firebrick;
			this->btnMenu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btnMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenu->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMenu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMenu->Location = System::Drawing::Point(390, 340);
			this->btnMenu->Name = L"btnMenu";
			this->btnMenu->Size = System::Drawing::Size(85, 36);
			this->btnMenu->TabIndex = 15;
			this->btnMenu->Text = L"Menú";
			this->btnMenu->UseVisualStyleBackColor = false;
			this->btnMenu->Visible = false;
			this->btnMenu->Click += gcnew System::EventHandler(this, &Pantalla01::btnMenu_Click);
			// 
			// Pantalla01
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 400);
			this->Controls->Add(this->btnMenu);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGrafico);
			this->Controls->Add(this->lblP);
			this->Controls->Add(this->lbl1menosP);
			this->Controls->Add(this->lblQ);
			this->Controls->Add(this->lbl1menosQ);
			this->Controls->Add(this->lblResultado);
			this->Controls->Add(this->lblTipoEstrategia);
			this->Controls->Add(this->lstTabla);
			this->Controls->Add(this->panelCabecera);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Pantalla01";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pantalla01";
			this->Load += gcnew System::EventHandler(this, &Pantalla01::Pantalla01_Load);
			this->panelCabecera->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnRestaurar_Click(System::Object^ sender, System::EventArgs^ e) {
	btnRestaurar->Visible = false;
	btnMaximizar->Visible = true;
	this->WindowState = System::Windows::Forms::FormWindowState::Normal;
}
private: System::Void btnMaximizar_Click(System::Object^ sender, System::EventArgs^ e) {
	btnMaximizar->Visible = false;
	btnRestaurar->Visible = true;
	this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
}
private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
private: System::Void Pantalla01_Load(System::Object^ sender, System::EventArgs^ e) {

	configurarTabla();
	empezarJuego();

}

void configurarTabla()
{
	lstTabla->View = View::Details;
	lstTabla->GridLines = true;
	lstTabla->Columns->Add("");
	lstTabla->Columns->Add("X");
	lstTabla->Columns->Add("Y");
	lstTabla->Columns->Add("Z");

}

	private: System::Void btnEmpezar_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	void empezarJuego()
	{

		this->Location = System::Drawing::Point(500, 100);
		this->ClientSize = System::Drawing::Size(500, 400);
		juego->agrego2Jugadores();// rrelenar 2 jugadores con su estrategias
		juego->llenarTodo();
		int tmp;
		String^ cadena;
		int numero;
		for (int i = 0; i < 2; i++)
		{
			if (i == 0) { lstTabla->Items->Add("A"); }
			if (i == 1) { lstTabla->Items->Add("B"); }


			for (int j = 0; j < 3; j++) ///X Y Z CAMBIO
			{
				cadena = "";
				if (juego->getListaJugadores()[0]->getListaEstrategias()[i]->getListaNumeros()[j]->getEstado() != false) { cadena += "("; }
				cadena += juego->getListaJugadores()[0]->getListaEstrategias()[i]->getListaNumeros()[j]->getNumero();
				if (juego->getListaJugadores()[0]->getListaEstrategias()[i]->getListaNumeros()[j]->getEstado() != false) { cadena += ")"; }

				cadena += ",";

				if (juego->getListaJugadores()[1]->getListaEstrategias()[j]->getListaNumeros()[i]->getEstado() != false) { cadena += "("; }
				cadena += juego->getListaJugadores()[1]->getListaEstrategias()[j]->getListaNumeros()[i]->getNumero();
				if (juego->getListaJugadores()[1]->getListaEstrategias()[j]->getListaNumeros()[i]->getEstado() != false) { cadena += ")"; }

				lstTabla->Items[i]->SubItems->Add(cadena);

			}
		}
		juego->Detectar_tipo_Estrategia();
		juego->mostrarPruebas();

		if (juego->get_estrategia())
		{
			lblTipoEstrategia->Text = "Estrategia Pura";
			String^ coordenadas = gcnew System::String(juego->mostrarCoordenadaEquilibrio().c_str());
			lblResultado->Text = "ENEP={" + coordenadas + "}";

		}
		else
		{
			lblTipoEstrategia->Text = "Estrategia Mixta";
			lbl1menosQ->Visible = true;  
			lblQ->Visible = true;
			lbl1menosP->Visible = true;
			lblP->Visible = true;
			btnGrafico->Visible = false; //FALTAA COLOCAR TRUE  
			lblResultado->Visible = false;
		}
		lblTipoEstrategia->Visible = true;

	}

private: System::Void btnGrafico_Click(System::Object^ sender, System::EventArgs^ e) {
	//CGraficos^ frm = gcnew CGraficos(juego);
	//frm->ShowDialog();
}
private: System::Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Close();
	//Inicio().ShowDialog();
}
};
}
