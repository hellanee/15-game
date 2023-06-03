#pragma once
#include <ctime>
#include <stdlib.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Label^ clicks;
	private: System::Windows::Forms::Label^ timer;


	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Timer^ startTimer;
	private: System::ComponentModel::IContainer^ components;

	private:

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->clicks = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->startTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(5, 5);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(70, 5);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 1;
			this->button2->TabStop = false;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(135, 5);
			this->button3->Margin = System::Windows::Forms::Padding(5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 2;
			this->button3->TabStop = false;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(200, 5);
			this->button4->Margin = System::Windows::Forms::Padding(5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 3;
			this->button4->TabStop = false;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(200, 70);
			this->button8->Margin = System::Windows::Forms::Padding(5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 7;
			this->button8->TabStop = false;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(135, 70);
			this->button7->Margin = System::Windows::Forms::Padding(5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 6;
			this->button7->TabStop = false;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(70, 70);
			this->button6->Margin = System::Windows::Forms::Padding(5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 5;
			this->button6->TabStop = false;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(5, 70);
			this->button5->Margin = System::Windows::Forms::Padding(5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 4;
			this->button5->TabStop = false;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			
			this->button16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(200, 200);
			this->button16->Margin = System::Windows::Forms::Padding(5);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 60);
			this->button16->TabIndex = 15;
			this->button16->TabStop = false;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			
			this->button15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(135, 200);
			this->button15->Margin = System::Windows::Forms::Padding(5);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 60);
			this->button15->TabIndex = 14;
			this->button15->TabStop = false;
			this->button15->Text = L"15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			
			this->button14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(70, 200);
			this->button14->Margin = System::Windows::Forms::Padding(5);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 13;
			this->button14->TabStop = false;
			this->button14->Text = L"14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			 
			this->button13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(5, 200);
			this->button13->Margin = System::Windows::Forms::Padding(5);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 60);
			this->button13->TabIndex = 12;
			this->button13->TabStop = false;
			this->button13->Text = L"13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(200, 135);
			this->button12->Margin = System::Windows::Forms::Padding(5);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 60);
			this->button12->TabIndex = 11;
			this->button12->TabStop = false;
			this->button12->Text = L"12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(135, 135);
			this->button11->Margin = System::Windows::Forms::Padding(5);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 10;
			this->button11->TabStop = false;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(70, 135);
			this->button10->Margin = System::Windows::Forms::Padding(5);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 60);
			this->button10->TabIndex = 9;
			this->button10->TabStop = false;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			 
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(5, 135);
			this->button9->Margin = System::Windows::Forms::Padding(5);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 8;
			this->button9->TabStop = false;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->clicks);
			this->groupBox1->Controls->Add(this->timer);
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Location = System::Drawing::Point(270, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(110, 260);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(6, 182);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(98, 31);
			this->button18->TabIndex = 3;
			this->button18->TabStop = false;
			this->button18->Text = L"Clear";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			
			this->clicks->AutoSize = true;
			this->clicks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clicks->Location = System::Drawing::Point(7, 41);
			this->clicks->Name = L"clicks";
			this->clicks->Size = System::Drawing::Size(50, 16);
			this->clicks->TabIndex = 2;
			this->clicks->Text = L"Clicks: ";
			
			this->timer->AutoSize = true;
			this->timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timer->Location = System::Drawing::Point(7, 16);
			this->timer->Name = L"timer";
			this->timer->Size = System::Drawing::Size(42, 16);
			this->timer->TabIndex = 1;
			this->timer->Text = L"Time:";
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(6, 219);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(98, 35);
			this->button17->TabIndex = 0;
			this->button17->TabStop = false;
			this->button17->Text = L"Start again";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			
			this->startTimer->Interval = 1000;
			this->startTimer->Tick += gcnew System::EventHandler(this, &MyForm::startTimer_Tick);
			
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 266);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"15 puzzle";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		int Counter = 0, timeCounter = 0;

		public: System::Void Generation(Button^ b1, Button^ b2, Button^ b3, Button^ b4, 
			Button^ b5, Button^ b6, Button^ b7, Button^ b8, Button^ b9, Button^ b10, 
			Button^ b11, Button^ b12, Button^ b13, Button^ b14, Button^ b15, Button^ b16)
		{
			int j, sp, i, parity;
			int arr[16] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
			regenerate:
			parity = 0;
			for (i = 0; i < 16; i++)
			{
				srand(time(0));
				j = i + rand() % (16 - i);
				sp = arr[i];
				arr[i] = arr[j];
				arr[j] = sp;
			}
			for (i = 0; i < 15; i++)
			{
				if (arr[i] != 0)
					for (j = i + 1; j < 16; j++)
					{
						if (arr[j] < arr[i] && arr[j] != 0)
							parity++;
					}
				else
					switch (i)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 8:
						case 9:
						case 10:
						case 11:
							parity++;
							break;
					}
				}
			if (parity % 2 != 0)
				goto regenerate;
			if (!arr[0]) { b1->Visible = false;  b1->Text = ""; }
				else { b1->Text = arr[0].ToString(); b1->Visible = true;}
			if (!arr[1]) { b2->Visible = false;  b2->Text = ""; }
				else { b2->Text = arr[1].ToString(); b2->Visible = true;}
			if (!arr[2]) { b3->Visible = false;  b3->Text = ""; }
				else { b3->Text = arr[2].ToString(); b3->Visible = true;}
			if (!arr[3]) { b4->Visible = false;  b4->Text = ""; }
				else { b4->Text = arr[3].ToString(); b4->Visible = true;}
			if (!arr[4]) { b5->Visible = false;  b5->Text = ""; }
				else { b5->Text = arr[4].ToString(); b5->Visible = true;}
			if (!arr[5]) { b6->Visible = false;  b6->Text = ""; }
				else { b6->Text = arr[5].ToString(); b6->Visible = true;}
			if (!arr[6]) { b7->Visible = false;  b7->Text = ""; }
				else { b7->Text = arr[6].ToString(); b7->Visible = true;}
			if (!arr[7]) { b8->Visible = false;  b8->Text = ""; }
				else { b8->Text = arr[7].ToString(); b8->Visible = true;}
			if (!arr[8]) { b9->Visible = false;  b9->Text = ""; }
				else { b9->Text = arr[8].ToString(); b9->Visible = true;}
			if (!arr[9]) { b10->Visible = false;  b10->Text = ""; }
				else { b10->Text = arr[9].ToString(); b10->Visible = true;}
			if (!arr[10]) { b11->Visible = false;  b11->Text = ""; }
				else { b11->Text = arr[10].ToString(); b11->Visible = true;}
			if (!arr[11]) { b12->Visible = false;  b12->Text = ""; }
				else { b12->Text = arr[11].ToString(); b12->Visible = true;}
			if (!arr[12]) { b13->Visible = false;  b13->Text = ""; }
				else { b13->Text = arr[12].ToString(); b13->Visible = true;}
			if (!arr[13]) { b14->Visible = false;  b14->Text = ""; }
				else { b14->Text = arr[13].ToString(); b14->Visible = true;}
			if (!arr[14]) { b15->Visible = false;  b15->Text = ""; }
				else { b15->Text = arr[14].ToString(); b15->Visible = true;}
			if (!arr[15]) { b16->Visible = false;  b16->Text = ""; }
				else { b16->Text = arr[15].ToString(); b16->Visible = true;}
		}

		public: System::Void EmptyCheck(Button^ b1, Button^ b2)
		{
			if (b2->Text == "")
			{
				b2->Text = b1->Text;
				b1->Text = "";
				b1->Visible = false;
				b2->Visible = true;
				if (Counter == 0)
				{
					timeCounter = 0;
					startTimer->Interval = 1000;
					startTimer->Enabled = true;
				}
				Counter++;
				clicks->Text = "Clicks: " + Counter.ToString();
			}
		}

		public: System::Void SolutionCheck()
		{
			if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3"
				&& button4->Text == "4" && button5->Text == "5" && button6->Text == "6"
				&& button7->Text == "7" && button8->Text == "8" && button9->Text == "9"
				&& button10->Text == "10" && button11->Text == "11" && button12->Text == "12"
				&& button13->Text == "13" && button14->Text == "14" && button15->Text == "15")
			{
				startTimer->Enabled = false;
				MessageBox::Show("Puzzle solved!", "15 puzzle", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
				
				
		}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		Generation(button1, button2, button3, button4, button5, button6, button7, button8, 
			button9, button10, button11, button12, button13, button14, button15, button16);
		clicks->Text = "Clicks: ";
		timer->Text = "Time: ";
		Counter = 0;
		startTimer->Enabled = false;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button1, button2);
	EmptyCheck(button1, button5);
	SolutionCheck();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button2, button1);
	EmptyCheck(button2, button3);
	EmptyCheck(button2, button6);
	SolutionCheck();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button3, button2);
	EmptyCheck(button3, button4);
	EmptyCheck(button3, button7);
	SolutionCheck();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button4, button3);
	EmptyCheck(button4, button8);
	SolutionCheck();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button5, button1);
	EmptyCheck(button5, button6);
	EmptyCheck(button5, button9);
	SolutionCheck();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button6, button2);
	EmptyCheck(button6, button5);
	EmptyCheck(button6, button7);
	EmptyCheck(button6, button10);
	SolutionCheck();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button7, button3);
	EmptyCheck(button7, button6);
	EmptyCheck(button7, button8);
	EmptyCheck(button7, button11);
	SolutionCheck();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button8, button4);
	EmptyCheck(button8, button7);
	EmptyCheck(button8, button12);
	SolutionCheck();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button9, button5);
	EmptyCheck(button9, button10);
	EmptyCheck(button9, button13);
	SolutionCheck();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button10, button6);
	EmptyCheck(button10, button9);
	EmptyCheck(button10, button11);
	EmptyCheck(button10, button14);
	SolutionCheck();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button11, button7);
	EmptyCheck(button11, button10);
	EmptyCheck(button11, button12);
	EmptyCheck(button11, button15);
	SolutionCheck();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button12, button8);
	EmptyCheck(button12, button11);
	EmptyCheck(button12, button16);
	SolutionCheck();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button13, button9);
	EmptyCheck(button13, button14);
	SolutionCheck();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button14, button10);
	EmptyCheck(button14, button13);
	EmptyCheck(button14, button15);
	SolutionCheck();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button15, button11);
	EmptyCheck(button15, button14);
	EmptyCheck(button15, button16);
	SolutionCheck();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptyCheck(button16, button12);
	EmptyCheck(button16, button15);
	SolutionCheck();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Text = "1"; button1->Visible = true;
	button2->Text = "2"; button2->Visible = true;
	button3->Text = "3"; button3->Visible = true;
	button4->Text = "4"; button4->Visible = true;
	button5->Text = "5"; button5->Visible = true;
	button6->Text = "6"; button6->Visible = true;
	button7->Text = "7"; button7->Visible = true;
	button8->Text = "8"; button8->Visible = true;
	button9->Text = "9"; button9->Visible = true;
	button10->Text = "10"; button10->Visible = true;
	button11->Text = "11"; button11->Visible = true;
	button12->Text = "12"; button12->Visible = true;
	button13->Text = "13"; button13->Visible = true;
	button14->Text = "14"; button14->Visible = true;
	button15->Text = "15"; button15->Visible = true;
	button16->Text = ""; button16->Visible = false;
	Counter = 0;
	startTimer->Enabled = false;
	clicks->Text = "Clicks: ";
	timer->Text = "Time: ";
}
private: System::Void startTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	++timeCounter;
	timer->Text = "Time: " + (timeCounter / 600).ToString() + (timeCounter/60-timeCounter/600*10).ToString() + ":" + (timeCounter%60/10).ToString() + (timeCounter % 10).ToString();
}
};
}