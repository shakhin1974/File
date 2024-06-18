#pragma once
#include <string>
namespace File {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;






























	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(557, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Num, this->fio,
					this->Column6, this->age, this->Column1, this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(693, 246);
			this->dataGridView1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(126, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Num
			// 
			this->Num->HeaderText = L"є";
			this->Num->Name = L"Num";
			this->Num->Width = 50;
			// 
			// fio
			// 
			this->fio->HeaderText = L"Surname";
			this->fio->Name = L"fio";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Name";
			this->Column6->Name = L"Column6";
			// 
			// age
			// 
			this->age->HeaderText = L"Year";
			this->age->Name = L"age";
			this->age->Width = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Pol";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ves";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Rost";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Stependia";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Gruppa";
			this->Column5->Name = L"Column5";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 339);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ lines = gcnew array<String^>(dataGridView1->RowCount - (dataGridView1->AllowUserToAddRows ? 1 : 0)); // проверка тут
		array<String^>^ values = gcnew array<String^>(dataGridView1->ColumnCount);

		for (int i = 0; i < lines->Length; ++i) //количество строк указывает размер массива
		{
			for (int j = 0; j < dataGridView1->ColumnCount; ++j)
				values[j] = (String^)dataGridView1->Rows[i]->Cells[j]->Value;
			lines[i] = String::Join(L" ", values);
		}
		IO::File::WriteAllLines("file.txt", lines, System::Text::Encoding::UTF8);

	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ lines = IO::File::ReadAllLines("file.txt");
	for each (String ^ str in lines)
	{
		DataGridViewRow^ row = gcnew DataGridViewRow();
		row->CreateCells(dataGridView1);
		for (int i = 0; i < str->Split(L' ')->Length; i++)
			row->Cells[i]->Value = str->Split(L' ')[i];
		dataGridView1->Rows->Add(row);
	}
}
};
}
