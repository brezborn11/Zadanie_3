#pragma once
#include<math.h>

namespace Zadanie3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ h0_text;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ V0_text;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Kat_text;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ zapisz_button;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ skok_czasu_text;
	private: System::Windows::Forms::Label^ label8;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->h0_text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->V0_text = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Kat_text = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->zapisz_button = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->skok_czasu_text = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// h0_text
			// 
			this->h0_text->Location = System::Drawing::Point(134, 32);
			this->h0_text->Name = L"h0_text";
			this->h0_text->Size = System::Drawing::Size(57, 20);
			this->h0_text->TabIndex = 0;
			this->h0_text->TextChanged += gcnew System::EventHandler(this, &MyForm::h0_text_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Poczatkowa wysokoœæ:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(197, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"m";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Poczatkowa prêdkoœæ:";
			// 
			// V0_text
			// 
			this->V0_text->Location = System::Drawing::Point(134, 74);
			this->V0_text->Name = L"V0_text";
			this->V0_text->Size = System::Drawing::Size(57, 20);
			this->V0_text->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(197, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"m/s";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Poczatkowy k¹t:";
			// 
			// Kat_text
			// 
			this->Kat_text->Location = System::Drawing::Point(134, 112);
			this->Kat_text->Name = L"Kat_text";
			this->Kat_text->Size = System::Drawing::Size(57, 20);
			this->Kat_text->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(197, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(11, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"°";
			// 
			// zapisz_button
			// 
			this->zapisz_button->Location = System::Drawing::Point(56, 188);
			this->zapisz_button->Name = L"zapisz_button";
			this->zapisz_button->Size = System::Drawing::Size(75, 23);
			this->zapisz_button->TabIndex = 9;
			this->zapisz_button->Text = L"Zapisz do pliku";
			this->zapisz_button->UseVisualStyleBackColor = true;
			this->zapisz_button->Click += gcnew System::EventHandler(this, &MyForm::zapisz_button_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 144);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Skok czasu:";
			// 
			// skok_czasu_text
			// 
			this->skok_czasu_text->Location = System::Drawing::Point(134, 144);
			this->skok_czasu_text->Name = L"skok_czasu_text";
			this->skok_czasu_text->Size = System::Drawing::Size(57, 20);
			this->skok_czasu_text->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(196, 151);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(12, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"s";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(255, 238);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->skok_czasu_text);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->zapisz_button);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Kat_text);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->V0_text);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->h0_text);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double t_c, vx, vy,h_max;
	double g = 9.81;
	private: System::Void oblicznia() {
		double h0= Convert::ToDouble(h0_text->Text);
		double v0 = Convert::ToDouble(V0_text->Text);
		double alfa0 = Convert::ToDouble(Kat_text->Text);
		vx = v0 * cos(alfa0);
		vy = v0 * sin(alfa0);
		h_max = h0 + ((vy * vy) / (2 * g));
		t_c = vy / g + sqrt(2 * h_max / g);
	}
private: System::Void zapisz_button_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	sfd->InitialDirectory = "Desktop";
	sfd->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	sfd->FilterIndex = 1;
	sfd->RestoreDirectory = true;

	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		StreamWriter^ plik = gcnew StreamWriter(sfd->FileName);
		try
		{
			oblicznia();
			plik->WriteLine("t[s]\t x[m]\t y[m]\t vx[m/s]\t vy[m/s]\n");
			for (double i = 0; i < t_c; i+=Convert::ToDouble(skok_czasu_text->Text))
			{
				plik->WriteLine("{0:F}\t{1:F}\t{2:F}\t{3:F}\t\t{4:F}\n", i, (vx * i), (vy * i - (g * i * i / 2) + h_max), vx, (vy - g * i));
			}
			
			plik->Close();
			MessageBox::Show("Dane zosta³y zapisane do pliku", "OK",MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e)
		{
			MessageBox::Show("B³¹d obliczeñ, lub zapisu plików", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			plik->Close();
		}
	}
}
private: System::Void h0_text_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
