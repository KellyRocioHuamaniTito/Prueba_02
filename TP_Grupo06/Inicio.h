#pragma once
#include "conio.h"
#include "Windows.h"
#include "Pantalla01.h"



namespace TPGrupo06 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ panelCabecera;
	protected:
	private: System::Windows::Forms::Button^ btnCerrar;
	private: System::Windows::Forms::Button^ btnRestaurar;
	private: System::Windows::Forms::Button^ btnMinimizar;
	private: System::Windows::Forms::Button^ btnMaximizar;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->panelCabecera = (gcnew System::Windows::Forms::Panel());
			this->btnRestaurar = (gcnew System::Windows::Forms::Button());
			this->btnMinimizar = (gcnew System::Windows::Forms::Button());
			this->btnMaximizar = (gcnew System::Windows::Forms::Button());
			this->btnCerrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panelCabecera->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->panelCabecera->TabIndex = 0;
			// 
			// btnRestaurar
			// 
			this->btnRestaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
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
			this->btnRestaurar->UseVisualStyleBackColor = true;
			this->btnRestaurar->Visible = false;
			this->btnRestaurar->Click += gcnew System::EventHandler(this, &Inicio::btnRestaurar_Click);
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
			this->btnMinimizar->Click += gcnew System::EventHandler(this, &Inicio::btnMinimizar_Click);
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
			this->btnMaximizar->Click += gcnew System::EventHandler(this, &Inicio::btnMaximizar_Click);
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
			this->btnCerrar->Click += gcnew System::EventHandler(this, &Inicio::btnCerrar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light SemiCondensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(159, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Teoría de juegos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(185, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"WX41 - Grupo 06";
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnIniciar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIniciar->FlatAppearance->BorderSize = 0;
			this->btnIniciar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnIniciar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnIniciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnIniciar->Location = System::Drawing::Point(201, 320);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(86, 31);
			this->btnIniciar->TabIndex = 4;
			this->btnIniciar->Text = L"Iniciar";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &Inicio::btnIniciar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(190, 166);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(113, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(397, 66);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 80);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 400);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panelCabecera);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->panelCabecera->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnMaximizar_Click(System::Object^ sender, System::EventArgs^ e) {
	btnMaximizar->Visible = false;
	btnRestaurar->Visible = true;
	this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
}
private: System::Void btnRestaurar_Click(System::Object^ sender, System::EventArgs^ e) {
	btnRestaurar->Visible = false;
	btnMaximizar->Visible = true;
	this->WindowState = System::Windows::Forms::FormWindowState::Normal;
}
private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;

}

private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Pantalla01().ShowDialog();

}
};
}
