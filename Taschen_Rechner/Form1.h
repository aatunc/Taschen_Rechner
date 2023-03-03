#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_OK;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_6;
	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_10;
	private: System::Windows::Forms::Button^ btn_11;
	private: System::Windows::Forms::Button^ btn_12;
	private: System::Windows::Forms::Button^ btn_13;
	private: System::Windows::Forms::Button^ btn_14;
	private: System::Windows::Forms::Label^ label2;










	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_10 = (gcnew System::Windows::Forms::Button());
			this->btn_11 = (gcnew System::Windows::Forms::Button());
			this->btn_12 = (gcnew System::Windows::Forms::Button());
			this->btn_13 = (gcnew System::Windows::Forms::Button());
			this->btn_14 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 21);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 73);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(275, 21);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 73);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(205, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n/a";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// btn_OK
			// 
			this->btn_OK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_OK->Location = System::Drawing::Point(45, 178);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(75, 40);
			this->btn_OK->TabIndex = 3;
			this->btn_OK->Text = L"+";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &Form1::btn_OK_Click);
			// 
			// btn_2
			// 
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_2->Location = System::Drawing::Point(126, 178);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(75, 40);
			this->btn_2->TabIndex = 4;
			this->btn_2->Text = L"-";
			this->btn_2->UseVisualStyleBackColor = true;
			// 
			// btn_3
			// 
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_3->Location = System::Drawing::Point(207, 178);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(75, 40);
			this->btn_3->TabIndex = 5;
			this->btn_3->Text = L"*";
			this->btn_3->UseVisualStyleBackColor = true;
			// 
			// btn_4
			// 
			this->btn_4->Location = System::Drawing::Point(298, 178);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(75, 40);
			this->btn_4->TabIndex = 6;
			this->btn_4->Text = L"/";
			this->btn_4->UseVisualStyleBackColor = true;
			// 
			// btn_5
			// 
			this->btn_5->Location = System::Drawing::Point(308, 253);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(50, 48);
			this->btn_5->TabIndex = 7;
			this->btn_5->Text = L"1";
			this->btn_5->UseVisualStyleBackColor = true;
			// 
			// btn_6
			// 
			this->btn_6->Location = System::Drawing::Point(257, 253);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(49, 48);
			this->btn_6->TabIndex = 8;
			this->btn_6->Text = L"2";
			this->btn_6->UseVisualStyleBackColor = true;
			// 
			// btn_7
			// 
			this->btn_7->Location = System::Drawing::Point(190, 253);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(57, 48);
			this->btn_7->TabIndex = 9;
			this->btn_7->Text = L"3";
			this->btn_7->UseVisualStyleBackColor = true;
			// 
			// btn_8
			// 
			this->btn_8->Location = System::Drawing::Point(119, 253);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(56, 48);
			this->btn_8->TabIndex = 10;
			this->btn_8->Text = L"4";
			this->btn_8->UseVisualStyleBackColor = true;
			// 
			// btn_9
			// 
			this->btn_9->Location = System::Drawing::Point(45, 253);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(58, 48);
			this->btn_9->TabIndex = 11;
			this->btn_9->Text = L"5";
			this->btn_9->UseVisualStyleBackColor = true;
			// 
			// btn_10
			// 
			this->btn_10->Location = System::Drawing::Point(308, 311);
			this->btn_10->Name = L"btn_10";
			this->btn_10->Size = System::Drawing::Size(50, 48);
			this->btn_10->TabIndex = 12;
			this->btn_10->Text = L"6";
			this->btn_10->UseVisualStyleBackColor = true;
			// 
			// btn_11
			// 
			this->btn_11->Location = System::Drawing::Point(257, 311);
			this->btn_11->Name = L"btn_11";
			this->btn_11->Size = System::Drawing::Size(49, 48);
			this->btn_11->TabIndex = 13;
			this->btn_11->Text = L"7";
			this->btn_11->UseVisualStyleBackColor = true;
			// 
			// btn_12
			// 
			this->btn_12->Location = System::Drawing::Point(190, 311);
			this->btn_12->Name = L"btn_12";
			this->btn_12->Size = System::Drawing::Size(57, 48);
			this->btn_12->TabIndex = 17;
			this->btn_12->Text = L"8";
			this->btn_12->UseVisualStyleBackColor = true;
			// 
			// btn_13
			// 
			this->btn_13->Location = System::Drawing::Point(119, 311);
			this->btn_13->Name = L"btn_13";
			this->btn_13->Size = System::Drawing::Size(56, 48);
			this->btn_13->TabIndex = 18;
			this->btn_13->Text = L"9";
			this->btn_13->UseVisualStyleBackColor = true;
			// 
			// btn_14
			// 
			this->btn_14->Location = System::Drawing::Point(45, 311);
			this->btn_14->Name = L"btn_14";
			this->btn_14->Size = System::Drawing::Size(58, 48);
			this->btn_14->TabIndex = 19;
			this->btn_14->Text = L"0";
			this->btn_14->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(452, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 39);
			this->label2->TabIndex = 20;
			this->label2->Text = L"=";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(762, 420);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_14);
			this->Controls->Add(this->btn_13);
			this->Controls->Add(this->btn_12);
			this->Controls->Add(this->btn_11);
			this->Controls->Add(this->btn_10);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = textBox1->Text;
	}
	private: System::Void btn_OK_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "+";
		int result = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);
		label2->Text = System::Convert::ToString(result); //textBox1->Text + textBox2->Text;
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
