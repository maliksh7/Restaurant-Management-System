#include <iostream>
#include <iomanip>
using namespace std;


struct node{
	string index;         // TODO: Change variable name
	string item_tag;
	int quantity;
	int total_price;
	node *next;
};

class bill_list{
	private:
		node *head;
		node *tail;
		int sum;
	public:
		bill_list();
		void make_entry(string index , string item_tag , int quantity , int total_price);
		int sum_tprice();
		void printBill();

		bool inBill(string itemName) {

			/*
			*	Function to see if an item already exists in the bill
			*/

			bool found = false;
			node* current = new node;
			current = head;

			while (current != NULL) {
				if (current->item_tag == itemName) {
					found = true;
					cout << "Item " << itemName << " found!!!" << endl;
				}

				current = current->next;
			}

			return found;

		}

		void updateQty(string itemName, int qty) {

			/*
			*	Function to update quantity of an
			*   already existing item in bill
			*/

			node* current = new node;
			current = head;

			while (current != NULL) {
				if (current->item_tag == itemName) {
					current->quantity = qty;
					return;
				}
				current = current->next;
			}

		}
		
		
			
};

bill_list::bill_list(){
	head = NULL;
	tail = NULL;
	sum = 0;
}

void bill_list::make_entry(string index , string item_tag , int quantity , int total_price){


	if (this->inBill(item_tag)) {
		/*
		*	If item already exists in list 
		*   then simply update quantity 
		*   no need to make another entry
		*/

		this->updateQty(item_tag, quantity);
		return;
	}
	else {
		cout << "Item not in bill " << endl;
	}

	node *temp = new node;      // create new node 
    temp->index = index;
    temp->item_tag = item_tag;
    temp->quantity = quantity;
    temp->total_price = total_price;
    temp->next = NULL; 
	
    if (head == NULL) {         // for when list is empty
        head = temp; 
        tail = temp; 
    } else {                    // for all other cases 
        node *current = new node; 
        current = head;
        
    	while(current->next != NULL) {
       		current = current->next;
		}
	
		current->next = temp;
    }
	
}

void bill_list::printBill() {
	
	node* temp = new node;
	temp = head;
	
	cout << "---------------------------------------- DISPLAYING CART ---------------------------------------------" << endl;
	 
	cout << "\nItemBar_Code\t\tITEM NAME\t\t  QUANTITY\t  TOTAL PRICE\t\t\t\n" << endl;
	while(temp != NULL) {
		cout << temp->index <<"\t\t" << temp->item_tag << "\t\t\t" << temp->quantity << "\t\t\t" << temp->total_price << endl;
		temp = temp->next;
	}
	cout << setfill ('-') << setw(100) <<endl;
	cout << endl;
	cout << "\nTotal Ammount = " << this->sum_tprice() << endl;
	
}

int bill_list::sum_tprice(){
	node *current = new node;
	this->sum = 0;
	current = head;
	while(current != NULL){
//		if(current == NULL)
//			return sum;
		this->sum += current->total_price * current->quantity;
		current = current->next;	
	}

	

	return this->sum;	
}
