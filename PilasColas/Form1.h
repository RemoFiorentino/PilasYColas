#pragma once

namespace PilasColas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Stack^ AvionPresidencial;
		Queue^ PizzaCaprichosa;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			PizzaCaprichosa = gcnew Queue();
			AvionPresidencial= gcnew Stack();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox1;

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(151, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Meter en la cola";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Introduce tu info";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(151, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Sacar todo de la cola";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(151, 88);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Meter en la pila";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(151, 118);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Sacar todos del avion";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 57);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(132, 121);
			this->listBox1->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 193);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Nigga\'s Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ Dato = textBox1->Text;
				 PizzaCaprichosa->Enqueue(Dato);
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
			 while(PizzaCaprichosa->Count!=0)
			 {
				 String^ info = (String^)PizzaCaprichosa->Dequeue();
				 listBox1->Items->Add(info);
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ Dato = textBox1->Text;
				AvionPresidencial->Push(Dato);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
			 while(AvionPresidencial->Count!=0)
			 {
				 String^ info = (String^)AvionPresidencial->Pop();
				 listBox1->Items->Add(info);
			 }
		 }
};
}

