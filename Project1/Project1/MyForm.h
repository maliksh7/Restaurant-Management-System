#pragma once

#include "Linklist.h"
#include "orderNow.h"
#include <msclr/marshal_cppstd.h>
#include <string>

namespace Project1 {

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

	protected:



	private: System::DirectoryServices::DirectoryEntry^ directoryEntry1;
	private: System::Windows::Forms::TabPage^ Appetizers;


	private: System::Windows::Forms::TabControl^ tabControl1;









	private: System::Windows::Forms::TabPage^ Chicken;



















	private: System::Windows::Forms::TabPage^ Customer_Info;













































	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;




	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;

	private: System::Windows::Forms::Label^ label53;

	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label60;


	private: System::Windows::Forms::ComboBox^ comboBox18;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;






private: System::Windows::Forms::TabPage^ Soups;

private: System::Windows::Forms::TabPage^ Beef;
private: System::Windows::Forms::TabPage^ Vegetables;
private: System::Windows::Forms::TabPage^ Drinks;
private: System::Windows::Forms::TabPage^ Desserts;



















private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Label^ label79;

private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::Label^ label82;

private: System::Windows::Forms::Label^ label84;

private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::Label^ label90;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ label91;



private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::Label^ label94;
private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::ComboBox^ comboBox7;
private: System::Windows::Forms::ComboBox^ comboBox8;
private: System::Windows::Forms::ComboBox^ comboBox9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::ComboBox^ comboBox10;
private: System::Windows::Forms::ComboBox^ comboBox11;
private: System::Windows::Forms::ComboBox^ comboBox12;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;



private: System::Windows::Forms::ComboBox^ comboBox31;
private: System::Windows::Forms::ComboBox^ comboBox32;
private: System::Windows::Forms::ComboBox^ comboBox33;









private: System::Windows::Forms::Label^ label105;
private: System::Windows::Forms::Label^ label106;
private: System::Windows::Forms::Label^ label107;
private: System::Windows::Forms::Label^ label108;
private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::Label^ label110;
private: System::Windows::Forms::Label^ label111;
private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::Label^ label114;
private: System::Windows::Forms::Label^ label115;
private: System::Windows::Forms::Label^ label116;
private: System::Windows::Forms::Label^ label117;
private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::Label^ label119;
private: System::Windows::Forms::Label^ label120;
private: System::Windows::Forms::Label^ label121;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Label^ label122;
private: System::Windows::Forms::ComboBox^ comboBox34;
private: System::Windows::Forms::ComboBox^ comboBox35;
private: System::Windows::Forms::ComboBox^ comboBox36;
private: System::Windows::Forms::Label^ label123;
private: System::Windows::Forms::Label^ label124;
private: System::Windows::Forms::Label^ label125;
private: System::Windows::Forms::Label^ label126;
















private: System::Windows::Forms::Label^ label137;
private: System::Windows::Forms::Label^ label138;

private: System::Windows::Forms::Label^ label140;
private: System::Windows::Forms::Label^ label141;

private: System::Windows::Forms::Label^ label143;
private: System::Windows::Forms::Label^ label144;
private: System::Windows::Forms::Label^ label145;
private: System::Windows::Forms::Label^ label146;
private: System::Windows::Forms::Label^ label147;
private: System::Windows::Forms::Label^ label148;
private: System::Windows::Forms::Label^ label149;
private: System::Windows::Forms::Label^ label150;
private: System::Windows::Forms::Label^ label151;
private: System::Windows::Forms::Label^ label152;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label153;



private: System::Windows::Forms::Label^ label154;
private: System::Windows::Forms::Label^ label155;
private: System::Windows::Forms::Label^ label156;
private: System::Windows::Forms::Label^ label157;
private: System::Windows::Forms::ComboBox^ comboBox46;
private: System::Windows::Forms::ComboBox^ comboBox47;
private: System::Windows::Forms::ComboBox^ comboBox48;
private: System::Windows::Forms::ComboBox^ comboBox49;
private: System::Windows::Forms::ComboBox^ comboBox50;
private: System::Windows::Forms::ComboBox^ comboBox51;
private: System::Windows::Forms::Label^ label158;
private: System::Windows::Forms::Label^ label159;
private: System::Windows::Forms::Label^ label160;
private: System::Windows::Forms::Label^ label161;
private: System::Windows::Forms::Label^ label162;
private: System::Windows::Forms::Label^ label163;
private: System::Windows::Forms::Label^ label164;
private: System::Windows::Forms::Label^ label165;
private: System::Windows::Forms::Label^ label166;
private: System::Windows::Forms::Label^ label167;
private: System::Windows::Forms::Label^ label168;
private: System::Windows::Forms::Label^ label169;
private: System::Windows::Forms::Label^ label170;
private: System::Windows::Forms::Label^ label171;
private: System::Windows::Forms::Label^ label172;
private: System::Windows::Forms::Label^ label173;
private: System::Windows::Forms::Label^ label174;
private: System::Windows::Forms::Label^ label175;
private: System::Windows::Forms::Label^ label176;
private: System::Windows::Forms::Label^ label177;
private: System::Windows::Forms::Label^ label178;
private: System::Windows::Forms::Label^ label179;
private: System::Windows::Forms::Label^ label180;
private: System::Windows::Forms::Label^ label181;
private: System::Windows::Forms::Label^ label182;
private: System::Windows::Forms::Label^ label183;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label184;
private: System::Windows::Forms::ComboBox^ comboBox52;
private: System::Windows::Forms::ComboBox^ comboBox53;
private: System::Windows::Forms::ComboBox^ comboBox54;
private: System::Windows::Forms::Label^ label185;
private: System::Windows::Forms::Label^ label186;
private: System::Windows::Forms::Label^ label187;
private: System::Windows::Forms::Label^ label188;
private: System::Windows::Forms::ComboBox^ comboBox55;
private: System::Windows::Forms::ComboBox^ comboBox56;
private: System::Windows::Forms::ComboBox^ comboBox57;
private: System::Windows::Forms::ComboBox^ comboBox58;
private: System::Windows::Forms::ComboBox^ comboBox59;
private: System::Windows::Forms::ComboBox^ comboBox60;
private: System::Windows::Forms::Label^ label189;
private: System::Windows::Forms::Label^ label190;
private: System::Windows::Forms::Label^ label191;
private: System::Windows::Forms::Label^ label192;
private: System::Windows::Forms::Label^ label193;
private: System::Windows::Forms::Label^ label194;
private: System::Windows::Forms::Label^ label195;
private: System::Windows::Forms::Label^ label196;
private: System::Windows::Forms::Label^ label197;
private: System::Windows::Forms::Label^ label198;
private: System::Windows::Forms::Label^ label199;
private: System::Windows::Forms::Label^ label200;
private: System::Windows::Forms::Label^ label201;
private: System::Windows::Forms::Label^ label202;
private: System::Windows::Forms::Label^ label203;
private: System::Windows::Forms::Label^ label204;
private: System::Windows::Forms::Label^ label205;
private: System::Windows::Forms::Label^ label206;
private: System::Windows::Forms::Label^ label207;
private: System::Windows::Forms::Label^ label208;
private: System::Windows::Forms::Label^ label209;
private: System::Windows::Forms::Label^ label210;
private: System::Windows::Forms::Label^ label211;
private: System::Windows::Forms::Label^ label212;
private: System::Windows::Forms::Label^ label213;
private: System::Windows::Forms::Label^ label214;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label215;
private: System::Windows::Forms::ComboBox^ comboBox61;
private: System::Windows::Forms::ComboBox^ comboBox62;
private: System::Windows::Forms::ComboBox^ comboBox63;
private: System::Windows::Forms::Label^ label216;
private: System::Windows::Forms::Label^ label217;
private: System::Windows::Forms::Label^ label218;
private: System::Windows::Forms::Label^ label219;









private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;


private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label19;

private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Button^ button12;





private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ textBox1;

private: System::Windows::Forms::ColorDialog^ colorDialog1;
private: System::Windows::Forms::ColorDialog^ colorDialog2;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label46;


private: System::Windows::Forms::Label^ label128;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::Label^ label129;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;


private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button23;


private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label98;
private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::Label^ label72;


private: System::Windows::Forms::Label^ label71;


private: System::Windows::Forms::Label^ label70;


private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::ComboBox^ comboBox13;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::ComboBox^ comboBox14;
private: System::Windows::Forms::ComboBox^ comboBox15;
private: System::Windows::Forms::ComboBox^ comboBox16;
private: System::Windows::Forms::ComboBox^ comboBox17;
private: System::Windows::Forms::ComboBox^ comboBox19;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Button^ button55;
private: System::Windows::Forms::Button^ button57;
private: System::Windows::Forms::Button^ button59;
private: System::Windows::Forms::ComboBox^ comboBox20;
private: System::Windows::Forms::ComboBox^ comboBox21;
private: System::Windows::Forms::ComboBox^ comboBox22;
private: System::Windows::Forms::ComboBox^ comboBox23;
private: System::Windows::Forms::ComboBox^ comboBox24;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Button^ button2;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->Appetizers = (gcnew System::Windows::Forms::TabPage());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->comboBox18 = (gcnew System::Windows::Forms::ComboBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Customer_Info = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Soups = (gcnew System::Windows::Forms::TabPage());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox17 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox19 = (gcnew System::Windows::Forms::ComboBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->Chicken = (gcnew System::Windows::Forms::TabPage());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->Beef = (gcnew System::Windows::Forms::TabPage());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->comboBox31 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox32 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox33 = (gcnew System::Windows::Forms::ComboBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->comboBox34 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox35 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox36 = (gcnew System::Windows::Forms::ComboBox());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->Vegetables = (gcnew System::Windows::Forms::TabPage());
			this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox21 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox22 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox23 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox24 = (gcnew System::Windows::Forms::ComboBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->Drinks = (gcnew System::Windows::Forms::TabPage());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->comboBox46 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox47 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox48 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox49 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox50 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox51 = (gcnew System::Windows::Forms::ComboBox());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->comboBox52 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox53 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox54 = (gcnew System::Windows::Forms::ComboBox());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->Desserts = (gcnew System::Windows::Forms::TabPage());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->comboBox55 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox56 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox57 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox58 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox59 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox60 = (gcnew System::Windows::Forms::ComboBox());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->label192 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->label196 = (gcnew System::Windows::Forms::Label());
			this->label197 = (gcnew System::Windows::Forms::Label());
			this->label198 = (gcnew System::Windows::Forms::Label());
			this->label199 = (gcnew System::Windows::Forms::Label());
			this->label200 = (gcnew System::Windows::Forms::Label());
			this->label201 = (gcnew System::Windows::Forms::Label());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->label204 = (gcnew System::Windows::Forms::Label());
			this->label205 = (gcnew System::Windows::Forms::Label());
			this->label206 = (gcnew System::Windows::Forms::Label());
			this->label207 = (gcnew System::Windows::Forms::Label());
			this->label208 = (gcnew System::Windows::Forms::Label());
			this->label209 = (gcnew System::Windows::Forms::Label());
			this->label210 = (gcnew System::Windows::Forms::Label());
			this->label211 = (gcnew System::Windows::Forms::Label());
			this->label212 = (gcnew System::Windows::Forms::Label());
			this->label213 = (gcnew System::Windows::Forms::Label());
			this->label214 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label215 = (gcnew System::Windows::Forms::Label());
			this->comboBox61 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox62 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox63 = (gcnew System::Windows::Forms::ComboBox());
			this->label216 = (gcnew System::Windows::Forms::Label());
			this->label217 = (gcnew System::Windows::Forms::Label());
			this->label218 = (gcnew System::Windows::Forms::Label());
			this->label219 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Appetizers->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->Customer_Info->SuspendLayout();
			this->Soups->SuspendLayout();
			this->Chicken->SuspendLayout();
			this->Beef->SuspendLayout();
			this->Vegetables->SuspendLayout();
			this->Drinks->SuspendLayout();
			this->Desserts->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Appetizers
			// 
			this->Appetizers->BackColor = System::Drawing::Color::Transparent;
			this->Appetizers->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Appetizers.BackgroundImage")));
			this->Appetizers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Appetizers->Controls->Add(this->comboBox13);
			this->Appetizers->Controls->Add(this->comboBox3);
			this->Appetizers->Controls->Add(this->comboBox2);
			this->Appetizers->Controls->Add(this->comboBox1);
			this->Appetizers->Controls->Add(this->label128);
			this->Appetizers->Controls->Add(this->label54);
			this->Appetizers->Controls->Add(this->label52);
			this->Appetizers->Controls->Add(this->label45);
			this->Appetizers->Controls->Add(this->label44);
			this->Appetizers->Controls->Add(this->button13);
			this->Appetizers->Controls->Add(this->button10);
			this->Appetizers->Controls->Add(this->button11);
			this->Appetizers->Controls->Add(this->button9);
			this->Appetizers->Controls->Add(this->button8);
			this->Appetizers->Controls->Add(this->label47);
			this->Appetizers->Controls->Add(this->label48);
			this->Appetizers->Controls->Add(this->label50);
			this->Appetizers->Controls->Add(this->label51);
			this->Appetizers->Controls->Add(this->label53);
			this->Appetizers->Controls->Add(this->label55);
			this->Appetizers->Controls->Add(this->label56);
			this->Appetizers->Controls->Add(this->label57);
			this->Appetizers->Controls->Add(this->label58);
			this->Appetizers->Controls->Add(this->label59);
			this->Appetizers->Controls->Add(this->button1);
			this->Appetizers->Controls->Add(this->label60);
			this->Appetizers->Controls->Add(this->comboBox18);
			this->Appetizers->Controls->Add(this->label61);
			this->Appetizers->Controls->Add(this->label62);
			this->Appetizers->Controls->Add(this->label63);
			this->Appetizers->Controls->Add(this->label64);
			this->Appetizers->Location = System::Drawing::Point(4, 22);
			this->Appetizers->Name = L"Appetizers";
			this->Appetizers->Padding = System::Windows::Forms::Padding(3);
			this->Appetizers->Size = System::Drawing::Size(1208, 600);
			this->Appetizers->TabIndex = 0;
			this->Appetizers->Text = L"Appetizers";
			this->Appetizers->Click += gcnew System::EventHandler(this, &MyForm::TabPage1_Click);
			// 
			// comboBox13
			// 
			this->comboBox13->BackColor = System::Drawing::Color::Azure;
			this->comboBox13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox13->Location = System::Drawing::Point(740, 395);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(111, 23);
			this->comboBox13->TabIndex = 139;
			this->comboBox13->Text = L"  Select the Quantity";
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::Azure;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox3->Location = System::Drawing::Point(740, 354);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(111, 23);
			this->comboBox3->TabIndex = 138;
			this->comboBox3->Text = L"  Select the Quantity";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::Azure;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox2->Location = System::Drawing::Point(740, 304);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(111, 23);
			this->comboBox2->TabIndex = 137;
			this->comboBox2->Text = L"  Select the Quantity";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Azure;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox1->Location = System::Drawing::Point(740, 258);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(111, 23);
			this->comboBox1->TabIndex = 136;
			this->comboBox1->Text = L"  Select the Quantity";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox1_SelectedIndexChanged);
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->BackColor = System::Drawing::Color::Transparent;
			this->label128->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label128->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label128->Location = System::Drawing::Point(429, 62);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(269, 36);
			this->label128->TabIndex = 135;
			this->label128->Text = L"Appetizers Menu\r\n";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::Transparent;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::Color::AliceBlue;
			this->label54->Location = System::Drawing::Point(156, 392);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(57, 20);
			this->label54->TabIndex = 102;
			this->label54->Text = L"Apt05";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::Transparent;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::AliceBlue;
			this->label52->Location = System::Drawing::Point(156, 353);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(57, 20);
			this->label52->TabIndex = 101;
			this->label52->Text = L"Apt04";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::Transparent;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::AliceBlue;
			this->label45->Location = System::Drawing::Point(156, 307);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(57, 20);
			this->label45->TabIndex = 100;
			this->label45->Text = L"Apt03";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Transparent;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::AliceBlue;
			this->label44->Location = System::Drawing::Point(156, 258);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(57, 20);
			this->label44->TabIndex = 99;
			this->label44->Text = L"Apt02";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(918, 392);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 97;
			this->button13->Text = L"Add";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Button13_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(918, 354);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 96;
			this->button10->Text = L"Add";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(918, 307);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 95;
			this->button11->Text = L"Add";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Button11_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(918, 253);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 94;
			this->button9->Text = L"Add";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(918, 210);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 93;
			this->button8->Text = L"Add";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button8_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::Transparent;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::AliceBlue;
			this->label47->Location = System::Drawing::Point(606, 352);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(44, 20);
			this->label47->TabIndex = 74;
			this->label47->Text = L" 625";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Transparent;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::AliceBlue;
			this->label48->Location = System::Drawing::Point(606, 392);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(39, 20);
			this->label48->TabIndex = 73;
			this->label48->Text = L"280";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::AliceBlue;
			this->label50->Location = System::Drawing::Point(312, 352);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(107, 20);
			this->label50->TabIndex = 68;
			this->label50->Text = L"Crab Puff(6)";
			this->label50->Click += gcnew System::EventHandler(this, &MyForm::Label50_Click);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::Transparent;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::Color::AliceBlue;
			this->label51->Location = System::Drawing::Point(312, 395);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(140, 20);
			this->label51->TabIndex = 67;
			this->label51->Text = L"BBQ Pork Slices";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::Transparent;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::AliceBlue;
			this->label53->Location = System::Drawing::Point(156, 213);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(57, 20);
			this->label53->TabIndex = 65;
			this->label53->Text = L"Apt01";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::Color::Transparent;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::Color::AliceBlue;
			this->label55->Location = System::Drawing::Point(156, 167);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(92, 20);
			this->label55->TabIndex = 63;
			this->label55->Text = L"Item Code";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::Transparent;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->ForeColor = System::Drawing::Color::AliceBlue;
			this->label56->Location = System::Drawing::Point(610, 304);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(39, 20);
			this->label56->TabIndex = 62;
			this->label56->Text = L"655";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::Color::Transparent;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::AliceBlue;
			this->label57->Location = System::Drawing::Point(610, 211);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(39, 20);
			this->label57->TabIndex = 61;
			this->label57->Text = L"280";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::Transparent;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::Color::AliceBlue;
			this->label58->Location = System::Drawing::Point(610, 256);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(39, 20);
			this->label58->TabIndex = 60;
			this->label58->Text = L"525";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::Transparent;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::Color::AliceBlue;
			this->label59->Location = System::Drawing::Point(606, 167);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(49, 20);
			this->label59->TabIndex = 59;
			this->label59->Text = L"Price";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(526, 485);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 54);
			this->button1->TabIndex = 58;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click_1);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::Transparent;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->ForeColor = System::Drawing::Color::AliceBlue;
			this->label60->Location = System::Drawing::Point(312, 305);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(123, 20);
			this->label60->TabIndex = 57;
			this->label60->Text = L"Pop Sticker(6)";
			// 
			// comboBox18
			// 
			this->comboBox18->BackColor = System::Drawing::Color::Azure;
			this->comboBox18->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox18->FormattingEnabled = true;
			this->comboBox18->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox18->Location = System::Drawing::Point(740, 214);
			this->comboBox18->Name = L"comboBox18";
			this->comboBox18->Size = System::Drawing::Size(111, 23);
			this->comboBox18->TabIndex = 54;
			this->comboBox18->Text = L"  Select the Quantity";
			this->comboBox18->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox18_SelectedIndexChanged);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::Transparent;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->ForeColor = System::Drawing::Color::AliceBlue;
			this->label61->Location = System::Drawing::Point(312, 211);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(77, 20);
			this->label61->TabIndex = 53;
			this->label61->Text = L"Egg Roll";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::Transparent;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::AliceBlue;
			this->label62->Location = System::Drawing::Point(312, 256);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(191, 20);
			this->label62->TabIndex = 52;
			this->label62->Text = L"Jumbo Fried Shrimp(4)";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::Transparent;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::Color::AliceBlue;
			this->label63->Location = System::Drawing::Point(752, 167);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(76, 20);
			this->label63->TabIndex = 51;
			this->label63->Text = L"Quantity";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::Transparent;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::AliceBlue;
			this->label64->Location = System::Drawing::Point(312, 167);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(50, 20);
			this->label64->TabIndex = 50;
			this->label64->Text = L"Item ";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Customer_Info);
			this->tabControl1->Controls->Add(this->Appetizers);
			this->tabControl1->Controls->Add(this->Soups);
			this->tabControl1->Controls->Add(this->Chicken);
			this->tabControl1->Controls->Add(this->Beef);
			this->tabControl1->Controls->Add(this->Vegetables);
			this->tabControl1->Controls->Add(this->Drinks);
			this->tabControl1->Controls->Add(this->Desserts);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1216, 626);
			this->tabControl1->TabIndex = 1;
			// 
			// Customer_Info
			// 
			this->Customer_Info->BackColor = System::Drawing::Color::Transparent;
			this->Customer_Info->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Customer_Info.BackgroundImage")));
			this->Customer_Info->Controls->Add(this->label2);
			this->Customer_Info->Controls->Add(this->textBox1);
			this->Customer_Info->Controls->Add(this->label43);
			this->Customer_Info->Controls->Add(this->textBox3);
			this->Customer_Info->Controls->Add(this->button12);
			this->Customer_Info->Controls->Add(this->label20);
			this->Customer_Info->Controls->Add(this->textBox2);
			this->Customer_Info->Controls->Add(this->label19);
			this->Customer_Info->Location = System::Drawing::Point(4, 22);
			this->Customer_Info->Name = L"Customer_Info";
			this->Customer_Info->Size = System::Drawing::Size(1208, 600);
			this->Customer_Info->TabIndex = 2;
			this->Customer_Info->Text = L"Customer_Info";
			this->Customer_Info->Click += gcnew System::EventHandler(this, &MyForm::Customer_Info_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(296, 149);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(277, 38);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label43->Location = System::Drawing::Point(53, 318);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(132, 24);
			this->label43->TabIndex = 6;
			this->label43->Text = L"Table Number";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(296, 308);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(277, 44);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::AliceBlue;
			this->button12->Location = System::Drawing::Point(456, 477);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(117, 52);
			this->button12->TabIndex = 4;
			this->button12->Text = L"Order";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Button12_Click_1);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(53, 234);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(138, 24);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Membership ID";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(296, 234);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(277, 39);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(53, 156);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(156, 24);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Enter Your Name";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::Label19_Click);
			// 
			// Soups
			// 
			this->Soups->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Soups.BackgroundImage")));
			this->Soups->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Soups->Controls->Add(this->comboBox14);
			this->Soups->Controls->Add(this->comboBox15);
			this->Soups->Controls->Add(this->comboBox16);
			this->Soups->Controls->Add(this->comboBox17);
			this->Soups->Controls->Add(this->comboBox19);
			this->Soups->Controls->Add(this->label76);
			this->Soups->Controls->Add(this->label75);
			this->Soups->Controls->Add(this->label83);
			this->Soups->Controls->Add(this->label129);
			this->Soups->Controls->Add(this->button14);
			this->Soups->Controls->Add(this->button15);
			this->Soups->Controls->Add(this->button16);
			this->Soups->Controls->Add(this->button17);
			this->Soups->Controls->Add(this->button18);
			this->Soups->Controls->Add(this->label74);
			this->Soups->Controls->Add(this->label78);
			this->Soups->Controls->Add(this->label79);
			this->Soups->Controls->Add(this->label81);
			this->Soups->Controls->Add(this->label82);
			this->Soups->Controls->Add(this->label84);
			this->Soups->Controls->Add(this->label86);
			this->Soups->Controls->Add(this->label87);
			this->Soups->Controls->Add(this->label88);
			this->Soups->Controls->Add(this->label89);
			this->Soups->Controls->Add(this->label90);
			this->Soups->Controls->Add(this->button3);
			this->Soups->Controls->Add(this->label91);
			this->Soups->Controls->Add(this->label92);
			this->Soups->Controls->Add(this->label93);
			this->Soups->Controls->Add(this->label94);
			this->Soups->Controls->Add(this->label95);
			this->Soups->Location = System::Drawing::Point(4, 22);
			this->Soups->Name = L"Soups";
			this->Soups->Size = System::Drawing::Size(1208, 600);
			this->Soups->TabIndex = 3;
			this->Soups->Text = L"Soups";
			this->Soups->UseVisualStyleBackColor = true;
			// 
			// comboBox14
			// 
			this->comboBox14->BackColor = System::Drawing::Color::Azure;
			this->comboBox14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox14->Location = System::Drawing::Point(751, 387);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(111, 23);
			this->comboBox14->TabIndex = 150;
			this->comboBox14->Text = L"  Select the Quantity";
			// 
			// comboBox15
			// 
			this->comboBox15->BackColor = System::Drawing::Color::Azure;
			this->comboBox15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox15->Location = System::Drawing::Point(751, 346);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(111, 23);
			this->comboBox15->TabIndex = 149;
			this->comboBox15->Text = L"  Select the Quantity";
			// 
			// comboBox16
			// 
			this->comboBox16->BackColor = System::Drawing::Color::Azure;
			this->comboBox16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox16->Location = System::Drawing::Point(751, 296);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(111, 23);
			this->comboBox16->TabIndex = 148;
			this->comboBox16->Text = L"  Select the Quantity";
			// 
			// comboBox17
			// 
			this->comboBox17->BackColor = System::Drawing::Color::Azure;
			this->comboBox17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox17->FormattingEnabled = true;
			this->comboBox17->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox17->Location = System::Drawing::Point(751, 250);
			this->comboBox17->Name = L"comboBox17";
			this->comboBox17->Size = System::Drawing::Size(111, 23);
			this->comboBox17->TabIndex = 147;
			this->comboBox17->Text = L"  Select the Quantity";
			// 
			// comboBox19
			// 
			this->comboBox19->BackColor = System::Drawing::Color::Azure;
			this->comboBox19->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox19->FormattingEnabled = true;
			this->comboBox19->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox19->Location = System::Drawing::Point(751, 206);
			this->comboBox19->Name = L"comboBox19";
			this->comboBox19->Size = System::Drawing::Size(111, 23);
			this->comboBox19->TabIndex = 146;
			this->comboBox19->Text = L"  Select the Quantity";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->BackColor = System::Drawing::Color::Transparent;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label76->Location = System::Drawing::Point(200, 390);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(41, 20);
			this->label76->TabIndex = 145;
			this->label76->Text = L"S05";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::Transparent;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label75->Location = System::Drawing::Point(200, 351);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(41, 20);
			this->label75->TabIndex = 144;
			this->label75->Text = L"S04";
			this->label75->Click += gcnew System::EventHandler(this, &MyForm::Label75_Click);
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->BackColor = System::Drawing::Color::Transparent;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label83->Location = System::Drawing::Point(200, 305);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(41, 20);
			this->label83->TabIndex = 143;
			this->label83->Text = L"S03";
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->BackColor = System::Drawing::Color::Transparent;
			this->label129->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label129->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label129->Location = System::Drawing::Point(200, 255);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(41, 20);
			this->label129->TabIndex = 142;
			this->label129->Text = L"S02";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(907, 387);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 141;
			this->button14->Text = L"Add";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button14_Click_1);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(907, 348);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 140;
			this->button15->Text = L"Add";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(907, 305);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 139;
			this->button16->Text = L"Add";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(907, 253);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 138;
			this->button17->Text = L"Add";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(907, 203);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 137;
			this->button18->Text = L"Add";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::Button18_Click);
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label74->Location = System::Drawing::Point(505, 55);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(167, 31);
			this->label74->TabIndex = 134;
			this->label74->Text = L"Soups Menu\r\n";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->BackColor = System::Drawing::Color::Transparent;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label78->Location = System::Drawing::Point(633, 345);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(39, 20);
			this->label78->TabIndex = 118;
			this->label78->Text = L"665";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->BackColor = System::Drawing::Color::Transparent;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label79->Location = System::Drawing::Point(633, 384);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(39, 20);
			this->label79->TabIndex = 117;
			this->label79->Text = L"665";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->BackColor = System::Drawing::Color::Transparent;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label81->Location = System::Drawing::Point(335, 345);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(191, 20);
			this->label81->TabIndex = 115;
			this->label81->Text = L"Chicken Corn Chowder";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->BackColor = System::Drawing::Color::Transparent;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label82->Location = System::Drawing::Point(335, 384);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(127, 20);
			this->label82->TabIndex = 114;
			this->label82->Text = L"Won Ton Soup";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->BackColor = System::Drawing::Color::Transparent;
			this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label84->Location = System::Drawing::Point(200, 208);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(41, 20);
			this->label84->TabIndex = 112;
			this->label84->Text = L"S01";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->BackColor = System::Drawing::Color::Transparent;
			this->label86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label86->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label86->Location = System::Drawing::Point(159, 160);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(133, 29);
			this->label86->TabIndex = 110;
			this->label86->Text = L"Item Code";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->BackColor = System::Drawing::Color::Transparent;
			this->label87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label87->Location = System::Drawing::Point(633, 302);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(39, 20);
			this->label87->TabIndex = 109;
			this->label87->Text = L"650";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->BackColor = System::Drawing::Color::Transparent;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label88->Location = System::Drawing::Point(633, 209);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(39, 20);
			this->label88->TabIndex = 108;
			this->label88->Text = L"525";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->BackColor = System::Drawing::Color::Transparent;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label89->Location = System::Drawing::Point(633, 254);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(39, 20);
			this->label89->TabIndex = 107;
			this->label89->Text = L"575";
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->BackColor = System::Drawing::Color::Transparent;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label90->Location = System::Drawing::Point(612, 160);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(74, 29);
			this->label90->TabIndex = 106;
			this->label90->Text = L"Price";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(563, 474);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 47);
			this->button3->TabIndex = 105;
			this->button3->Text = L"Confirm";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->BackColor = System::Drawing::Color::Transparent;
			this->label91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label91->Location = System::Drawing::Point(335, 303);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(133, 20);
			this->label91->TabIndex = 104;
			this->label91->Text = L"Hot & Sour Soup";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->BackColor = System::Drawing::Color::Transparent;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label92->Location = System::Drawing::Point(335, 209);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(132, 20);
			this->label92->TabIndex = 100;
			this->label92->Text = L"Egg Drop Soup";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->BackColor = System::Drawing::Color::Transparent;
			this->label93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label93->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label93->Location = System::Drawing::Point(335, 254);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(179, 20);
			this->label93->TabIndex = 99;
			this->label93->Text = L"Vegetable Tofu Soup";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->BackColor = System::Drawing::Color::Transparent;
			this->label94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label94->ForeColor = System::Drawing::Color::AliceBlue;
			this->label94->Location = System::Drawing::Point(754, 160);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(108, 29);
			this->label94->TabIndex = 98;
			this->label94->Text = L"Quantity";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->BackColor = System::Drawing::Color::Transparent;
			this->label95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label95->Location = System::Drawing::Point(334, 158);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(70, 29);
			this->label95->TabIndex = 97;
			this->label95->Text = L"Item ";
			// 
			// Chicken
			// 
			this->Chicken->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Chicken.BackgroundImage")));
			this->Chicken->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Chicken->Controls->Add(this->button24);
			this->Chicken->Controls->Add(this->button25);
			this->Chicken->Controls->Add(this->button26);
			this->Chicken->Controls->Add(this->button27);
			this->Chicken->Controls->Add(this->button19);
			this->Chicken->Controls->Add(this->button20);
			this->Chicken->Controls->Add(this->button21);
			this->Chicken->Controls->Add(this->button22);
			this->Chicken->Controls->Add(this->button23);
			this->Chicken->Controls->Add(this->label73);
			this->Chicken->Controls->Add(this->comboBox4);
			this->Chicken->Controls->Add(this->comboBox5);
			this->Chicken->Controls->Add(this->comboBox6);
			this->Chicken->Controls->Add(this->comboBox7);
			this->Chicken->Controls->Add(this->comboBox8);
			this->Chicken->Controls->Add(this->comboBox9);
			this->Chicken->Controls->Add(this->label8);
			this->Chicken->Controls->Add(this->label9);
			this->Chicken->Controls->Add(this->label10);
			this->Chicken->Controls->Add(this->label11);
			this->Chicken->Controls->Add(this->label12);
			this->Chicken->Controls->Add(this->label13);
			this->Chicken->Controls->Add(this->label14);
			this->Chicken->Controls->Add(this->label15);
			this->Chicken->Controls->Add(this->label16);
			this->Chicken->Controls->Add(this->label21);
			this->Chicken->Controls->Add(this->label22);
			this->Chicken->Controls->Add(this->label23);
			this->Chicken->Controls->Add(this->label24);
			this->Chicken->Controls->Add(this->label25);
			this->Chicken->Controls->Add(this->label26);
			this->Chicken->Controls->Add(this->label27);
			this->Chicken->Controls->Add(this->label28);
			this->Chicken->Controls->Add(this->label29);
			this->Chicken->Controls->Add(this->label30);
			this->Chicken->Controls->Add(this->label31);
			this->Chicken->Controls->Add(this->label32);
			this->Chicken->Controls->Add(this->label33);
			this->Chicken->Controls->Add(this->label34);
			this->Chicken->Controls->Add(this->label35);
			this->Chicken->Controls->Add(this->label36);
			this->Chicken->Controls->Add(this->label37);
			this->Chicken->Controls->Add(this->button2);
			this->Chicken->Controls->Add(this->label38);
			this->Chicken->Controls->Add(this->comboBox10);
			this->Chicken->Controls->Add(this->comboBox11);
			this->Chicken->Controls->Add(this->comboBox12);
			this->Chicken->Controls->Add(this->label39);
			this->Chicken->Controls->Add(this->label40);
			this->Chicken->Controls->Add(this->label41);
			this->Chicken->Controls->Add(this->label42);
			this->Chicken->Location = System::Drawing::Point(4, 22);
			this->Chicken->Name = L"Chicken";
			this->Chicken->Padding = System::Windows::Forms::Padding(3);
			this->Chicken->Size = System::Drawing::Size(1208, 600);
			this->Chicken->TabIndex = 1;
			this->Chicken->Text = L"Chicken";
			this->Chicken->UseVisualStyleBackColor = true;
			this->Chicken->Click += gcnew System::EventHandler(this, &MyForm::Chicken_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(914, 448);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 23);
			this->button24->TabIndex = 150;
			this->button24->Text = L"Add";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::Button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(914, 412);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 23);
			this->button25->TabIndex = 149;
			this->button25->Text = L"Add";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::Button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(914, 375);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 23);
			this->button26->TabIndex = 148;
			this->button26->Text = L"Add";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::Button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(914, 339);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 23);
			this->button27->TabIndex = 147;
			this->button27->Text = L"Add";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::Button27_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(914, 301);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 146;
			this->button19->Text = L"Add";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::Button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(914, 269);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 145;
			this->button20->Text = L"Add";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::Button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(914, 235);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 144;
			this->button21->Text = L"Add";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::Button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(914, 201);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 143;
			this->button22->Text = L"Add";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::Button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(914, 165);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 142;
			this->button23->Text = L"Add";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::Button23_Click);
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::Transparent;
			this->label73->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label73->ForeColor = System::Drawing::Color::AliceBlue;
			this->label73->Location = System::Drawing::Point(461, 49);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(197, 31);
			this->label73->TabIndex = 138;
			this->label73->Text = L"Chicken Menu";
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::Azure;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox4->Location = System::Drawing::Point(758, 448);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(111, 23);
			this->comboBox4->TabIndex = 137;
			this->comboBox4->Text = L"  Select the Quantity";
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::Azure;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox5->Location = System::Drawing::Point(758, 412);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(111, 23);
			this->comboBox5->TabIndex = 136;
			this->comboBox5->Text = L"  Select the Quantity";
			// 
			// comboBox6
			// 
			this->comboBox6->BackColor = System::Drawing::Color::Azure;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox6->Location = System::Drawing::Point(758, 372);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(111, 23);
			this->comboBox6->TabIndex = 135;
			this->comboBox6->Text = L"  Select the Quantity";
			// 
			// comboBox7
			// 
			this->comboBox7->BackColor = System::Drawing::Color::Azure;
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox7->Location = System::Drawing::Point(758, 336);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(111, 23);
			this->comboBox7->TabIndex = 134;
			this->comboBox7->Text = L"  Select the Quantity";
			// 
			// comboBox8
			// 
			this->comboBox8->BackColor = System::Drawing::Color::Azure;
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox8->Location = System::Drawing::Point(758, 302);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(111, 23);
			this->comboBox8->TabIndex = 133;
			this->comboBox8->Text = L"  Select the Quantity";
			// 
			// comboBox9
			// 
			this->comboBox9->BackColor = System::Drawing::Color::Azure;
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox9->Location = System::Drawing::Point(758, 270);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(111, 23);
			this->comboBox9->TabIndex = 132;
			this->comboBox9->Text = L"  Select the Quantity";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::AliceBlue;
			this->label8->Location = System::Drawing::Point(175, 448);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 20);
			this->label8->TabIndex = 131;
			this->label8->Text = L"Ck09";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::AliceBlue;
			this->label9->Location = System::Drawing::Point(175, 375);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 20);
			this->label9->TabIndex = 130;
			this->label9->Text = L"Ck07";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::AliceBlue;
			this->label10->Location = System::Drawing::Point(175, 414);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 20);
			this->label10->TabIndex = 129;
			this->label10->Text = L"Ck08";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::AliceBlue;
			this->label11->Location = System::Drawing::Point(626, 448);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 20);
			this->label11->TabIndex = 128;
			this->label11->Text = L"1425";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::AliceBlue;
			this->label12->Location = System::Drawing::Point(626, 376);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 20);
			this->label12->TabIndex = 127;
			this->label12->Text = L"1025";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::AliceBlue;
			this->label13->Location = System::Drawing::Point(626, 415);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 20);
			this->label13->TabIndex = 126;
			this->label13->Text = L"1325";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::AliceBlue;
			this->label14->Location = System::Drawing::Point(328, 449);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(161, 20);
			this->label14->TabIndex = 125;
			this->label14->Text = L"Chicken Munchurin";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::AliceBlue;
			this->label15->Location = System::Drawing::Point(328, 376);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(179, 20);
			this->label15->TabIndex = 124;
			this->label15->Text = L"Chicken Handi(white)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::AliceBlue;
			this->label16->Location = System::Drawing::Point(328, 415);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(125, 20);
			this->label16->TabIndex = 123;
			this->label16->Text = L"Chicken Handi";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::Label16_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::AliceBlue;
			this->label21->Location = System::Drawing::Point(175, 339);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(50, 20);
			this->label21->TabIndex = 122;
			this->label21->Text = L"Ck06";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::AliceBlue;
			this->label22->Location = System::Drawing::Point(175, 269);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(50, 20);
			this->label22->TabIndex = 121;
			this->label22->Text = L"Ck04";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::AliceBlue;
			this->label23->Location = System::Drawing::Point(175, 303);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(50, 20);
			this->label23->TabIndex = 120;
			this->label23->Text = L"Ck05";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::AliceBlue;
			this->label24->Location = System::Drawing::Point(626, 339);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(49, 20);
			this->label24->TabIndex = 119;
			this->label24->Text = L"1425";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::AliceBlue;
			this->label25->Location = System::Drawing::Point(626, 269);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(49, 20);
			this->label25->TabIndex = 118;
			this->label25->Text = L"1825";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::AliceBlue;
			this->label26->Location = System::Drawing::Point(626, 304);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(49, 20);
			this->label26->TabIndex = 117;
			this->label26->Text = L"1495";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::AliceBlue;
			this->label27->Location = System::Drawing::Point(328, 340);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(132, 20);
			this->label27->TabIndex = 116;
			this->label27->Text = L"Chicken Ginger";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::AliceBlue;
			this->label28->Location = System::Drawing::Point(328, 269);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(129, 20);
			this->label28->TabIndex = 115;
			this->label28->Text = L"Chicken Achari";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::AliceBlue;
			this->label29->Location = System::Drawing::Point(328, 304);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(128, 20);
			this->label29->TabIndex = 114;
			this->label29->Text = L"Green Chicken";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::AliceBlue;
			this->label30->Location = System::Drawing::Point(175, 235);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(50, 20);
			this->label30->TabIndex = 113;
			this->label30->Text = L"Ck03";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::AliceBlue;
			this->label31->Location = System::Drawing::Point(175, 165);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(50, 20);
			this->label31->TabIndex = 112;
			this->label31->Text = L"Ck01";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::AliceBlue;
			this->label32->Location = System::Drawing::Point(175, 200);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(50, 20);
			this->label32->TabIndex = 111;
			this->label32->Text = L"Ck02";
			this->label32->Click += gcnew System::EventHandler(this, &MyForm::Label32_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::AliceBlue;
			this->label33->Location = System::Drawing::Point(142, 118);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(118, 25);
			this->label33->TabIndex = 110;
			this->label33->Text = L"Item Code";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::AliceBlue;
			this->label34->Location = System::Drawing::Point(626, 235);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(49, 20);
			this->label34->TabIndex = 109;
			this->label34->Text = L"1325";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::AliceBlue;
			this->label35->Location = System::Drawing::Point(626, 166);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(49, 20);
			this->label35->TabIndex = 108;
			this->label35->Text = L"1280";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::AliceBlue;
			this->label36->Location = System::Drawing::Point(626, 200);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(49, 20);
			this->label36->TabIndex = 107;
			this->label36->Text = L"1125";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::AliceBlue;
			this->label37->Location = System::Drawing::Point(625, 113);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(74, 29);
			this->label37->TabIndex = 106;
			this->label37->Text = L"Price";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::AliceBlue;
			this->label38->Location = System::Drawing::Point(328, 235);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(127, 20);
			this->label38->TabIndex = 104;
			this->label38->Text = L"Chicken karahi";
			// 
			// comboBox10
			// 
			this->comboBox10->BackColor = System::Drawing::Color::Azure;
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox10->Location = System::Drawing::Point(758, 202);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(111, 23);
			this->comboBox10->TabIndex = 103;
			this->comboBox10->Text = L"  Select the Quantity";
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox10_SelectedIndexChanged);
			// 
			// comboBox11
			// 
			this->comboBox11->BackColor = System::Drawing::Color::Azure;
			this->comboBox11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox11->Location = System::Drawing::Point(758, 236);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(111, 23);
			this->comboBox11->TabIndex = 102;
			this->comboBox11->Text = L"  Select the Quantity";
			// 
			// comboBox12
			// 
			this->comboBox12->BackColor = System::Drawing::Color::Azure;
			this->comboBox12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox12->Location = System::Drawing::Point(758, 167);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(111, 23);
			this->comboBox12->TabIndex = 101;
			this->comboBox12->Text = L"  Select the Quantity";
			this->comboBox12->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox12_SelectedIndexChanged);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::AliceBlue;
			this->label39->Location = System::Drawing::Point(328, 166);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(232, 20);
			this->label39->TabIndex = 100;
			this->label39->Text = L"Fire Grilled Teriyaki Chicken";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::AliceBlue;
			this->label40->Location = System::Drawing::Point(328, 200);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(224, 20);
			this->label40->TabIndex = 99;
			this->label40->Text = L"Garlic Chicken(white meat)";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::AliceBlue;
			this->label41->Location = System::Drawing::Point(753, 115);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(108, 29);
			this->label41->TabIndex = 98;
			this->label41->Text = L"Quantity";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::AliceBlue;
			this->label42->Location = System::Drawing::Point(327, 115);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(70, 29);
			this->label42->TabIndex = 97;
			this->label42->Text = L"Item ";
			// 
			// Beef
			// 
			this->Beef->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Beef.BackgroundImage")));
			this->Beef->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Beef->Controls->Add(this->button51);
			this->Beef->Controls->Add(this->button52);
			this->Beef->Controls->Add(this->button53);
			this->Beef->Controls->Add(this->button55);
			this->Beef->Controls->Add(this->button57);
			this->Beef->Controls->Add(this->button59);
			this->Beef->Controls->Add(this->label72);
			this->Beef->Controls->Add(this->comboBox31);
			this->Beef->Controls->Add(this->comboBox32);
			this->Beef->Controls->Add(this->comboBox33);
			this->Beef->Controls->Add(this->label105);
			this->Beef->Controls->Add(this->label106);
			this->Beef->Controls->Add(this->label107);
			this->Beef->Controls->Add(this->label108);
			this->Beef->Controls->Add(this->label109);
			this->Beef->Controls->Add(this->label110);
			this->Beef->Controls->Add(this->label111);
			this->Beef->Controls->Add(this->label112);
			this->Beef->Controls->Add(this->label113);
			this->Beef->Controls->Add(this->label114);
			this->Beef->Controls->Add(this->label115);
			this->Beef->Controls->Add(this->label116);
			this->Beef->Controls->Add(this->label117);
			this->Beef->Controls->Add(this->label118);
			this->Beef->Controls->Add(this->label119);
			this->Beef->Controls->Add(this->label120);
			this->Beef->Controls->Add(this->label121);
			this->Beef->Controls->Add(this->button4);
			this->Beef->Controls->Add(this->label122);
			this->Beef->Controls->Add(this->comboBox34);
			this->Beef->Controls->Add(this->comboBox35);
			this->Beef->Controls->Add(this->comboBox36);
			this->Beef->Controls->Add(this->label123);
			this->Beef->Controls->Add(this->label124);
			this->Beef->Controls->Add(this->label125);
			this->Beef->Controls->Add(this->label126);
			this->Beef->Location = System::Drawing::Point(4, 22);
			this->Beef->Name = L"Beef";
			this->Beef->Padding = System::Windows::Forms::Padding(3);
			this->Beef->Size = System::Drawing::Size(1208, 600);
			this->Beef->TabIndex = 4;
			this->Beef->Text = L"Beef";
			this->Beef->UseVisualStyleBackColor = true;
			this->Beef->Click += gcnew System::EventHandler(this, &MyForm::Beef_Click);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(874, 406);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(75, 23);
			this->button51->TabIndex = 159;
			this->button51->Text = L"Add";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::Button51_Click);
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(874, 364);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(75, 23);
			this->button52->TabIndex = 158;
			this->button52->Text = L"Add";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::Button52_Click);
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(874, 325);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(75, 23);
			this->button53->TabIndex = 157;
			this->button53->Text = L"Add";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::Button53_Click);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(874, 285);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(75, 23);
			this->button55->TabIndex = 155;
			this->button55->Text = L"Add";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::Button55_Click);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(874, 238);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(75, 23);
			this->button57->TabIndex = 153;
			this->button57->Text = L"Add";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::Button57_Click);
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(874, 192);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(75, 23);
			this->button59->TabIndex = 151;
			this->button59->Text = L"Add";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::Button59_Click);
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::Color::Transparent;
			this->label72->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label72->ForeColor = System::Drawing::Color::AliceBlue;
			this->label72->Location = System::Drawing::Point(482, 55);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(154, 31);
			this->label72->TabIndex = 135;
			this->label72->Text = L"Beef Menu";
			// 
			// comboBox31
			// 
			this->comboBox31->BackColor = System::Drawing::Color::Azure;
			this->comboBox31->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox31->FormattingEnabled = true;
			this->comboBox31->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox31->Location = System::Drawing::Point(717, 406);
			this->comboBox31->Name = L"comboBox31";
			this->comboBox31->Size = System::Drawing::Size(111, 23);
			this->comboBox31->TabIndex = 134;
			this->comboBox31->Text = L"  Select the Quantity";
			// 
			// comboBox32
			// 
			this->comboBox32->BackColor = System::Drawing::Color::Azure;
			this->comboBox32->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox32->FormattingEnabled = true;
			this->comboBox32->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox32->Location = System::Drawing::Point(717, 364);
			this->comboBox32->Name = L"comboBox32";
			this->comboBox32->Size = System::Drawing::Size(111, 23);
			this->comboBox32->TabIndex = 133;
			this->comboBox32->Text = L"  Select the Quantity";
			// 
			// comboBox33
			// 
			this->comboBox33->BackColor = System::Drawing::Color::Azure;
			this->comboBox33->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox33->FormattingEnabled = true;
			this->comboBox33->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox33->Location = System::Drawing::Point(717, 329);
			this->comboBox33->Name = L"comboBox33";
			this->comboBox33->Size = System::Drawing::Size(111, 23);
			this->comboBox33->TabIndex = 132;
			this->comboBox33->Text = L"  Select the Quantity";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->BackColor = System::Drawing::Color::Transparent;
			this->label105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label105->ForeColor = System::Drawing::Color::AliceBlue;
			this->label105->Location = System::Drawing::Point(186, 410);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(47, 20);
			this->label105->TabIndex = 122;
			this->label105->Text = L"Bf06";
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->BackColor = System::Drawing::Color::Transparent;
			this->label106->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label106->ForeColor = System::Drawing::Color::AliceBlue;
			this->label106->Location = System::Drawing::Point(186, 328);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(47, 20);
			this->label106->TabIndex = 121;
			this->label106->Text = L"Bf04";
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->BackColor = System::Drawing::Color::Transparent;
			this->label107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label107->ForeColor = System::Drawing::Color::AliceBlue;
			this->label107->Location = System::Drawing::Point(186, 367);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(47, 20);
			this->label107->TabIndex = 120;
			this->label107->Text = L"Bf05";
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->BackColor = System::Drawing::Color::Transparent;
			this->label108->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label108->ForeColor = System::Drawing::Color::AliceBlue;
			this->label108->Location = System::Drawing::Point(591, 409);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(49, 20);
			this->label108->TabIndex = 119;
			this->label108->Text = L"1825";
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->BackColor = System::Drawing::Color::Transparent;
			this->label109->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label109->ForeColor = System::Drawing::Color::AliceBlue;
			this->label109->Location = System::Drawing::Point(591, 328);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(49, 20);
			this->label109->TabIndex = 118;
			this->label109->Text = L"1425";
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->BackColor = System::Drawing::Color::Transparent;
			this->label110->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label110->ForeColor = System::Drawing::Color::AliceBlue;
			this->label110->Location = System::Drawing::Point(591, 367);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(49, 20);
			this->label110->TabIndex = 117;
			this->label110->Text = L"1325";
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->BackColor = System::Drawing::Color::Transparent;
			this->label111->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label111->ForeColor = System::Drawing::Color::AliceBlue;
			this->label111->Location = System::Drawing::Point(321, 411);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(89, 20);
			this->label111->TabIndex = 116;
			this->label111->Text = L"Beef BBQ";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->BackColor = System::Drawing::Color::Transparent;
			this->label112->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label112->ForeColor = System::Drawing::Color::AliceBlue;
			this->label112->Location = System::Drawing::Point(321, 329);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(94, 20);
			this->label112->TabIndex = 115;
			this->label112->Text = L"Beef Rosh";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->BackColor = System::Drawing::Color::Transparent;
			this->label113->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label113->ForeColor = System::Drawing::Color::AliceBlue;
			this->label113->Location = System::Drawing::Point(321, 368);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(124, 20);
			this->label113->TabIndex = 114;
			this->label113->Text = L"Beef Dumpukt";
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->BackColor = System::Drawing::Color::Transparent;
			this->label114->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label114->ForeColor = System::Drawing::Color::AliceBlue;
			this->label114->Location = System::Drawing::Point(186, 286);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(47, 20);
			this->label114->TabIndex = 113;
			this->label114->Text = L"Bf03";
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->BackColor = System::Drawing::Color::Transparent;
			this->label115->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label115->ForeColor = System::Drawing::Color::AliceBlue;
			this->label115->Location = System::Drawing::Point(186, 192);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(47, 20);
			this->label115->TabIndex = 112;
			this->label115->Text = L"Bf01";
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->BackColor = System::Drawing::Color::Transparent;
			this->label116->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label116->ForeColor = System::Drawing::Color::AliceBlue;
			this->label116->Location = System::Drawing::Point(186, 237);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(47, 20);
			this->label116->TabIndex = 111;
			this->label116->Text = L"Bf02";
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->BackColor = System::Drawing::Color::Transparent;
			this->label117->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label117->ForeColor = System::Drawing::Color::AliceBlue;
			this->label117->Location = System::Drawing::Point(132, 139);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(133, 29);
			this->label117->TabIndex = 110;
			this->label117->Text = L"Item Code";
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->BackColor = System::Drawing::Color::Transparent;
			this->label118->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label118->ForeColor = System::Drawing::Color::AliceBlue;
			this->label118->Location = System::Drawing::Point(591, 285);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(49, 20);
			this->label118->TabIndex = 109;
			this->label118->Text = L"1125";
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->BackColor = System::Drawing::Color::Transparent;
			this->label119->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label119->ForeColor = System::Drawing::Color::AliceBlue;
			this->label119->Location = System::Drawing::Point(591, 192);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(49, 20);
			this->label119->TabIndex = 108;
			this->label119->Text = L"1280";
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->BackColor = System::Drawing::Color::Transparent;
			this->label120->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label120->ForeColor = System::Drawing::Color::AliceBlue;
			this->label120->Location = System::Drawing::Point(591, 237);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(49, 20);
			this->label120->TabIndex = 107;
			this->label120->Text = L"1335";
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->BackColor = System::Drawing::Color::Transparent;
			this->label121->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label121->ForeColor = System::Drawing::Color::AliceBlue;
			this->label121->Location = System::Drawing::Point(590, 139);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(74, 29);
			this->label121->TabIndex = 106;
			this->label121->Text = L"Price";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(555, 492);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 47);
			this->button4->TabIndex = 105;
			this->button4->Text = L"Confirm";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->BackColor = System::Drawing::Color::Transparent;
			this->label122->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label122->ForeColor = System::Drawing::Color::AliceBlue;
			this->label122->Location = System::Drawing::Point(321, 287);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(103, 20);
			this->label122->TabIndex = 104;
			this->label122->Text = L"Beef Karahi";
			// 
			// comboBox34
			// 
			this->comboBox34->BackColor = System::Drawing::Color::Azure;
			this->comboBox34->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox34->FormattingEnabled = true;
			this->comboBox34->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox34->Location = System::Drawing::Point(717, 239);
			this->comboBox34->Name = L"comboBox34";
			this->comboBox34->Size = System::Drawing::Size(111, 23);
			this->comboBox34->TabIndex = 103;
			this->comboBox34->Text = L"  Select the Quantity";
			// 
			// comboBox35
			// 
			this->comboBox35->BackColor = System::Drawing::Color::Azure;
			this->comboBox35->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox35->FormattingEnabled = true;
			this->comboBox35->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox35->Location = System::Drawing::Point(717, 285);
			this->comboBox35->Name = L"comboBox35";
			this->comboBox35->Size = System::Drawing::Size(111, 23);
			this->comboBox35->TabIndex = 102;
			this->comboBox35->Text = L"  Select the Quantity";
			// 
			// comboBox36
			// 
			this->comboBox36->BackColor = System::Drawing::Color::Azure;
			this->comboBox36->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox36->FormattingEnabled = true;
			this->comboBox36->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox36->Location = System::Drawing::Point(717, 191);
			this->comboBox36->Name = L"comboBox36";
			this->comboBox36->Size = System::Drawing::Size(111, 23);
			this->comboBox36->TabIndex = 101;
			this->comboBox36->Text = L"  Select the Quantity";
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->BackColor = System::Drawing::Color::Transparent;
			this->label123->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label123->ForeColor = System::Drawing::Color::AliceBlue;
			this->label123->Location = System::Drawing::Point(321, 193);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(144, 20);
			this->label123->TabIndex = 100;
			this->label123->Text = L"Monogolian Beef";
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->BackColor = System::Drawing::Color::Transparent;
			this->label124->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label124->ForeColor = System::Drawing::Color::AliceBlue;
			this->label124->Location = System::Drawing::Point(321, 238);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(112, 20);
			this->label124->TabIndex = 99;
			this->label124->Text = L"Tomato Beef";
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->BackColor = System::Drawing::Color::Transparent;
			this->label125->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label125->ForeColor = System::Drawing::Color::AliceBlue;
			this->label125->Location = System::Drawing::Point(720, 142);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(108, 29);
			this->label125->TabIndex = 98;
			this->label125->Text = L"Quantity";
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->BackColor = System::Drawing::Color::Transparent;
			this->label126->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label126->ForeColor = System::Drawing::Color::AliceBlue;
			this->label126->Location = System::Drawing::Point(320, 142);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(70, 29);
			this->label126->TabIndex = 97;
			this->label126->Text = L"Item ";
			// 
			// Vegetables
			// 
			this->Vegetables->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Vegetables.BackgroundImage")));
			this->Vegetables->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Vegetables->Controls->Add(this->comboBox20);
			this->Vegetables->Controls->Add(this->comboBox21);
			this->Vegetables->Controls->Add(this->comboBox22);
			this->Vegetables->Controls->Add(this->comboBox23);
			this->Vegetables->Controls->Add(this->comboBox24);
			this->Vegetables->Controls->Add(this->button28);
			this->Vegetables->Controls->Add(this->button29);
			this->Vegetables->Controls->Add(this->button30);
			this->Vegetables->Controls->Add(this->button31);
			this->Vegetables->Controls->Add(this->button32);
			this->Vegetables->Controls->Add(this->label71);
			this->Vegetables->Controls->Add(this->label137);
			this->Vegetables->Controls->Add(this->label138);
			this->Vegetables->Controls->Add(this->label140);
			this->Vegetables->Controls->Add(this->label141);
			this->Vegetables->Controls->Add(this->label143);
			this->Vegetables->Controls->Add(this->label144);
			this->Vegetables->Controls->Add(this->label145);
			this->Vegetables->Controls->Add(this->label146);
			this->Vegetables->Controls->Add(this->label147);
			this->Vegetables->Controls->Add(this->label148);
			this->Vegetables->Controls->Add(this->label149);
			this->Vegetables->Controls->Add(this->label150);
			this->Vegetables->Controls->Add(this->label151);
			this->Vegetables->Controls->Add(this->label152);
			this->Vegetables->Controls->Add(this->button5);
			this->Vegetables->Controls->Add(this->label153);
			this->Vegetables->Controls->Add(this->label154);
			this->Vegetables->Controls->Add(this->label155);
			this->Vegetables->Controls->Add(this->label156);
			this->Vegetables->Controls->Add(this->label157);
			this->Vegetables->Location = System::Drawing::Point(4, 22);
			this->Vegetables->Name = L"Vegetables";
			this->Vegetables->Padding = System::Windows::Forms::Padding(3);
			this->Vegetables->Size = System::Drawing::Size(1208, 600);
			this->Vegetables->TabIndex = 5;
			this->Vegetables->Text = L"Vegetables";
			this->Vegetables->UseVisualStyleBackColor = true;
			// 
			// comboBox20
			// 
			this->comboBox20->BackColor = System::Drawing::Color::Azure;
			this->comboBox20->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox20->FormattingEnabled = true;
			this->comboBox20->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox20->Location = System::Drawing::Point(708, 352);
			this->comboBox20->Name = L"comboBox20";
			this->comboBox20->Size = System::Drawing::Size(111, 23);
			this->comboBox20->TabIndex = 144;
			this->comboBox20->Text = L"  Select the Quantity";
			// 
			// comboBox21
			// 
			this->comboBox21->BackColor = System::Drawing::Color::Azure;
			this->comboBox21->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox21->FormattingEnabled = true;
			this->comboBox21->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox21->Location = System::Drawing::Point(708, 310);
			this->comboBox21->Name = L"comboBox21";
			this->comboBox21->Size = System::Drawing::Size(111, 23);
			this->comboBox21->TabIndex = 143;
			this->comboBox21->Text = L"  Select the Quantity";
			// 
			// comboBox22
			// 
			this->comboBox22->BackColor = System::Drawing::Color::Azure;
			this->comboBox22->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox22->FormattingEnabled = true;
			this->comboBox22->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox22->Location = System::Drawing::Point(708, 272);
			this->comboBox22->Name = L"comboBox22";
			this->comboBox22->Size = System::Drawing::Size(111, 23);
			this->comboBox22->TabIndex = 142;
			this->comboBox22->Text = L"  Select the Quantity";
			// 
			// comboBox23
			// 
			this->comboBox23->BackColor = System::Drawing::Color::Azure;
			this->comboBox23->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox23->FormattingEnabled = true;
			this->comboBox23->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox23->Location = System::Drawing::Point(708, 228);
			this->comboBox23->Name = L"comboBox23";
			this->comboBox23->Size = System::Drawing::Size(111, 23);
			this->comboBox23->TabIndex = 141;
			this->comboBox23->Text = L"  Select the Quantity";
			// 
			// comboBox24
			// 
			this->comboBox24->BackColor = System::Drawing::Color::Azure;
			this->comboBox24->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox24->FormattingEnabled = true;
			this->comboBox24->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox24->Location = System::Drawing::Point(708, 189);
			this->comboBox24->Name = L"comboBox24";
			this->comboBox24->Size = System::Drawing::Size(111, 23);
			this->comboBox24->TabIndex = 140;
			this->comboBox24->Text = L"  Select the Quantity";
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(881, 352);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 23);
			this->button28->TabIndex = 139;
			this->button28->Text = L"Add";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::Button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(881, 307);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 23);
			this->button29->TabIndex = 138;
			this->button29->Text = L"Add";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::Button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(881, 265);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 23);
			this->button30->TabIndex = 137;
			this->button30->Text = L"Add";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::Button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(881, 223);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(75, 23);
			this->button31->TabIndex = 136;
			this->button31->Text = L"Add";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::Button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(881, 186);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(75, 23);
			this->button32->TabIndex = 135;
			this->button32->Text = L"Add";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::Button32_Click);
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Transparent;
			this->label71->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label71->ForeColor = System::Drawing::Color::AliceBlue;
			this->label71->Location = System::Drawing::Point(411, 51);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(218, 31);
			this->label71->TabIndex = 134;
			this->label71->Text = L"Vegetable Menu\r\n";
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->BackColor = System::Drawing::Color::Transparent;
			this->label137->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label137->ForeColor = System::Drawing::Color::AliceBlue;
			this->label137->Location = System::Drawing::Point(160, 310);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(47, 20);
			this->label137->TabIndex = 121;
			this->label137->Text = L"Vt04";
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->BackColor = System::Drawing::Color::Transparent;
			this->label138->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label138->ForeColor = System::Drawing::Color::AliceBlue;
			this->label138->Location = System::Drawing::Point(160, 355);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(47, 20);
			this->label138->TabIndex = 120;
			this->label138->Text = L"Vt05";
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->BackColor = System::Drawing::Color::Transparent;
			this->label140->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label140->ForeColor = System::Drawing::Color::AliceBlue;
			this->label140->Location = System::Drawing::Point(593, 311);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(39, 20);
			this->label140->TabIndex = 118;
			this->label140->Text = L"420";
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->BackColor = System::Drawing::Color::Transparent;
			this->label141->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label141->ForeColor = System::Drawing::Color::AliceBlue;
			this->label141->Location = System::Drawing::Point(593, 356);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(39, 20);
			this->label141->TabIndex = 117;
			this->label141->Text = L"695";
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->BackColor = System::Drawing::Color::Transparent;
			this->label143->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label143->ForeColor = System::Drawing::Color::AliceBlue;
			this->label143->Location = System::Drawing::Point(295, 311);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(133, 20);
			this->label143->TabIndex = 115;
			this->label143->Text = L"Buddha Delight";
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->BackColor = System::Drawing::Color::Transparent;
			this->label144->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label144->ForeColor = System::Drawing::Color::AliceBlue;
			this->label144->Location = System::Drawing::Point(295, 356);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(150, 20);
			this->label144->TabIndex = 114;
			this->label144->Text = L"Family Bean Curd";
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->BackColor = System::Drawing::Color::Transparent;
			this->label145->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label145->ForeColor = System::Drawing::Color::AliceBlue;
			this->label145->Location = System::Drawing::Point(160, 271);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(47, 20);
			this->label145->TabIndex = 113;
			this->label145->Text = L"Vt03";
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->BackColor = System::Drawing::Color::Transparent;
			this->label146->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label146->ForeColor = System::Drawing::Color::AliceBlue;
			this->label146->Location = System::Drawing::Point(160, 189);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(47, 20);
			this->label146->TabIndex = 112;
			this->label146->Text = L"Vt01";
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->BackColor = System::Drawing::Color::Transparent;
			this->label147->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label147->ForeColor = System::Drawing::Color::AliceBlue;
			this->label147->Location = System::Drawing::Point(160, 228);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(47, 20);
			this->label147->TabIndex = 111;
			this->label147->Text = L"Vt02";
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->BackColor = System::Drawing::Color::Transparent;
			this->label148->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label148->ForeColor = System::Drawing::Color::AliceBlue;
			this->label148->Location = System::Drawing::Point(115, 139);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(133, 29);
			this->label148->TabIndex = 110;
			this->label148->Text = L"Item Code";
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->BackColor = System::Drawing::Color::Transparent;
			this->label149->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label149->ForeColor = System::Drawing::Color::AliceBlue;
			this->label149->Location = System::Drawing::Point(593, 271);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(39, 20);
			this->label149->TabIndex = 109;
			this->label149->Text = L"520";
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->BackColor = System::Drawing::Color::Transparent;
			this->label150->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label150->ForeColor = System::Drawing::Color::AliceBlue;
			this->label150->Location = System::Drawing::Point(593, 190);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(39, 20);
			this->label150->TabIndex = 108;
			this->label150->Text = L"380";
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->BackColor = System::Drawing::Color::Transparent;
			this->label151->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label151->ForeColor = System::Drawing::Color::AliceBlue;
			this->label151->Location = System::Drawing::Point(593, 229);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(39, 20);
			this->label151->TabIndex = 107;
			this->label151->Text = L"425";
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->BackColor = System::Drawing::Color::Transparent;
			this->label152->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label152->ForeColor = System::Drawing::Color::AliceBlue;
			this->label152->Location = System::Drawing::Point(579, 139);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(74, 29);
			this->label152->TabIndex = 106;
			this->label152->Text = L"Price";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(544, 453);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 47);
			this->button5->TabIndex = 105;
			this->button5->Text = L"Confirm";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->BackColor = System::Drawing::Color::Transparent;
			this->label153->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label153->ForeColor = System::Drawing::Color::AliceBlue;
			this->label153->Location = System::Drawing::Point(295, 272);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(191, 20);
			this->label153->TabIndex = 104;
			this->label153->Text = L"Snow Peas & Mushroom";
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->BackColor = System::Drawing::Color::Transparent;
			this->label154->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label154->ForeColor = System::Drawing::Color::AliceBlue;
			this->label154->Location = System::Drawing::Point(295, 190);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(122, 20);
			this->label154->TabIndex = 100;
			this->label154->Text = L"Mix Vegetable";
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->BackColor = System::Drawing::Color::Transparent;
			this->label155->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label155->ForeColor = System::Drawing::Color::AliceBlue;
			this->label155->Location = System::Drawing::Point(295, 229);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(138, 20);
			this->label155->TabIndex = 99;
			this->label155->Text = L"Curry Vegetable";
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->BackColor = System::Drawing::Color::Transparent;
			this->label156->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label156->ForeColor = System::Drawing::Color::AliceBlue;
			this->label156->Location = System::Drawing::Point(703, 139);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(108, 29);
			this->label156->TabIndex = 98;
			this->label156->Text = L"Quantity";
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->BackColor = System::Drawing::Color::Transparent;
			this->label157->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label157->ForeColor = System::Drawing::Color::AliceBlue;
			this->label157->Location = System::Drawing::Point(317, 139);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(70, 29);
			this->label157->TabIndex = 97;
			this->label157->Text = L"Item ";
			// 
			// Drinks
			// 
			this->Drinks->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Drinks.BackgroundImage")));
			this->Drinks->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Drinks->Controls->Add(this->button33);
			this->Drinks->Controls->Add(this->button34);
			this->Drinks->Controls->Add(this->button35);
			this->Drinks->Controls->Add(this->button36);
			this->Drinks->Controls->Add(this->button37);
			this->Drinks->Controls->Add(this->button38);
			this->Drinks->Controls->Add(this->button39);
			this->Drinks->Controls->Add(this->button40);
			this->Drinks->Controls->Add(this->button41);
			this->Drinks->Controls->Add(this->label70);
			this->Drinks->Controls->Add(this->comboBox46);
			this->Drinks->Controls->Add(this->comboBox47);
			this->Drinks->Controls->Add(this->comboBox48);
			this->Drinks->Controls->Add(this->comboBox49);
			this->Drinks->Controls->Add(this->comboBox50);
			this->Drinks->Controls->Add(this->comboBox51);
			this->Drinks->Controls->Add(this->label158);
			this->Drinks->Controls->Add(this->label159);
			this->Drinks->Controls->Add(this->label160);
			this->Drinks->Controls->Add(this->label161);
			this->Drinks->Controls->Add(this->label162);
			this->Drinks->Controls->Add(this->label163);
			this->Drinks->Controls->Add(this->label164);
			this->Drinks->Controls->Add(this->label165);
			this->Drinks->Controls->Add(this->label166);
			this->Drinks->Controls->Add(this->label167);
			this->Drinks->Controls->Add(this->label168);
			this->Drinks->Controls->Add(this->label169);
			this->Drinks->Controls->Add(this->label170);
			this->Drinks->Controls->Add(this->label171);
			this->Drinks->Controls->Add(this->label172);
			this->Drinks->Controls->Add(this->label173);
			this->Drinks->Controls->Add(this->label174);
			this->Drinks->Controls->Add(this->label175);
			this->Drinks->Controls->Add(this->label176);
			this->Drinks->Controls->Add(this->label177);
			this->Drinks->Controls->Add(this->label178);
			this->Drinks->Controls->Add(this->label179);
			this->Drinks->Controls->Add(this->label180);
			this->Drinks->Controls->Add(this->label181);
			this->Drinks->Controls->Add(this->label182);
			this->Drinks->Controls->Add(this->label183);
			this->Drinks->Controls->Add(this->button6);
			this->Drinks->Controls->Add(this->label184);
			this->Drinks->Controls->Add(this->comboBox52);
			this->Drinks->Controls->Add(this->comboBox53);
			this->Drinks->Controls->Add(this->comboBox54);
			this->Drinks->Controls->Add(this->label185);
			this->Drinks->Controls->Add(this->label186);
			this->Drinks->Controls->Add(this->label187);
			this->Drinks->Controls->Add(this->label188);
			this->Drinks->Location = System::Drawing::Point(4, 22);
			this->Drinks->Name = L"Drinks";
			this->Drinks->Padding = System::Windows::Forms::Padding(3);
			this->Drinks->Size = System::Drawing::Size(1208, 600);
			this->Drinks->TabIndex = 6;
			this->Drinks->Text = L"Drinks";
			this->Drinks->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(852, 448);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 23);
			this->button33->TabIndex = 159;
			this->button33->Text = L"Add";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::Button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(852, 407);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 23);
			this->button34->TabIndex = 158;
			this->button34->Text = L"Add";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::Button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(852, 366);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(75, 23);
			this->button35->TabIndex = 157;
			this->button35->Text = L"Add";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::Button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(852, 331);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(75, 23);
			this->button36->TabIndex = 156;
			this->button36->Text = L"Add";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::Button36_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(852, 290);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(75, 23);
			this->button37->TabIndex = 155;
			this->button37->Text = L"Add";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::Button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(852, 254);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(75, 23);
			this->button38->TabIndex = 154;
			this->button38->Text = L"Add";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::Button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(852, 217);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(75, 23);
			this->button39->TabIndex = 153;
			this->button39->Text = L"Add";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::Button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(852, 180);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(75, 23);
			this->button40->TabIndex = 152;
			this->button40->Text = L"Add";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::Button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(852, 141);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(75, 23);
			this->button41->TabIndex = 151;
			this->button41->Text = L"Add";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::Button41_Click);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label70->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label70->Location = System::Drawing::Point(381, 29);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(231, 38);
			this->label70->TabIndex = 146;
			this->label70->Text = L"Drinks Menu";
			// 
			// comboBox46
			// 
			this->comboBox46->BackColor = System::Drawing::Color::Azure;
			this->comboBox46->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox46->FormattingEnabled = true;
			this->comboBox46->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox46->Location = System::Drawing::Point(689, 446);
			this->comboBox46->Name = L"comboBox46";
			this->comboBox46->Size = System::Drawing::Size(111, 23);
			this->comboBox46->TabIndex = 137;
			this->comboBox46->Text = L"  Select the Quantity";
			// 
			// comboBox47
			// 
			this->comboBox47->BackColor = System::Drawing::Color::Azure;
			this->comboBox47->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox47->FormattingEnabled = true;
			this->comboBox47->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox47->Location = System::Drawing::Point(689, 408);
			this->comboBox47->Name = L"comboBox47";
			this->comboBox47->Size = System::Drawing::Size(111, 23);
			this->comboBox47->TabIndex = 136;
			this->comboBox47->Text = L"  Select the Quantity";
			// 
			// comboBox48
			// 
			this->comboBox48->BackColor = System::Drawing::Color::Azure;
			this->comboBox48->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox48->FormattingEnabled = true;
			this->comboBox48->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox48->Location = System::Drawing::Point(689, 371);
			this->comboBox48->Name = L"comboBox48";
			this->comboBox48->Size = System::Drawing::Size(111, 23);
			this->comboBox48->TabIndex = 135;
			this->comboBox48->Text = L"  Select the Quantity";
			// 
			// comboBox49
			// 
			this->comboBox49->BackColor = System::Drawing::Color::Azure;
			this->comboBox49->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox49->FormattingEnabled = true;
			this->comboBox49->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox49->Location = System::Drawing::Point(689, 331);
			this->comboBox49->Name = L"comboBox49";
			this->comboBox49->Size = System::Drawing::Size(111, 23);
			this->comboBox49->TabIndex = 134;
			this->comboBox49->Text = L"  Select the Quantity";
			// 
			// comboBox50
			// 
			this->comboBox50->BackColor = System::Drawing::Color::Azure;
			this->comboBox50->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox50->FormattingEnabled = true;
			this->comboBox50->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox50->Location = System::Drawing::Point(689, 291);
			this->comboBox50->Name = L"comboBox50";
			this->comboBox50->Size = System::Drawing::Size(111, 23);
			this->comboBox50->TabIndex = 133;
			this->comboBox50->Text = L"  Select the Quantity";
			// 
			// comboBox51
			// 
			this->comboBox51->BackColor = System::Drawing::Color::Azure;
			this->comboBox51->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox51->FormattingEnabled = true;
			this->comboBox51->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox51->Location = System::Drawing::Point(689, 257);
			this->comboBox51->Name = L"comboBox51";
			this->comboBox51->Size = System::Drawing::Size(111, 23);
			this->comboBox51->TabIndex = 132;
			this->comboBox51->Text = L"  Select the Quantity";
			// 
			// label158
			// 
			this->label158->AutoSize = true;
			this->label158->BackColor = System::Drawing::Color::Transparent;
			this->label158->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label158->ForeColor = System::Drawing::Color::LightCyan;
			this->label158->Location = System::Drawing::Point(117, 448);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(51, 20);
			this->label158->TabIndex = 131;
			this->label158->Text = L"Dk09";
			// 
			// label159
			// 
			this->label159->AutoSize = true;
			this->label159->BackColor = System::Drawing::Color::Transparent;
			this->label159->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label159->ForeColor = System::Drawing::Color::LightCyan;
			this->label159->Location = System::Drawing::Point(119, 369);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(51, 20);
			this->label159->TabIndex = 130;
			this->label159->Text = L"Dk07";
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->BackColor = System::Drawing::Color::Transparent;
			this->label160->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label160->ForeColor = System::Drawing::Color::LightCyan;
			this->label160->Location = System::Drawing::Point(117, 410);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(51, 20);
			this->label160->TabIndex = 129;
			this->label160->Text = L"Dk08";
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->BackColor = System::Drawing::Color::Transparent;
			this->label161->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label161->ForeColor = System::Drawing::Color::LightCyan;
			this->label161->Location = System::Drawing::Point(563, 449);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(39, 20);
			this->label161->TabIndex = 128;
			this->label161->Text = L"100";
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->BackColor = System::Drawing::Color::Transparent;
			this->label162->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label162->ForeColor = System::Drawing::Color::LightCyan;
			this->label162->Location = System::Drawing::Point(565, 371);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(39, 20);
			this->label162->TabIndex = 127;
			this->label162->Text = L"125";
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->BackColor = System::Drawing::Color::Transparent;
			this->label163->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label163->ForeColor = System::Drawing::Color::LightCyan;
			this->label163->Location = System::Drawing::Point(563, 412);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(39, 20);
			this->label163->TabIndex = 126;
			this->label163->Text = L"125";
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->BackColor = System::Drawing::Color::Transparent;
			this->label164->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label164->ForeColor = System::Drawing::Color::LightCyan;
			this->label164->Location = System::Drawing::Point(286, 450);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(39, 20);
			this->label164->TabIndex = 125;
			this->label164->Text = L"Tea";
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->BackColor = System::Drawing::Color::Transparent;
			this->label165->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label165->ForeColor = System::Drawing::Color::LightCyan;
			this->label165->Location = System::Drawing::Point(288, 371);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(42, 20);
			this->label165->TabIndex = 124;
			this->label165->Text = L"Lasi";
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->BackColor = System::Drawing::Color::Transparent;
			this->label166->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label166->ForeColor = System::Drawing::Color::LightCyan;
			this->label166->Location = System::Drawing::Point(286, 412);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(81, 20);
			this->label166->TabIndex = 123;
			this->label166->Text = L"Cold Milk";
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->BackColor = System::Drawing::Color::Transparent;
			this->label167->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label167->ForeColor = System::Drawing::Color::LightCyan;
			this->label167->Location = System::Drawing::Point(117, 333);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(51, 20);
			this->label167->TabIndex = 122;
			this->label167->Text = L"Dk06";
			// 
			// label168
			// 
			this->label168->AutoSize = true;
			this->label168->BackColor = System::Drawing::Color::Transparent;
			this->label168->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label168->ForeColor = System::Drawing::Color::LightCyan;
			this->label168->Location = System::Drawing::Point(117, 254);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(51, 20);
			this->label168->TabIndex = 121;
			this->label168->Text = L"Dk04";
			// 
			// label169
			// 
			this->label169->AutoSize = true;
			this->label169->BackColor = System::Drawing::Color::Transparent;
			this->label169->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label169->ForeColor = System::Drawing::Color::LightCyan;
			this->label169->Location = System::Drawing::Point(117, 292);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(51, 20);
			this->label169->TabIndex = 120;
			this->label169->Text = L"Dk05";
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->BackColor = System::Drawing::Color::Transparent;
			this->label170->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label170->ForeColor = System::Drawing::Color::LightCyan;
			this->label170->Location = System::Drawing::Point(563, 334);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(39, 20);
			this->label170->TabIndex = 119;
			this->label170->Text = L"125";
			// 
			// label171
			// 
			this->label171->AutoSize = true;
			this->label171->BackColor = System::Drawing::Color::Transparent;
			this->label171->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label171->ForeColor = System::Drawing::Color::LightCyan;
			this->label171->Location = System::Drawing::Point(563, 256);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(39, 20);
			this->label171->TabIndex = 118;
			this->label171->Text = L"130";
			// 
			// label172
			// 
			this->label172->AutoSize = true;
			this->label172->BackColor = System::Drawing::Color::Transparent;
			this->label172->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label172->ForeColor = System::Drawing::Color::LightCyan;
			this->label172->Location = System::Drawing::Point(563, 294);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(39, 20);
			this->label172->TabIndex = 117;
			this->label172->Text = L"130";
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->BackColor = System::Drawing::Color::Transparent;
			this->label173->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label173->ForeColor = System::Drawing::Color::LightCyan;
			this->label173->Location = System::Drawing::Point(286, 335);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(116, 20);
			this->label173->TabIndex = 116;
			this->label173->Text = L"Lemon Water";
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->BackColor = System::Drawing::Color::Transparent;
			this->label174->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label174->ForeColor = System::Drawing::Color::LightCyan;
			this->label174->Location = System::Drawing::Point(286, 256);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(88, 20);
			this->label174->TabIndex = 115;
			this->label174->Text = L"Milkshake";
			// 
			// label175
			// 
			this->label175->AutoSize = true;
			this->label175->BackColor = System::Drawing::Color::Transparent;
			this->label175->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label175->ForeColor = System::Drawing::Color::LightCyan;
			this->label175->Location = System::Drawing::Point(286, 294);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(119, 20);
			this->label175->TabIndex = 114;
			this->label175->Text = L"Mango Shake";
			// 
			// label176
			// 
			this->label176->AutoSize = true;
			this->label176->BackColor = System::Drawing::Color::Transparent;
			this->label176->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label176->ForeColor = System::Drawing::Color::LightCyan;
			this->label176->Location = System::Drawing::Point(117, 217);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(51, 20);
			this->label176->TabIndex = 113;
			this->label176->Text = L"Dk03";
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->BackColor = System::Drawing::Color::Transparent;
			this->label177->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label177->ForeColor = System::Drawing::Color::LightCyan;
			this->label177->Location = System::Drawing::Point(117, 144);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(51, 20);
			this->label177->TabIndex = 112;
			this->label177->Text = L"Dk01";
			// 
			// label178
			// 
			this->label178->AutoSize = true;
			this->label178->BackColor = System::Drawing::Color::Transparent;
			this->label178->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label178->ForeColor = System::Drawing::Color::LightCyan;
			this->label178->Location = System::Drawing::Point(117, 180);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(51, 20);
			this->label178->TabIndex = 111;
			this->label178->Text = L"Dk02";
			// 
			// label179
			// 
			this->label179->AutoSize = true;
			this->label179->BackColor = System::Drawing::Color::Transparent;
			this->label179->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label179->ForeColor = System::Drawing::Color::LightCyan;
			this->label179->Location = System::Drawing::Point(92, 98);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(118, 25);
			this->label179->TabIndex = 110;
			this->label179->Text = L"Item Code";
			// 
			// label180
			// 
			this->label180->AutoSize = true;
			this->label180->BackColor = System::Drawing::Color::Transparent;
			this->label180->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label180->ForeColor = System::Drawing::Color::LightCyan;
			this->label180->Location = System::Drawing::Point(563, 218);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(39, 20);
			this->label180->TabIndex = 109;
			this->label180->Text = L"150";
			// 
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->BackColor = System::Drawing::Color::Transparent;
			this->label181->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label181->ForeColor = System::Drawing::Color::LightCyan;
			this->label181->Location = System::Drawing::Point(563, 146);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(39, 20);
			this->label181->TabIndex = 108;
			this->label181->Text = L"100";
			// 
			// label182
			// 
			this->label182->AutoSize = true;
			this->label182->BackColor = System::Drawing::Color::Transparent;
			this->label182->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label182->ForeColor = System::Drawing::Color::LightCyan;
			this->label182->Location = System::Drawing::Point(563, 182);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(39, 20);
			this->label182->TabIndex = 107;
			this->label182->Text = L"120";
			// 
			// label183
			// 
			this->label183->AutoSize = true;
			this->label183->BackColor = System::Drawing::Color::Transparent;
			this->label183->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label183->ForeColor = System::Drawing::Color::LightCyan;
			this->label183->Location = System::Drawing::Point(562, 93);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(74, 29);
			this->label183->TabIndex = 106;
			this->label183->Text = L"Price";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(518, 510);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(109, 47);
			this->button6->TabIndex = 105;
			this->button6->Text = L"Confirm";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// label184
			// 
			this->label184->AutoSize = true;
			this->label184->BackColor = System::Drawing::Color::Transparent;
			this->label184->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label184->ForeColor = System::Drawing::Color::LightCyan;
			this->label184->Location = System::Drawing::Point(286, 219);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(106, 20);
			this->label184->TabIndex = 104;
			this->label184->Text = L"4 Mix Juices";
			// 
			// comboBox52
			// 
			this->comboBox52->BackColor = System::Drawing::Color::Azure;
			this->comboBox52->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox52->FormattingEnabled = true;
			this->comboBox52->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox52->Location = System::Drawing::Point(689, 184);
			this->comboBox52->Name = L"comboBox52";
			this->comboBox52->Size = System::Drawing::Size(111, 23);
			this->comboBox52->TabIndex = 103;
			this->comboBox52->Text = L"  Select the Quantity";
			// 
			// comboBox53
			// 
			this->comboBox53->BackColor = System::Drawing::Color::Azure;
			this->comboBox53->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox53->FormattingEnabled = true;
			this->comboBox53->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox53->Location = System::Drawing::Point(689, 218);
			this->comboBox53->Name = L"comboBox53";
			this->comboBox53->Size = System::Drawing::Size(111, 23);
			this->comboBox53->TabIndex = 102;
			this->comboBox53->Text = L"  Select the Quantity";
			// 
			// comboBox54
			// 
			this->comboBox54->BackColor = System::Drawing::Color::Azure;
			this->comboBox54->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox54->FormattingEnabled = true;
			this->comboBox54->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox54->Location = System::Drawing::Point(689, 145);
			this->comboBox54->Name = L"comboBox54";
			this->comboBox54->Size = System::Drawing::Size(111, 23);
			this->comboBox54->TabIndex = 101;
			this->comboBox54->Text = L"  Select the Quantity";
			// 
			// label185
			// 
			this->label185->AutoSize = true;
			this->label185->BackColor = System::Drawing::Color::Transparent;
			this->label185->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label185->ForeColor = System::Drawing::Color::LightCyan;
			this->label185->Location = System::Drawing::Point(288, 144);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(91, 20);
			this->label185->TabIndex = 100;
			this->label185->Text = L"Coca Cola";
			// 
			// label186
			// 
			this->label186->AutoSize = true;
			this->label186->BackColor = System::Drawing::Color::Transparent;
			this->label186->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label186->ForeColor = System::Drawing::Color::LightCyan;
			this->label186->Location = System::Drawing::Point(286, 182);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(127, 20);
			this->label186->TabIndex = 99;
			this->label186->Text = L"Banana Shake";
			// 
			// label187
			// 
			this->label187->AutoSize = true;
			this->label187->BackColor = System::Drawing::Color::Transparent;
			this->label187->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label187->ForeColor = System::Drawing::Color::LightCyan;
			this->label187->Location = System::Drawing::Point(692, 95);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(108, 29);
			this->label187->TabIndex = 98;
			this->label187->Text = L"Quantity";
			// 
			// label188
			// 
			this->label188->AutoSize = true;
			this->label188->BackColor = System::Drawing::Color::Transparent;
			this->label188->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label188->ForeColor = System::Drawing::Color::LightCyan;
			this->label188->Location = System::Drawing::Point(285, 95);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(70, 29);
			this->label188->TabIndex = 97;
			this->label188->Text = L"Item ";
			// 
			// Desserts
			// 
			this->Desserts->BackColor = System::Drawing::Color::White;
			this->Desserts->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Desserts.BackgroundImage")));
			this->Desserts->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Desserts->Controls->Add(this->button42);
			this->Desserts->Controls->Add(this->button43);
			this->Desserts->Controls->Add(this->button44);
			this->Desserts->Controls->Add(this->button45);
			this->Desserts->Controls->Add(this->button46);
			this->Desserts->Controls->Add(this->button47);
			this->Desserts->Controls->Add(this->button48);
			this->Desserts->Controls->Add(this->button49);
			this->Desserts->Controls->Add(this->button50);
			this->Desserts->Controls->Add(this->label69);
			this->Desserts->Controls->Add(this->comboBox55);
			this->Desserts->Controls->Add(this->comboBox56);
			this->Desserts->Controls->Add(this->comboBox57);
			this->Desserts->Controls->Add(this->comboBox58);
			this->Desserts->Controls->Add(this->comboBox59);
			this->Desserts->Controls->Add(this->comboBox60);
			this->Desserts->Controls->Add(this->label189);
			this->Desserts->Controls->Add(this->label190);
			this->Desserts->Controls->Add(this->label191);
			this->Desserts->Controls->Add(this->label192);
			this->Desserts->Controls->Add(this->label193);
			this->Desserts->Controls->Add(this->label194);
			this->Desserts->Controls->Add(this->label195);
			this->Desserts->Controls->Add(this->label196);
			this->Desserts->Controls->Add(this->label197);
			this->Desserts->Controls->Add(this->label198);
			this->Desserts->Controls->Add(this->label199);
			this->Desserts->Controls->Add(this->label200);
			this->Desserts->Controls->Add(this->label201);
			this->Desserts->Controls->Add(this->label202);
			this->Desserts->Controls->Add(this->label203);
			this->Desserts->Controls->Add(this->label204);
			this->Desserts->Controls->Add(this->label205);
			this->Desserts->Controls->Add(this->label206);
			this->Desserts->Controls->Add(this->label207);
			this->Desserts->Controls->Add(this->label208);
			this->Desserts->Controls->Add(this->label209);
			this->Desserts->Controls->Add(this->label210);
			this->Desserts->Controls->Add(this->label211);
			this->Desserts->Controls->Add(this->label212);
			this->Desserts->Controls->Add(this->label213);
			this->Desserts->Controls->Add(this->label214);
			this->Desserts->Controls->Add(this->button7);
			this->Desserts->Controls->Add(this->label215);
			this->Desserts->Controls->Add(this->comboBox61);
			this->Desserts->Controls->Add(this->comboBox62);
			this->Desserts->Controls->Add(this->comboBox63);
			this->Desserts->Controls->Add(this->label216);
			this->Desserts->Controls->Add(this->label217);
			this->Desserts->Controls->Add(this->label218);
			this->Desserts->Controls->Add(this->label219);
			this->Desserts->Location = System::Drawing::Point(4, 22);
			this->Desserts->Name = L"Desserts";
			this->Desserts->Padding = System::Windows::Forms::Padding(3);
			this->Desserts->Size = System::Drawing::Size(1208, 600);
			this->Desserts->TabIndex = 7;
			this->Desserts->Text = L"Desserts";
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(796, 465);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(75, 23);
			this->button42->TabIndex = 159;
			this->button42->Text = L"Add";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::Button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(796, 421);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(75, 23);
			this->button43->TabIndex = 158;
			this->button43->Text = L"Add";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::Button43_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(796, 382);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(75, 23);
			this->button44->TabIndex = 157;
			this->button44->Text = L"Add";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::Button44_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(796, 347);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(75, 23);
			this->button45->TabIndex = 156;
			this->button45->Text = L"Add";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::Button45_Click);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(796, 303);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(75, 23);
			this->button46->TabIndex = 155;
			this->button46->Text = L"Add";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::Button46_Click);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(796, 261);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(75, 23);
			this->button47->TabIndex = 154;
			this->button47->Text = L"Add";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::Button47_Click);
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(796, 219);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(75, 23);
			this->button48->TabIndex = 153;
			this->button48->Text = L"Add";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::Button48_Click);
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(796, 174);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(75, 23);
			this->button49->TabIndex = 152;
			this->button49->Text = L"Add";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::Button49_Click);
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(796, 125);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(75, 23);
			this->button50->TabIndex = 151;
			this->button50->Text = L"Add";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::Button50_Click);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::Transparent;
			this->label69->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label69->ForeColor = System::Drawing::Color::AliceBlue;
			this->label69->Location = System::Drawing::Point(436, 21);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(198, 31);
			this->label69->TabIndex = 138;
			this->label69->Text = L"Desserts Menu";
			// 
			// comboBox55
			// 
			this->comboBox55->BackColor = System::Drawing::Color::Azure;
			this->comboBox55->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox55->FormattingEnabled = true;
			this->comboBox55->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox55->Location = System::Drawing::Point(630, 462);
			this->comboBox55->Name = L"comboBox55";
			this->comboBox55->Size = System::Drawing::Size(111, 23);
			this->comboBox55->TabIndex = 137;
			this->comboBox55->Text = L"  Select the Quantity";
			// 
			// comboBox56
			// 
			this->comboBox56->BackColor = System::Drawing::Color::Azure;
			this->comboBox56->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox56->FormattingEnabled = true;
			this->comboBox56->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox56->Location = System::Drawing::Point(630, 418);
			this->comboBox56->Name = L"comboBox56";
			this->comboBox56->Size = System::Drawing::Size(111, 23);
			this->comboBox56->TabIndex = 136;
			this->comboBox56->Text = L"  Select the Quantity";
			// 
			// comboBox57
			// 
			this->comboBox57->BackColor = System::Drawing::Color::Azure;
			this->comboBox57->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox57->FormattingEnabled = true;
			this->comboBox57->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox57->Location = System::Drawing::Point(628, 383);
			this->comboBox57->Name = L"comboBox57";
			this->comboBox57->Size = System::Drawing::Size(111, 23);
			this->comboBox57->TabIndex = 135;
			this->comboBox57->Text = L"  Select the Quantity";
			// 
			// comboBox58
			// 
			this->comboBox58->BackColor = System::Drawing::Color::Azure;
			this->comboBox58->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox58->FormattingEnabled = true;
			this->comboBox58->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox58->Location = System::Drawing::Point(630, 343);
			this->comboBox58->Name = L"comboBox58";
			this->comboBox58->Size = System::Drawing::Size(111, 23);
			this->comboBox58->TabIndex = 134;
			this->comboBox58->Text = L"  Select the Quantity";
			// 
			// comboBox59
			// 
			this->comboBox59->BackColor = System::Drawing::Color::Azure;
			this->comboBox59->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox59->FormattingEnabled = true;
			this->comboBox59->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox59->Location = System::Drawing::Point(630, 301);
			this->comboBox59->Name = L"comboBox59";
			this->comboBox59->Size = System::Drawing::Size(111, 23);
			this->comboBox59->TabIndex = 133;
			this->comboBox59->Text = L"  Select the Quantity";
			// 
			// comboBox60
			// 
			this->comboBox60->BackColor = System::Drawing::Color::Azure;
			this->comboBox60->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox60->FormattingEnabled = true;
			this->comboBox60->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox60->Location = System::Drawing::Point(630, 266);
			this->comboBox60->Name = L"comboBox60";
			this->comboBox60->Size = System::Drawing::Size(111, 23);
			this->comboBox60->TabIndex = 132;
			this->comboBox60->Text = L"  Select the Quantity";
			// 
			// label189
			// 
			this->label189->AutoSize = true;
			this->label189->BackColor = System::Drawing::Color::Transparent;
			this->label189->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label189->ForeColor = System::Drawing::Color::AliceBlue;
			this->label189->Location = System::Drawing::Point(71, 465);
			this->label189->Name = L"label189";
			this->label189->Size = System::Drawing::Size(48, 20);
			this->label189->TabIndex = 131;
			this->label189->Text = L"Dt09";
			// 
			// label190
			// 
			this->label190->AutoSize = true;
			this->label190->BackColor = System::Drawing::Color::Transparent;
			this->label190->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label190->ForeColor = System::Drawing::Color::AliceBlue;
			this->label190->Location = System::Drawing::Point(71, 382);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(48, 20);
			this->label190->TabIndex = 130;
			this->label190->Text = L"Dt07";
			// 
			// label191
			// 
			this->label191->AutoSize = true;
			this->label191->BackColor = System::Drawing::Color::Transparent;
			this->label191->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label191->ForeColor = System::Drawing::Color::AliceBlue;
			this->label191->Location = System::Drawing::Point(71, 421);
			this->label191->Name = L"label191";
			this->label191->Size = System::Drawing::Size(48, 20);
			this->label191->TabIndex = 129;
			this->label191->Text = L"Dt08";
			// 
			// label192
			// 
			this->label192->AutoSize = true;
			this->label192->BackColor = System::Drawing::Color::Transparent;
			this->label192->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label192->ForeColor = System::Drawing::Color::AliceBlue;
			this->label192->Location = System::Drawing::Point(504, 465);
			this->label192->Name = L"label192";
			this->label192->Size = System::Drawing::Size(39, 20);
			this->label192->TabIndex = 128;
			this->label192->Text = L"250";
			// 
			// label193
			// 
			this->label193->AutoSize = true;
			this->label193->BackColor = System::Drawing::Color::Transparent;
			this->label193->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label193->ForeColor = System::Drawing::Color::AliceBlue;
			this->label193->Location = System::Drawing::Point(504, 383);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(39, 20);
			this->label193->TabIndex = 127;
			this->label193->Text = L"180";
			// 
			// label194
			// 
			this->label194->AutoSize = true;
			this->label194->BackColor = System::Drawing::Color::Transparent;
			this->label194->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label194->ForeColor = System::Drawing::Color::AliceBlue;
			this->label194->Location = System::Drawing::Point(504, 422);
			this->label194->Name = L"label194";
			this->label194->Size = System::Drawing::Size(39, 20);
			this->label194->TabIndex = 126;
			this->label194->Text = L"225";
			// 
			// label195
			// 
			this->label195->AutoSize = true;
			this->label195->BackColor = System::Drawing::Color::Transparent;
			this->label195->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label195->ForeColor = System::Drawing::Color::AliceBlue;
			this->label195->Location = System::Drawing::Point(206, 466);
			this->label195->Name = L"label195";
			this->label195->Size = System::Drawing::Size(97, 20);
			this->label195->TabIndex = 125;
			this->label195->Text = L"Snow Balls";
			// 
			// label196
			// 
			this->label196->AutoSize = true;
			this->label196->BackColor = System::Drawing::Color::Transparent;
			this->label196->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label196->ForeColor = System::Drawing::Color::AliceBlue;
			this->label196->Location = System::Drawing::Point(206, 383);
			this->label196->Name = L"label196";
			this->label196->Size = System::Drawing::Size(204, 20);
			this->label196->TabIndex = 124;
			this->label196->Text = L"Cheese Cake of the Day";
			// 
			// label197
			// 
			this->label197->AutoSize = true;
			this->label197->BackColor = System::Drawing::Color::Transparent;
			this->label197->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label197->ForeColor = System::Drawing::Color::AliceBlue;
			this->label197->Location = System::Drawing::Point(206, 422);
			this->label197->Name = L"label197";
			this->label197->Size = System::Drawing::Size(136, 20);
			this->label197->TabIndex = 123;
			this->label197->Text = L"Chocolate Cake";
			// 
			// label198
			// 
			this->label198->AutoSize = true;
			this->label198->BackColor = System::Drawing::Color::Transparent;
			this->label198->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label198->ForeColor = System::Drawing::Color::AliceBlue;
			this->label198->Location = System::Drawing::Point(71, 346);
			this->label198->Name = L"label198";
			this->label198->Size = System::Drawing::Size(48, 20);
			this->label198->TabIndex = 122;
			this->label198->Text = L"Dt06";
			// 
			// label199
			// 
			this->label199->AutoSize = true;
			this->label199->BackColor = System::Drawing::Color::Transparent;
			this->label199->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label199->ForeColor = System::Drawing::Color::AliceBlue;
			this->label199->Location = System::Drawing::Point(71, 264);
			this->label199->Name = L"label199";
			this->label199->Size = System::Drawing::Size(48, 20);
			this->label199->TabIndex = 121;
			this->label199->Text = L"Dt04";
			// 
			// label200
			// 
			this->label200->AutoSize = true;
			this->label200->BackColor = System::Drawing::Color::Transparent;
			this->label200->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label200->ForeColor = System::Drawing::Color::AliceBlue;
			this->label200->Location = System::Drawing::Point(71, 303);
			this->label200->Name = L"label200";
			this->label200->Size = System::Drawing::Size(48, 20);
			this->label200->TabIndex = 120;
			this->label200->Text = L"Dt05";
			// 
			// label201
			// 
			this->label201->AutoSize = true;
			this->label201->BackColor = System::Drawing::Color::Transparent;
			this->label201->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label201->ForeColor = System::Drawing::Color::AliceBlue;
			this->label201->Location = System::Drawing::Point(504, 346);
			this->label201->Name = L"label201";
			this->label201->Size = System::Drawing::Size(39, 20);
			this->label201->TabIndex = 119;
			this->label201->Text = L"425";
			// 
			// label202
			// 
			this->label202->AutoSize = true;
			this->label202->BackColor = System::Drawing::Color::Transparent;
			this->label202->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label202->ForeColor = System::Drawing::Color::AliceBlue;
			this->label202->Location = System::Drawing::Point(504, 265);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(39, 20);
			this->label202->TabIndex = 118;
			this->label202->Text = L"125";
			// 
			// label203
			// 
			this->label203->AutoSize = true;
			this->label203->BackColor = System::Drawing::Color::Transparent;
			this->label203->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label203->ForeColor = System::Drawing::Color::AliceBlue;
			this->label203->Location = System::Drawing::Point(504, 304);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(39, 20);
			this->label203->TabIndex = 117;
			this->label203->Text = L"425";
			// 
			// label204
			// 
			this->label204->AutoSize = true;
			this->label204->BackColor = System::Drawing::Color::Transparent;
			this->label204->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label204->ForeColor = System::Drawing::Color::AliceBlue;
			this->label204->Location = System::Drawing::Point(206, 347);
			this->label204->Name = L"label204";
			this->label204->Size = System::Drawing::Size(197, 20);
			this->label204->TabIndex = 116;
			this->label204->Text = L"Strawberries Ice Cream";
			// 
			// label205
			// 
			this->label205->AutoSize = true;
			this->label205->BackColor = System::Drawing::Color::Transparent;
			this->label205->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label205->ForeColor = System::Drawing::Color::AliceBlue;
			this->label205->Location = System::Drawing::Point(206, 265);
			this->label205->Name = L"label205";
			this->label205->Size = System::Drawing::Size(177, 20);
			this->label205->TabIndex = 115;
			this->label205->Text = L"Chocolate Ice Cream";
			// 
			// label206
			// 
			this->label206->AutoSize = true;
			this->label206->BackColor = System::Drawing::Color::Transparent;
			this->label206->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label206->ForeColor = System::Drawing::Color::AliceBlue;
			this->label206->Location = System::Drawing::Point(206, 304);
			this->label206->Name = L"label206";
			this->label206->Size = System::Drawing::Size(174, 20);
			this->label206->TabIndex = 114;
			this->label206->Text = L"Traditional Apple Pie";
			// 
			// label207
			// 
			this->label207->AutoSize = true;
			this->label207->BackColor = System::Drawing::Color::Transparent;
			this->label207->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label207->ForeColor = System::Drawing::Color::AliceBlue;
			this->label207->Location = System::Drawing::Point(71, 222);
			this->label207->Name = L"label207";
			this->label207->Size = System::Drawing::Size(48, 20);
			this->label207->TabIndex = 113;
			this->label207->Text = L"Dt03";
			// 
			// label208
			// 
			this->label208->AutoSize = true;
			this->label208->BackColor = System::Drawing::Color::Transparent;
			this->label208->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label208->ForeColor = System::Drawing::Color::AliceBlue;
			this->label208->Location = System::Drawing::Point(71, 128);
			this->label208->Name = L"label208";
			this->label208->Size = System::Drawing::Size(48, 20);
			this->label208->TabIndex = 112;
			this->label208->Text = L"Dt01";
			// 
			// label209
			// 
			this->label209->AutoSize = true;
			this->label209->BackColor = System::Drawing::Color::Transparent;
			this->label209->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label209->ForeColor = System::Drawing::Color::AliceBlue;
			this->label209->Location = System::Drawing::Point(71, 173);
			this->label209->Name = L"label209";
			this->label209->Size = System::Drawing::Size(48, 20);
			this->label209->TabIndex = 111;
			this->label209->Text = L"Dt02";
			// 
			// label210
			// 
			this->label210->AutoSize = true;
			this->label210->BackColor = System::Drawing::Color::Transparent;
			this->label210->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label210->ForeColor = System::Drawing::Color::AliceBlue;
			this->label210->Location = System::Drawing::Point(30, 78);
			this->label210->Name = L"label210";
			this->label210->Size = System::Drawing::Size(133, 29);
			this->label210->TabIndex = 110;
			this->label210->Text = L"Item Code";
			// 
			// label211
			// 
			this->label211->AutoSize = true;
			this->label211->BackColor = System::Drawing::Color::Transparent;
			this->label211->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label211->ForeColor = System::Drawing::Color::AliceBlue;
			this->label211->Location = System::Drawing::Point(504, 222);
			this->label211->Name = L"label211";
			this->label211->Size = System::Drawing::Size(39, 20);
			this->label211->TabIndex = 109;
			this->label211->Text = L"100";
			// 
			// label212
			// 
			this->label212->AutoSize = true;
			this->label212->BackColor = System::Drawing::Color::Transparent;
			this->label212->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label212->ForeColor = System::Drawing::Color::AliceBlue;
			this->label212->Location = System::Drawing::Point(504, 129);
			this->label212->Name = L"label212";
			this->label212->Size = System::Drawing::Size(39, 20);
			this->label212->TabIndex = 108;
			this->label212->Text = L"400";
			// 
			// label213
			// 
			this->label213->AutoSize = true;
			this->label213->BackColor = System::Drawing::Color::Transparent;
			this->label213->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label213->ForeColor = System::Drawing::Color::AliceBlue;
			this->label213->Location = System::Drawing::Point(504, 174);
			this->label213->Name = L"label213";
			this->label213->Size = System::Drawing::Size(39, 20);
			this->label213->TabIndex = 107;
			this->label213->Text = L"300";
			// 
			// label214
			// 
			this->label214->AutoSize = true;
			this->label214->BackColor = System::Drawing::Color::Transparent;
			this->label214->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label214->ForeColor = System::Drawing::Color::AliceBlue;
			this->label214->Location = System::Drawing::Point(493, 78);
			this->label214->Name = L"label214";
			this->label214->Size = System::Drawing::Size(74, 29);
			this->label214->TabIndex = 106;
			this->label214->Text = L"Price";
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(485, 529);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(109, 47);
			this->button7->TabIndex = 105;
			this->button7->Text = L"Confirm";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// label215
			// 
			this->label215->AutoSize = true;
			this->label215->BackColor = System::Drawing::Color::Transparent;
			this->label215->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label215->ForeColor = System::Drawing::Color::AliceBlue;
			this->label215->Location = System::Drawing::Point(206, 223);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(156, 20);
			this->label215->TabIndex = 104;
			this->label215->Text = L"Simple Fruit Salad";
			// 
			// comboBox61
			// 
			this->comboBox61->BackColor = System::Drawing::Color::Azure;
			this->comboBox61->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox61->FormattingEnabled = true;
			this->comboBox61->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox61->Location = System::Drawing::Point(630, 176);
			this->comboBox61->Name = L"comboBox61";
			this->comboBox61->Size = System::Drawing::Size(111, 23);
			this->comboBox61->TabIndex = 103;
			this->comboBox61->Text = L"  Select the Quantity";
			// 
			// comboBox62
			// 
			this->comboBox62->BackColor = System::Drawing::Color::Azure;
			this->comboBox62->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox62->FormattingEnabled = true;
			this->comboBox62->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox62->Location = System::Drawing::Point(630, 222);
			this->comboBox62->Name = L"comboBox62";
			this->comboBox62->Size = System::Drawing::Size(111, 23);
			this->comboBox62->TabIndex = 102;
			this->comboBox62->Text = L"  Select the Quantity";
			// 
			// comboBox63
			// 
			this->comboBox63->BackColor = System::Drawing::Color::Azure;
			this->comboBox63->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox63->FormattingEnabled = true;
			this->comboBox63->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboBox63->Location = System::Drawing::Point(630, 128);
			this->comboBox63->Name = L"comboBox63";
			this->comboBox63->Size = System::Drawing::Size(111, 23);
			this->comboBox63->TabIndex = 101;
			this->comboBox63->Text = L"  Select the Quantity";
			// 
			// label216
			// 
			this->label216->AutoSize = true;
			this->label216->BackColor = System::Drawing::Color::Transparent;
			this->label216->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label216->ForeColor = System::Drawing::Color::AliceBlue;
			this->label216->Location = System::Drawing::Point(206, 129);
			this->label216->Name = L"label216";
			this->label216->Size = System::Drawing::Size(101, 20);
			this->label216->TabIndex = 100;
			this->label216->Text = L"Sonh Halva";
			// 
			// label217
			// 
			this->label217->AutoSize = true;
			this->label217->BackColor = System::Drawing::Color::Transparent;
			this->label217->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label217->ForeColor = System::Drawing::Color::AliceBlue;
			this->label217->Location = System::Drawing::Point(206, 174);
			this->label217->Name = L"label217";
			this->label217->Size = System::Drawing::Size(125, 20);
			this->label217->TabIndex = 99;
			this->label217->Text = L"Russian Salad";
			// 
			// label218
			// 
			this->label218->AutoSize = true;
			this->label218->BackColor = System::Drawing::Color::Transparent;
			this->label218->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label218->ForeColor = System::Drawing::Color::AliceBlue;
			this->label218->Location = System::Drawing::Point(633, 78);
			this->label218->Name = L"label218";
			this->label218->Size = System::Drawing::Size(108, 29);
			this->label218->TabIndex = 98;
			this->label218->Text = L"Quantity";
			// 
			// label219
			// 
			this->label219->AutoSize = true;
			this->label219->BackColor = System::Drawing::Color::Transparent;
			this->label219->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label219->ForeColor = System::Drawing::Color::AliceBlue;
			this->label219->Location = System::Drawing::Point(205, 78);
			this->label219->Name = L"label219";
			this->label219->Size = System::Drawing::Size(70, 29);
			this->label219->TabIndex = 97;
			this->label219->Text = L"Item ";
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->label65);
			this->tabPage2->Controls->Add(this->label49);
			this->tabPage2->Controls->Add(this->label67);
			this->tabPage2->Controls->Add(this->label66);
			this->tabPage2->Controls->Add(this->label68);
			this->tabPage2->Controls->Add(this->label46);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(1208, 600);
			this->tabPage2->TabIndex = 8;
			this->tabPage2->Text = L"Procedure";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(374, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 29);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Restaurant  Management System";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::Transparent;
			this->label65->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::AliceBlue;
			this->label65->Location = System::Drawing::Point(166, 131);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(449, 29);
			this->label65->TabIndex = 20;
			this->label65->Text = L"Select the Desired Quantity of Items";
			this->label65->Click += gcnew System::EventHandler(this, &MyForm::Label65_Click_1);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::Transparent;
			this->label49->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::Color::AliceBlue;
			this->label49->Location = System::Drawing::Point(56, 82);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(157, 29);
			this->label49->TabIndex = 19;
			this->label49->Text = L"How to Use:";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Transparent;
			this->label67->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::AliceBlue;
			this->label67->Location = System::Drawing::Point(166, 193);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(392, 29);
			this->label67->TabIndex = 22;
			this->label67->Text = L"Press Confirm to confirm order";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::Transparent;
			this->label66->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::Color::AliceBlue;
			this->label66->Location = System::Drawing::Point(166, 161);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(379, 29);
			this->label66->TabIndex = 21;
			this->label66->Text = L"Press Add to add item to order";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::Transparent;
			this->label68->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label68->ForeColor = System::Drawing::Color::AliceBlue;
			this->label68->Location = System::Drawing::Point(55, 241);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(74, 29);
			this->label68->TabIndex = 18;
			this->label68->Text = L"Note:";
			// 
			// label46
			// 
			this->label46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::Transparent;
			this->label46->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::AliceBlue;
			this->label46->Location = System::Drawing::Point(166, 290);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(562, 58);
			this->label46->TabIndex = 17;
			this->label46->Text = L"In Customer_info to awail membership perks\r\nEnter Membership ID ";
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->BackColor = System::Drawing::Color::Black;
			this->label98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label98->ForeColor = System::Drawing::Color::AliceBlue;
			this->label98->Location = System::Drawing::Point(1310, 532);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(34, 29);
			this->label98->TabIndex = 137;
			this->label98->Text = L" 0";
			this->label98->Click += gcnew System::EventHandler(this, &MyForm::Label98_Click);
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->BackColor = System::Drawing::Color::Black;
			this->label99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label99->ForeColor = System::Drawing::Color::AliceBlue;
			this->label99->Location = System::Drawing::Point(1224, 532);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(80, 29);
			this->label99->TabIndex = 136;
			this->label99->Text = L"Total:";
			this->label99->Click += gcnew System::EventHandler(this, &MyForm::Label99_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(566, 510);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 47);
			this->button2->TabIndex = 105;
			this->button2->Text = L"Confirm";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::AliceBlue;
			this->label2->Location = System::Drawing::Point(335, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(468, 34);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Restaurant  Management System";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1399, 693);
			this->Controls->Add(this->label98);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label99);
			this->Name = L"MyForm";
			this->Text = L"Restaurant Management System";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Appetizers->ResumeLayout(false);
			this->Appetizers->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->Customer_Info->ResumeLayout(false);
			this->Customer_Info->PerformLayout();
			this->Soups->ResumeLayout(false);
			this->Soups->PerformLayout();
			this->Chicken->ResumeLayout(false);
			this->Chicken->PerformLayout();
			this->Beef->ResumeLayout(false);
			this->Beef->PerformLayout();
			this->Vegetables->ResumeLayout(false);
			this->Vegetables->PerformLayout();
			this->Drinks->ResumeLayout(false);
			this->Drinks->PerformLayout();
			this->Desserts->ResumeLayout(false);
			this->Desserts->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bill_list* bill = new bill_list;

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//

		//this->textBox1->Text = "Saad is Love <3 :)";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ComboBox15_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label50_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button13_Click(System::Object^ sender, System::EventArgs^ e) {

	// Button Click for Appetizer::BBQ Pork Slices

	int selectedIndex = comboBox13->SelectedIndex;
	Object^ selectedItem = comboBox13->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Apt04", "BBQ Poek Slices", iqty, 280);


	bill->printBill();
	//MessageBox ^msg;


}
private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
		
			// Button Click for Appetizer::Egg Roll
	
	int selectedIndex = comboBox18->SelectedIndex;
	Object ^selectedItem = comboBox18->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry( "Apt01", "Egg Roll", iqty, 280);


	bill->printBill();
	//MessageBox ^msg;



	//msg->Show("Selected Item = " + selectedItem->ToString());


}
private: System::Void ComboBox18_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	// button click for Appetizers::Confirm

	// to display total price in label

	int total_price = bill->sum_tprice();

	String^ tp = System::Convert::ToString(total_price);

	this->label98->Text = tp;
}
private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e) {

	//this->label18->Text = "0";
}

private: System::Void TabControl2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label65_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label67_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label66_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label7_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Label75_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button18_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Soups::Egg Drop Soup

	int selectedIndex = comboBox19->SelectedIndex;
	Object^ selectedItem = comboBox19->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("S01", "Egg Drop Soup", iqty, 525);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Beef_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button23_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Chicken::Fire Grilled Teriyaki Chicken

	int selectedIndex = comboBox12->SelectedIndex;
	Object^ selectedItem = comboBox12->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Ck01", "Fire Grilled Teriyaki Chicken", iqty, 1280);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Label99_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ComboBox12_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ComboBox10_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Chicken_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label98_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Appetizer::Jumbo Fried Shrimp(4)

	int selectedIndex = comboBox1->SelectedIndex;
	Object^ selectedItem = comboBox1->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Apt02", "Jumbo Fried Shrimp", iqty, 525);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
	
		// Button Click for Appetizer::Pop Sticker(6)

		int selectedIndex = comboBox2->SelectedIndex;
	Object^ selectedItem = comboBox2->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Apt03", "Pop Sticker(6)", iqty, 655);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void ComboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Appetizer::Crab Puff(6)

	int selectedIndex = comboBox3->SelectedIndex;
	Object^ selectedItem = comboBox3->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Apt04", "Crab Puff(6)", iqty, 625);


	bill->printBill();
	//MessageBox ^msg;


}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {

	// button click for Soups::Confirm

	// to display total price in label

	int total_price = bill->sum_tprice();

	String^ tp = System::Convert::ToString(total_price);

	this->label98->Text = tp;

}
private: System::Void Button17_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Soups::Vegetable Tofu Soup

	int selectedIndex = comboBox17->SelectedIndex;
	Object^ selectedItem = comboBox17->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("S02", "Vegetable Tofu Soup", iqty, 575);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button16_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Soups::Hot_Sour Soup 

	int selectedIndex = comboBox16->SelectedIndex;
	Object^ selectedItem = comboBox16->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("S03", "Hot_Sour Soup", iqty, 650);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button15_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Soups::Chicken Corn Chowder

	int selectedIndex = comboBox15->SelectedIndex;
	Object^ selectedItem = comboBox15->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("S04", "Chicken Corn Chowder", iqty, 665);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Soups::Won Ton Soup

	int selectedIndex = comboBox14->SelectedIndex;
	Object^ selectedItem = comboBox14->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("S05", "Won Ton Soup", iqty, 665);


	bill->printBill();
	//MessageBox ^msg;


}
private: System::Void Button22_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Chicken::Garlic Chicken(white meat)

	int selectedIndex = comboBox10->SelectedIndex;
	Object^ selectedItem = comboBox10->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Ck02", "Garlic Chicken(white meat)", iqty, 1125);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button21_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Chicken::Chicken karahi

	int selectedIndex = comboBox11->SelectedIndex;
	Object^ selectedItem = comboBox11->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Ck03", "Chicken karahi", iqty, 1325);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button20_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Chicken::Chicken Achari

	int selectedIndex = comboBox9->SelectedIndex;
	Object^ selectedItem = comboBox9->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Ck04", "Chicken Achari", iqty, 1825);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {

	// button click for Chicken::Confirm

	// to display total price in label

	int total_price = bill->sum_tprice();

	String^ tp = System::Convert::ToString(total_price);

	this->label98->Text = tp;

}
private: System::Void Button19_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Chicken::Green Chicken

	int selectedIndex = comboBox8->SelectedIndex;
	Object^ selectedItem = comboBox8->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Ck05", "Green Chicken", iqty, 1495);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button27_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Chicken::Chicken Ginger

	int selectedIndex = comboBox7->SelectedIndex;
	Object^ selectedItem = comboBox7->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Ck06", "Chicken Ginger", iqty, 1425);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button26_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Chicken::Chicken Handi(white)

	int selectedIndex = comboBox6->SelectedIndex;
	Object^ selectedItem = comboBox6->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Ck07", "Chicken Handi(white)", iqty, 1025);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button25_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Chicken::Chicken Handi

	int selectedIndex = comboBox5->SelectedIndex;
	Object^ selectedItem = comboBox5->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Ck08", "Chicken handi", iqty, 1325);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button24_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Chicken::Chicken Munchurin

	int selectedIndex = comboBox4->SelectedIndex;
	Object^ selectedItem = comboBox4->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Ck09", "Chicken Munchurin", iqty, 1425);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {

	// button click for Beef::Confirm

	// to display total price in label

	int total_price = bill->sum_tprice();

	String^ tp = System::Convert::ToString(total_price);

	this->label98->Text = tp;

}
private: System::Void Button59_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Beef::Monogolian Beef

	int selectedIndex = comboBox36->SelectedIndex;
	Object^ selectedItem = comboBox36->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Bf01", "Monogolian Beef", iqty, 1280);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button57_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Beef::Tomato Beef

	int selectedIndex = comboBox34->SelectedIndex;
	Object^ selectedItem = comboBox34->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Bf02", "Tomato Beef", iqty, 1335);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button55_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Beef::Beef Karahi

	int selectedIndex = comboBox35->SelectedIndex;
	Object^ selectedItem = comboBox35->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Bf03", "Beef Karahi", iqty, 1125);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button53_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Beef::Beef Rosh

	int selectedIndex = comboBox33->SelectedIndex;
	Object^ selectedItem = comboBox33->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Bf04", "Beef Rosh", iqty, 1425);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button52_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Beef::Beef Dumpukt

	int selectedIndex = comboBox32->SelectedIndex;
	Object^ selectedItem = comboBox32->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Bf05", "Beef Dumpukt", iqty, 1325);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button51_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Beef::Beef BBQ

	int selectedIndex = comboBox31->SelectedIndex;
	Object^ selectedItem = comboBox31->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Bf06", "Beef BBQ", iqty, 1825);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {

	// button click for Beef::Confirm

	// to display total price in label

	int total_price = bill->sum_tprice();

	String^ tp = System::Convert::ToString(total_price);

	this->label98->Text = tp;

}
private: System::Void Button32_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Vegetable::Mix vegetable

	int selectedIndex = comboBox24->SelectedIndex;
	Object^ selectedItem = comboBox24->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Vt01", "Mix Vegetable", iqty, 380);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button31_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Vegetable::Curry Vegetable

	int selectedIndex = comboBox23->SelectedIndex;
	Object^ selectedItem = comboBox23->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Vt02", "Curry Vegetable", iqty, 425);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button30_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Vegetable::Snow Peas_Mushroom

	int selectedIndex = comboBox22->SelectedIndex;
	Object^ selectedItem = comboBox22->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Vt03", "Snow Peas_Mushroom", iqty, 520);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button29_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Vegetable::Buddha Delight

	int selectedIndex = comboBox21->SelectedIndex;
	Object^ selectedItem = comboBox21->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Vt04", "Buddha Delight", iqty, 420);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button28_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Vegetable::Family Bean Curd

	int selectedIndex = comboBox20->SelectedIndex;
	Object^ selectedItem = comboBox20->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Vt05", "Family Bean Curd", iqty, 695);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button41_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Drinks::Coca Cola

	int selectedIndex = comboBox54->SelectedIndex;
	Object^ selectedItem = comboBox54->SelectedItem;

//	String^ qty = selectedItem->ToString();
	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dk01", "Coca Cola", iqty, 100);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {

	// button click for Beef::Confirm

	// to display total price in label

	int total_price = bill->sum_tprice();

	String^ tp = System::Convert::ToString(total_price);

	this->label98->Text = tp;

}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {

	// button click for Beef::Confirm

	// to display total price in label

	int total_price = bill->sum_tprice();

	String^ tp = System::Convert::ToString(total_price);

	this->label98->Text = tp;

}
private: System::Void Button40_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Drinks::Banana Shake

	int selectedIndex = comboBox52->SelectedIndex;
	Object^ selectedItem = comboBox52->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dk02", "Banana Shake", iqty, 120);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button39_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Drinks::4 Mix Juices

	int selectedIndex = comboBox53->SelectedIndex;
	Object^ selectedItem = comboBox53->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dk03", "4 Mix Juices", iqty, 150);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button38_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Drinks::Milkshake

	int selectedIndex = comboBox51->SelectedIndex;
	Object^ selectedItem = comboBox51->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dk04", "Milkshake", iqty, 130);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button37_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Drinks::Mango Shake

	int selectedIndex = comboBox50->SelectedIndex;
	Object^ selectedItem = comboBox50->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dk05", "Mango Shake", iqty, 130);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button36_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Drinks::Lemon Shake

	int selectedIndex = comboBox49->SelectedIndex;
	Object^ selectedItem = comboBox49->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dk06", "Lemon Shake", iqty, 125);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button35_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Drinks::Lasi

	int selectedIndex = comboBox48->SelectedIndex;
	Object^ selectedItem = comboBox48->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dk07", "Lasi", iqty, 125);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button34_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Drinks::Cold Milk

	int selectedIndex = comboBox47->SelectedIndex;
	Object^ selectedItem = comboBox47->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dk08", "Cold Milk", iqty, 125);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button33_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Drinks::Tea

	int selectedIndex = comboBox46->SelectedIndex;
	Object^ selectedItem = comboBox46->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dk09", "Tea", iqty, 100);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button50_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Desserts::Sonh Halva

	int selectedIndex = comboBox63->SelectedIndex;
	Object^ selectedItem = comboBox63->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dt01", "Sonh Halva", iqty, 400);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button49_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Desserts::Russian Salad

	int selectedIndex = comboBox61->SelectedIndex;
	Object^ selectedItem = comboBox61->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dt02", "Russian Salad", iqty, 300);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button48_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Desserts::Simple Fruit Salad

	int selectedIndex = comboBox62->SelectedIndex;
	Object^ selectedItem = comboBox62->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dt03", "Simple Fruit Salad", iqty, 100);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button46_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Desserts::Traditional Apple Pie
	int selectedIndex = comboBox59->SelectedIndex;
	Object^ selectedItem = comboBox59->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dt05", "Traditional Apple Pie", iqty, 425);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button47_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Desserts::Chocolate Ice Cream
	int selectedIndex = comboBox60->SelectedIndex;
	Object^ selectedItem = comboBox60->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dt04", "Chocolate Ice Cream", iqty, 125);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button45_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Desserts::Strawberries Ice Cream
	int selectedIndex = comboBox58->SelectedIndex;
	Object^ selectedItem = comboBox58->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dt06", "Strawberries Ice Cream", iqty, 425);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button44_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Desserts::Cheese Cake Oof the Day
	int selectedIndex = comboBox57->SelectedIndex;
	Object^ selectedItem = comboBox57->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dt07", "Cheese Cake Oof the Day", iqty, 180);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button43_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Desserts::Chocolate Cake
	int selectedIndex = comboBox56->SelectedIndex;
	Object^ selectedItem = comboBox6->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dt08", "Chocolate Cake", iqty, 225);


	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Button42_Click(System::Object^ sender, System::EventArgs^ e) {
	// Button Click for Desserts::Snow Balls
	int selectedIndex = comboBox55->SelectedIndex;
	Object^ selectedItem = comboBox55->SelectedItem;

	String^ qty = selectedItem->ToString();

	//this->label8->Text = qty ;			// TODO: Comment later

	//string sqty = msclr::interop::marshal_as< string >(qty);	// convert qty to int 

	int iqty = System::Convert::ToInt32(qty);

	std::cout << "Int Qty = " << iqty << std::endl;

	bill->make_entry("Dt09", "Snow Balls", iqty, 250);



	bill->printBill();
	//MessageBox ^msg;

}
private: System::Void Customer_Info_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button12_Click_1(System::Object^ sender, System::EventArgs^ e) {

		// button click for order button

	String^ name = this->textBox1->Text;
	String^ mid = this->textBox2->Text;
	String^ tnum = this->textBox3->Text;
	//String^

	orderNow ^on = gcnew orderNow(this->label98->Text , name , mid , tnum);
	on->Show();

}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label65_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
