#include <iostream>
#include <string>
#include "Linklist(final).h"
#include <cstdio>

using namespace std;


bill_list bill;


class customer_info{
	private:
		string username;
		int ID;
	public:
		void set_username(string username);
		void get_username();
		void set_serialnum(int ID);
		void get_serialnum();
		
};

void customer_info::set_username(string username){
    this->username = username;
}

void customer_info::set_serialnum(int ID){
	this->ID = ID;
}

void customer_info::get_username(){
	cout << "Customer Name: " << username << endl;
	return ;
}

void customer_info::get_serialnum(){
	int id = this->ID;
	cout << "Customer's ID: " ;
	cout << id << endl;
	return ;
}


class Appetizers_Menu{

	public:
		void select_fitems();
		void display_Menu();	
};

void Appetizers_Menu::display_Menu(){
	cout << " <------------------------------------------------------->" << endl ;
	cout << "              >>Displaying Food Menu<<                             " << endl;
	cout << "*****************Appetizers Menu************************" << endl ;
	cout << "\tItems\t\t\t\tPrice " << endl;
	cout << "1. Egg Roll\t\t\t\tRs 280/-  \n"
		 << "2. Jumbo Fried Shrimp(4)\t\tRs 525/- \n"
		 << "3. Pop Sticker(6)\t\t\tRs 655/-  \n"
		 << "4. Crab Puff(6)\t\t\t\tRs 625/-  \n"
		 << "5. BBQ Pork Slices\t\t\tRs 295/-  \n";
	cout << "<-------------------------------------------------------->" << endl ;	 
}

void Appetizers_Menu::select_fitems() {
	while(true) {
		int opt , item_price , item_quantity ;
		string item_tag;
		float total_price = 0;
		cout << "Enter You Option from Appetizers Menu... \n" 
			 << "Enter b/w 1 to 5\n"
			 << "Press 0 to quit\n" << endl;
		cin >> opt;
		cout << "Enter Quantity of Selected Appetizer  " << endl;
		cin >> item_quantity;
		switch(opt){
			case 0:
				cout << "----> Quiting........" << endl;
				return;
			case 1:
				item_tag = "Egg Roll ";
				item_price = 280;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 2:
				item_tag = "Jumbo Fried Shrimp(4)";
				item_price = 525;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 3:
				item_tag = "Pop Sticker(6)";
				item_price = 655;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 4:
				item_tag = "Crab Puff(6)";
				item_price = 625;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 5:
				item_tag = "BBQ Pork Slices";
				item_price = 280;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			default :
				cout << "Invalid option , It doesn't Exists in Menu" << endl;				
		}
	//	cout << "Your Total Price W.R.T Quantity is " << opt << endl;
	}
	return;
}


class Soups_Menu{

	public:
		void display_Menu();
		void select_fitems();
			
};

void Soups_Menu::display_Menu(){
	cout <<"<---------------------------------------------->" << endl ;
	cout << "        >>Displaying Food Menu<<               " << endl;
	cout << "------------------Soups Menu-------------------" << endl ;
	cout << "Items\t\t\t\t\tPrice " << endl;
	cout << "1.Egg Drop Soup\t\t\t\tRs 525/-  \n"
		 << "2.Vegetable Tofu Soup\t\t\tRs 575/-  \n"
		 << "3.Hot & Sour Soup\t\t\tRs 650/-  \n"
		 << "4.Chicken Corn Chowder\t\t\tRs 665/-  \n"
		 << "5.Won Ton Soup\t\t\t\tRs 665/-  \n";
	cout <<"<--------------------------------------------->" << endl ;	 
	return;
}

void Soups_Menu::select_fitems(){
	while(true){
		int opt , item_price , item_quantity ;
		float total_price = 0;
		string item_tag;
		cout << "Enter You Option from Soups_Menu... \n"  
			 << "Enter b/w 1 to 5\nPress 0 to quit" << endl;
		cin >> opt;
		cout << "Enter Quantity of Selected Soups  " << endl;
		cin >> item_quantity;
		switch(opt){
			case 0:
				cout << "----> Quiting........" << endl;
				return;			
			case 1 :
				item_tag = "Egg Drop Soup";
				item_price = 525;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 2:	
				item_tag = "Vegetable Tofu Soup";
				item_price = 575;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 3:
				item_tag = "Hot & Sour Soup";
				item_price = 650;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 4:
				item_tag = "Chicken Corn Chowder";
				item_price = 665;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 5:
				item_tag = "Won Ton Soup";
				item_price = 665;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			default :
				cout << "Invalid option , It doesn't Exists in Menu" << endl;				
		}
	}	
	return;
}

class Chicken_Menu{

	public:
		void select_fitems();
		void display_Menu();
};

void Chicken_Menu::display_Menu(){
	cout <<"<------------------------------------------------------------------------>" << endl ;
	cout << "                     Displaying Food Menu<<       " << endl;
	cout << "------------------Chicken_Menu(Served with white rice)-------------------" << endl ;
	cout << "\tItems\t\t\t\tPrice " << endl;
	cout << "1.Fire Grilled Teriyaki Chicken\t\tRs 1280/-  \n"
		 << "2.Garlic Chicken(white meat)\t\tRs 1125/-  \n"
		 << "3.Chicken karahi\t\t\tRs 1325/-  \n"
		 << "4.Chicken Achari\t\t\tRs 1825/-  \n"
		 << "5.Green Chicken\t\t\t\tRs 1495/-  \n"
		 << "6.Chicken Ginger\t\t\tRs 1425/-  \n"
		 << "7.Chicken Handi(white)\t\t\tRs 1025/-  \n"
		 << "8.Chicken Handi\t\t\t\tRs 1325/-  \n"
		 << "9.Chicken Munchurin\t\t\tRs 1425/-  \n";
	cout <<"<------------------------------------------------------------------------->" << endl ;
	return;
}

void Chicken_Menu::select_fitems(){
	while(true){
		int opt , item_price , item_quantity ;
		float total_price = 0;
		string item_tag;
		cout << "Enter You Option from Chicken_Menu... \n"
			 << "Enter b/w 1 to 9\nPress 0 to quit" << endl;
		cin >> opt;
		cout << "Enter Quantity of Selected Chicken  " << endl;
		cin >> item_quantity;
		switch(opt){
			case 0:
				cout << "Quiting........" << endl;
				return;			
			case 1 :
				item_tag = "Fire Grilled Teriyaki Chicken";
				item_price = 1280;
				total_price += (item_price * item_quantity);
				bill.make_entry(opt , item_tag , item_quantity , total_price);
				break;
			case 2:
				item_tag = "Garlic Chicken(white meat)";
				item_price = 1125;
				total_price += (item_price * item_quantity);
				bill.make_entry(opt , item_tag , item_quantity , total_price);
				break;
			case 3:
				item_tag = "Chicken karahi";
				item_price = 1325;
				total_price += (item_price * item_quantity);
				bill.make_entry(opt , item_tag , item_quantity , total_price);
				break;
			case 4:
				item_tag = "Chicken Achari";
				item_price = 1825;
				total_price += (item_price * item_quantity);
				bill.make_entry(opt , item_tag , item_quantity , total_price);
				break;
			case 5:
				item_tag ="Green Chicken";
				item_price = 1495;
				total_price += (item_price * item_quantity);
				bill.make_entry(opt , item_tag , item_quantity , total_price);
				break;
			case 6:
				item_tag = "Chicken Ginger";
				item_price = 1425;
				total_price += (item_price * item_quantity);
				bill.make_entry(opt , item_tag , item_quantity , total_price);
				break;
			case 7:
				item_tag = "Chicken Handi(white)";
				item_price = 1025;
				total_price += (item_price * item_quantity);
				bill.make_entry(opt , item_tag , item_quantity , total_price);
				break;
			case 8:
				item_tag = "Chicken Handi";
				item_price = 1325;
				total_price += (item_price * item_quantity);
				bill.make_entry(opt , item_tag , item_quantity , total_price);
				break;
			case 9:
				item_tag = "Chicken Munchurin";
				item_price = 1425;
				total_price += (item_price * item_quantity);
				bill.make_entry(opt , item_tag , item_quantity , total_price);
				break;				
			default :
				cout << "Invalid option , It doesn't Exists in Menu" << endl;				
		}
	}	
	return;
}

class Beef_Menu{

	public:
		void select_fitems();
		void display_Menu();
			
};

void Beef_Menu::display_Menu(){
	
	cout <<"<--------------------------------------------------------------------->" << endl ;
	cout << ">>                  Displaying Food Menu                              " << endl;
	cout << "------------------Beef_Menu(Served with white rice)-------------------" << endl ;
	cout << "\tItems\t\t\t\tPrice " << endl;
	cout << "1.Monogolian Beef\t\t\tRs 1280/-  \n"
		 << "2.Tomato Beef\t\t\t\tRs 1335/-  \n"
		 << "3.Beef Karahi\t\t\t\tRs 1125/-  \n"
		 << "4.Beef Rosh\t\t\t\tRs 1425/-  \n"
		 << "5.Beef Dumpukt\t\t\t\tRs 1325/-  \n"
		 << "6.Beef BBQ\t\t\t\tRs 1825/-  \n";	
	cout <<"<--------------------------------------------------------------------->" << endl ;
	return;
}

void Beef_Menu::select_fitems(){
	while(true){
		int opt , item_price , item_quantity ;
		float total_price = 0;
		string item_tag;
		cout << "Enter You Option from Beef_Menu... \n" 
			 << "Enter b/w 1 to 6\nPress 0 to quit" << endl;
		cin >> opt;
		cout << "Enter Quantity of Selected Beef  " << endl;
		cin >> item_quantity;
		switch(opt){
			case 0:
				cout << "----> Quiting........" << endl;
				return;			
			case 1:
				item_tag = "Monogolian Beef";
				item_price = 1280;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 2:
				item_tag = "Tomato Beef";
				item_price = 1335;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 3:
				item_tag = "Beef Karahi";
				item_price = 1125;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 4:
				item_tag = "Beef Rosh";
				item_price = 1425;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 5:
				item_tag = "Beef Dumpukt";
				item_price = 1325;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 6:
				item_tag = "Beef BBQ";
				item_price = 1825;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			default :
				cout << "Invalid option , It doesn't Exists in Menu" << endl;				
		}
	}	
	return;
}

class Vegetables_Menu{

	public:
		void select_fitems();
		void display_Menu();
			
};

void Vegetables_Menu::display_Menu(){
	
	cout <<"<--------------------------------------------------------------------------->" << endl ;
	cout << "                        Displaying Food Menu                           " << endl;
	cout << "------------------Vegetables Menu(Served with white rice)-------------------" << endl ;
	cout << "\tItems\t\t\t\t\tPrice " << endl;
	cout << "1.Mix Vegetable\t\t\t\tRs 380/-  \n"
		 << "2.Curry Vegetable\t\t\tRs 425/-  \n"
		 << "3.Snow Peas & Mushroom\t\t\tRs 520/-  \n"
		 << "4.Buddha Delight\t\t\tRs 425/-  \n"
		 << "5.Family Bean Curd\t\t\tRs 695/-  \n";
	cout <<"<--------------------------------------------------------------------------->" << endl ;	 
}

void Vegetables_Menu::select_fitems(){
	while(true){
		int opt , item_price , item_quantity,item_code ;
		float total_price = 0;
		string item_tag;
		cout << "Enter You Option from Vegetables_Menu... \n" 
			 << "Enter b/w 1 to 5\nPress 0 to quit" << endl;
		cin >> opt;
		cout << "Enter Quantity of Selected Vegetables  " << endl;
		cin >> item_quantity;
		switch(opt){
			case 0:
				cout << "----> Quiting........" << endl;
				return;			
			case 1:
				item_tag = "Mix Vegetable";
				item_price = 380;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 2:
				item_tag = "Curry Vegetable";
				item_price = 425;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 3:
				item_tag = "Snow Peas & Mushroom";
				item_price = 520;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 4:
				item_tag = "Buddha Delight";
				item_price = 425;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 5:
				item_tag = "Family Bean Curd";
				item_price = 695;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			default :
				cout << "Invalid option , It doesn't Exists in Menu" << endl;				
		}
	}	
	return;
}

class Drinks_Menu{

	public:
		void select_fitems();
		void display_Menu();
			
};

void Drinks_Menu::display_Menu(){

	cout <<"<------------------------------------------------------------>" << endl ;
	cout << "              >>Displaying Food Menu<<                       " << endl;
	cout << "---------------------Drinks_Menu-----------------------------" << endl ;
	cout << "  Items\t\t\t\t\tPrice " << endl;
	cout << "1.Coca Cola\t\t\t\tRs 100/-  \n"
		 << "2.Banana Shake\t\t\t\tRs 120/-  \n"
		 << "3.4 Mix Juices\t\t\t\tRs 150/-  \n"
		 << "4.Milkshake\t\t\t\tRs 130/-  \n"
		 << "5.Mango Shake\t\t\t\tRs 130/-  \n"
		 << "6.Lemon Water\t\t\t\tRs 125/-  \n"
		 << "7.Lasi\t\t\t\t\tRs 125/-  \n"
		 << "8.Cold Milk\t\t\t\tRs 125/-  \n"
		 << "9.Tea\t\t\t\t\tRs 80/-   \n"
		 << "10.Coffee\t\t\t\tRs 225/-  \n"
		 << "11.Black Coffee\t\t\t\tRs 250/-  \n";
	cout <<"<------------------------------------------------------------->" << endl ;
}

void Drinks_Menu::select_fitems(){
	while(true){
		int opt , item_price , item_quantity , item_code ;
		float total_price = 0;
		string item_tag;
		cout << "Enter You Option from Drinks_Menu... \n" 
			 << "Enter b/w 1 to 11\nPress 0 to quit" << endl;
		cin >> opt;
		cout << "Enter Quantity of Selected Drinks  " << endl;
		cin >> item_quantity;
		switch(opt){
			case 0:
				cout << "----> Quiting........" << endl;
				return;			
			case 1 :
				item_tag = "Coca Cola";
				item_price = 100;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 2 :
				item_tag = "Banana Shake";
				item_price = 120;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 3:
				item_tag = "4 Mix Juices";
				item_price = 150;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 4:
				item_tag = "Milkshake";
				item_price = 130;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 5:
				item_tag = "Mango Shake";
				item_price = 130;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 6:
				item_tag = "Lemon Water";
				item_price = 125;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 7:
				item_tag = "Lasi";
				item_price = 125;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 8:
				item_tag = "Cold Milk";
				item_price = 125;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 9:
				item_tag = "Tea";
				item_price = 100;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;				
			case 10:
				item_tag = "Coffee";
				item_price = 225;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 11:
				item_tag = "Black Coffee";
				item_price = 250;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;				

			default :
				cout << "Invalid option , It doesn't Exists in Menu" << endl;				
		}
	}	
	return;
}

class Desserts_Menu{

	public:
		void select_fitems();
		void display_Menu();
			
};

void Desserts_Menu::display_Menu(){

	cout <<"<---------------------------------------------->" << endl ;
	cout << "               Displaying Food Menu            " << endl ;
	cout << "-----------------Desserts_Menu-----------------" << endl ;
	cout << "  Items\t\t\t\t\tPrice " << endl;
	cout << "1.Sonh Halva\t\t\t\tRs 400/-  \n"
		 << "2.Russian Salad\t\t\t\tRs 300/-  \n"
		 << "3.Simple Fruit Salad\t\t\tRs 100/-  \n"
		 << "4.Chocolate Ice Cream\t\t\tRs 125/-  \n"
		 << "5.Traditional Apple Pie\t\t\tRs 425/-  \n"
		 << "6.Strawberries Ice Cream\t\tRs 425/-  \n"
		 << "7.Cheese Cake of the Day\t\tRs 180/-  \n"
		 << "8.Chocolate Cake\t\t\tRs 225/-  \n"
		 << "9.Snow Balls\t\t\t\tRs 250/-  \n";
	cout <<"<---------------------------------------------->" << endl ;	 
}

void Desserts_Menu::select_fitems(){
	while(true){
		int opt , item_price , item_quantity ,item_code;
		float total_price = 0;
		string item_tag;
		cout << "Enter You Option from Desserts_Menu... \n" 
			 << "Enter b/w 1 to 9\nPress 0 to quit" << endl;
		cin >> opt;
		cout << "Enter Quantity of Selected Desserts   " << endl;
		cin >> item_quantity;
		switch(opt){
			case 0:
				cout << "----> Quiting........" << endl;
				return;			
			case 1 :
				item_tag = "Sonh Halva";
				item_price = 400;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 2:
				item_tag = "Russian Salad";
				item_price = 300;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 3:
				item_tag = "Simple Fruit Salad";
				item_price = 100;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 4:
				item_tag = "Chocolate Ice Cream";
				item_price = 125;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 5:
				item_tag = "Traditional Apple Pie";
				item_price = 425;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 6:
				item_tag = "Strawberries Ice Cream";
				item_price = 425;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 7:
				item_tag = "Cheese Cake of the Day";
				item_price = 180;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 8:
				item_tag = "Chocolate Cake";
				item_price = 225;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;
			case 9:
				item_tag = "Snow Balls";
				item_price = 250;
				total_price += (item_price * item_quantity);
				bill.make_entry( opt , item_tag , item_quantity , total_price );
				break;				
			default :
				cout << "Invalid option , It doesn't Exists in Menu" << endl;				
		}
	}	
	return;
}


class Ordering_system{

	public:
		void set_order();
		
};

void Ordering_system::set_order(){
	
	Appetizers_Menu am;
	Soups_Menu sm;
	Chicken_Menu cm;
	Beef_Menu bm;
	Vegetables_Menu vm;
	Drinks_Menu dm;
	Desserts_Menu dsm;
	
	int choice;
	cout << "-------> Choice Food Item Among the Following <--------\n" << endl;
	cout << "1.Appetizers Menu  \n"
		 << "2.Soups Menu       \n"
		 << "3.Chicken Menu     \n"
		 << "4.Beef Menu        \n"
		 << "5.Vegetables Menu  \n"
		 << "6.Drinks Menu      \n"
		 << "7.Desserts Menu    \n";
	cout << "---------------------------------------------------------" << endl;	
	bool Exitflag = false;	 		 
	while(!Exitflag){
		cout << "\nChoose b/w 1-7 " << endl;
		cout << "NOTE: Press 0 to quit out of the Menu..." << endl;	
		cin >> choice;
		if(choice == 0){
			cout << "\nExiting out of the Menu !\nGoodBye...! :D\n" << endl;
			Exitflag = true;
			break;
			return;
		}
		else if(choice == 1){
		
			am.display_Menu();
			am.select_fitems();	
		}
		else if(choice == 2){
		
			sm.display_Menu();
			sm.select_fitems();
		}
		else if(choice == 3){
			
			cm.display_Menu();
			cm.select_fitems();
		}
		else if(choice == 4){
		
			bm.display_Menu();
			bm.select_fitems();
		}
		else if(choice == 5){
		
			vm.display_Menu();
			vm.select_fitems();
		}
		else if(choice == 6){
		
			dm.display_Menu();
			dm.select_fitems();
		}
		else if(choice == 7){
		
			dsm.display_Menu();
			dsm.select_fitems();
		}
		
		if (Exitflag == false)
			set_order();
		else
			break;					
	}
	
	return;
}


class instant_order_preview{

	public:
		void display_instant_order();	
		
};

void instant_order_preview::display_instant_order(){
	Ordering_system os;
	os.set_order();
}


class cal_bill{

	public:
		void display_bill();

};

void cal_bill::display_bill(){
	
	cout << "\n ************************TOTAL BILL************************* \n" << endl;
	bill.printBill();

}





/*
class Graphics_interface{
	private:
		
	public:
		Graphics_interface();
		//do not about it much....but My project will have graphics interface	
};
// My Project will handle more or less all these features.....
*/

int main(){

	//-------------> customer_info class starts here <----------------
	
	customer_info obj;
	int User_ID ; string name ;
    cout << "Enter Customer Name: " << endl;
	getline(cin , name);
	
	cout << "Enter Customer's ID: " << endl;
	cin >> User_ID;
	
	
	obj.set_username(name);
	obj.set_serialnum(User_ID);
	
	obj.get_username();
	obj.get_serialnum();
	
	//------------> customer_info class ends here <----------------

	
	
	//-------------> instant_order_preview class starts here <----------------
		
	instant_order_preview iop;
	iop.display_instant_order();	
		
		
	//-------------> instant_order_preview class starts here <----------------	
	
	
	//-------------> cal_bill class starts here <----------------
	
 
	cal_bill cb;
	cb.display_bill();
	
	
	//-------------> cal_bill class starts here <----------------
	
	return 0;
}
