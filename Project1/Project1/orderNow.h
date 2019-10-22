#pragma once
//#include "MyForm.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for orderNow
	/// </summary>
	public ref class orderNow : public System::Windows::Forms::Form
	{
	public:
		orderNow(String ^amnt, String ^name , String ^mid , String ^tnum)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->label2->Text = name;
			this->label4->Text = mid;
			this->label6->Text = tnum;
			this->label8->Text = amnt;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~orderNow()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>


	public: String^ totalBalance;

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(orderNow::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::AliceBlue;
			this->label1->Location = System::Drawing::Point(60, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Customer Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(222, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(259, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"_________________________";
			this->label2->Click += gcnew System::EventHandler(this, &orderNow::Label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::AliceBlue;
			this->label3->Location = System::Drawing::Point(60, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Membership ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(222, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"_________________________";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::AliceBlue;
			this->label5->Location = System::Drawing::Point(60, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Table Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(222, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(259, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"_________________________";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::AliceBlue;
			this->label7->Location = System::Drawing::Point(60, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Total Bill ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(468, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 36);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &orderNow::Button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(617, 426);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 36);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Quit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &orderNow::Button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::AliceBlue;
			this->label8->Location = System::Drawing::Point(222, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 20);
			this->label8->TabIndex = 9;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::AliceBlue;
			this->label9->Location = System::Drawing::Point(46, 353);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(497, 20);
			this->label9->TabIndex = 10;
			this->label9->Text = L"If you want to paste the order press Confirm , else press Quit";
			// 
			// orderNow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(789, 477);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"orderNow";
			this->Text = L"orderNow";
			this->Load += gcnew System::EventHandler(this, &orderNow::OrderNow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OrderNow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show("Thank You for Ordering.....Your Order will arrive Soon" , "Message");
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
