#pragma once
#include "Board.h"

Board myBoard;

namespace WordbrainHelper {
	
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(105, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Continue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Board Size (total letters):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Number of Words:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(134, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(134, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(282, 259);
			this->panel1->TabIndex = 5;
			this->panel1->Visible = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->dataGridView2);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(282, 259);
			this->panel2->TabIndex = 3;
			this->panel2->Visible = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(22, 39);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView2->Size = System::Drawing::Size(240, 150);
			this->dataGridView2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Please Enter the Number of Letters in Each Word";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(120, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(74, 153);
			this->dataGridView1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(105, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(253, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Please enter the letters as they appear in the puzzle.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(80, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"(Before solving any words)";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(105, 209);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Continue";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"WordBrainHelper";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 System::String ^temp;
				 if (this->textBox1->Text->Length != 0 && this->textBox2->Text->Length != 0)
				 {
					
					 System::String^ temp = this->textBox1->Text;
					 myBoard.setSize(System::Math::Sqrt(System::Int32::Parse(temp)));

					 temp = this->textBox2->Text;
					 myBoard.setNumWords( System::Int32::Parse(temp));

					 panel1->Visible = true;

					 this->dataGridView1->ColumnCount = 1;
					 this->dataGridView1->RowCount = myBoard.getNumWords();
					 for (int i = 0; i < myBoard.getNumWords(); i ++)
					 {
						 temp = "(Word " + System::Convert::ToString(i+1) + ")";
						 this->dataGridView1->Rows[i]->Cells[0]->Value = temp;
					 }
				 }
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 
				 //this->panel1->Visible = false;
				 this->panel2->Visible = true;

				 //get the letters per word
				 for (int i = 0; i < myBoard.getNumWords(); i++)
				 {
					 myBoard.addNumLetters(System::Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[0]->Value));
				 }

				 this->dataGridView2->RowCount =myBoard.getSize();
				 this->dataGridView2->ColumnCount = myBoard.getSize();
				 

	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			
			 myBoard.setNumWords(myBoard.getSize());
			 Cell temp;
			 for (int i=0; i < myBoard.getSize(); i++)
			 {
				 for (int j=0; j < myBoard.getSize(); j++)
				 {
					 temp.setLetter(System::Convert::ToChar(this->dataGridView2->Rows[i]->Cells[j]->Value));
					 temp.setStatus(true);
					 myBoard.setCell(i, j, temp);
				 }
			 }

}
};
}
