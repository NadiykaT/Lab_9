#pragma once

namespace Lab9 {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚Ë‚ÂÒÚËƒ‡Ì≥ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÓœÓ„‡ÏÛToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÓ¿‚ÚÓ‡ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚Ë‚ÂÒÚËƒ‡Ì≥ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem,
					this->‚Ë‚ÂÒÚËƒ‡Ì≥ToolStripMenuItem, this->ÔÓœÓ„‡ÏÛToolStripMenuItem, this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(572, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem
			// 
			this->Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem->Name = L"Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem";
			this->Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem->Size = System::Drawing::Size(120, 24);
			this->Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem->Text = L"«‡ÔËÒ‡ÚË ‰‡Ì≥";
			this->Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem_Click);
			// 
			// ‚Ë‚ÂÒÚËƒ‡Ì≥ToolStripMenuItem
			// 
			this->‚Ë‚ÂÒÚËƒ‡Ì≥ToolStripMenuItem->Name = L"‚Ë‚ÂÒÚËƒ‡Ì≥ToolStripMenuItem";
			this->‚Ë‚ÂÒÚËƒ‡Ì≥ToolStripMenuItem->Size = System::Drawing::Size(112, 24);
			this->‚Ë‚ÂÒÚËƒ‡Ì≥ToolStripMenuItem->Text = L"¬Ë‚ÂÒÚË ‰‡Ì≥";
			this->‚Ë‚ÂÒÚËƒ‡Ì≥ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ÔÓœÓ„‡ÏÛToolStripMenuItem
			// 
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Name = L"ÔÓœÓ„‡ÏÛToolStripMenuItem";
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Text = L"œÓ ÔÓ„‡ÏÛ";
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÔÓœÓ„‡ÏÛToolStripMenuItem_Click);
			// 
			// ÔÓ¿‚ÚÓ‡ToolStripMenuItem
			// 
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem->Name = L"ÔÓ¿‚ÚÓ‡ToolStripMenuItem";
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem->Text = L"œÓ ‡‚ÚÓ‡";
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÔÓ¿‚ÚÓ‡ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"œ≤œ ÒÚÛ‰ÂÌÚ‡";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L" ÛÒ";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"√ÛÔ‡";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(396, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ã≥ÒˆÂ ÔÓÊË‚‡ÌÌˇ ( 1 -  „ÛÚÓÊËÚÓÍ; 2 - Í‚‡ÚË‡)";
			this->label4->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(189, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(337, 27);
			this->textBox1->TabIndex = 5;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(109, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(110, 27);
			this->textBox2->TabIndex = 6;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(109, 138);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 27);
			this->textBox3->TabIndex = 7;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(436, 189);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(65, 27);
			this->textBox4->TabIndex = 8;
			this->textBox4->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(220, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 47);
			this->button1->TabIndex = 9;
			this->button1->Text = L"¬Ë‚ÂÒÚË";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(117, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(324, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"—ÚÛ‰ÂÌÚË, ˇÍ≥ ÔÓÊË‚‡˛Ú¸ Û „ÛÚÓÊËÚÍÛ";
			this->label5->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(109, 348);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(320, 227);
			this->textBox5->TabIndex = 11;
			this->textBox5->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(109, 612);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 33);
			this->button2->TabIndex = 12;
			this->button2->Text = L"œÓ ÔÓ„‡ÏÛ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::ÔÓœÓ„‡ÏÛToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(276, 612);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 33);
			this->button3->TabIndex = 13;
			this->button3->Text = L"œÓ ‡‚ÚÓ‡";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ÔÓ¿‚ÚÓ‡ToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 657);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ref struct student
		{
			String^ FIO, ^ Curs, ^ Gruppa;
			double a;
		};

private: System::Void ÔÓœÓ„‡ÏÛToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("12. —ÚÛÍÚÛ‡ Ï≥ÒÚËÚ¸ Ú‡Í≥ ÔÓÎˇ: œ≤œ ÒÚÛ‰ÂÌÚ‡, ÍÛÒ, ÌÓÏÂ „ÛÔË, Ï≥ÒˆÂ ÔÓÊË‚‡ÌÌˇ. ¬Ë‚ÂÒÚË Ì‡ ÂÍ‡Ì ‚Ò≥ı ÚËı ÒÚÛ‰ÂÌÚ≥‚, ˇÍ≥ ÔÓÊË‚‡˛Ú¸ Û „ÛÚÓÊËÚÍÛ.", "œÓ ÔÓ„‡ÏÛ");
}
private: System::Void ÔÓ¿‚ÚÓ‡ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("¬ËÍÓÌ‡Î‡ ÒÚÛ‰ÂÌÚÍ‡ „ÛÔË 3—ŒÃ “‡‡Ì˛Í Õ‡‰≥ˇ", "œÓ ‡‚ÚÓ‡");
}
private: System::Void Á‡ÔËÒ‡ÚËƒ‡Ì≥ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Visible = true;
	textBox1->Visible = true;
	label2->Visible = true;
	textBox2->Visible = true;
	label3->Visible = true;
	textBox3->Visible = true;
	label4->Visible = true;
	textBox4->Visible = true;
	button1->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	label5->Visible = true;
	textBox5->Visible = true;
	double a;
	student^ stud = gcnew student;
	String^ s1, ^ s2;
	stud->FIO = textBox1->Text;
	stud->Curs = textBox2->Text;
	stud->Gruppa = textBox3->Text;
	stud->a = Convert::ToInt32(textBox4->Text);
	s1 = (stud->FIO + " " + stud->Curs + " " + stud->Gruppa + "\r\n");
	a = Convert::ToInt32(textBox4->Text);
	if (a == 1)

	{
		textBox5->AppendText(s1 + " " + s2 + "\r\n");
	}
	textBox1->Text = " ";
	textBox2->Text = " ";
	textBox3->Text = " ";
	textBox4->Text = " ";
}
};
}
