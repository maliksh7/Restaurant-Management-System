#include <iostream>
#include <iomanip>
using namespace std;


struct node{
	int index;
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
		void make_entry(int index , string item_tag , int quantity , int total_price);
		int sum_tprice();
		void printBill();
		
		
			
};

bill_list::bill_list(){
	head = NULL;
	tail = NULL;
	sum = 0;
}

void bill_list::make_entry(int index , string item_tag , int quantity , int total_price){
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
	current = head;
	while(current != NULL){
//		if(current == NULL)
//			return sum;
		sum += ((current->total_price )* (current->quantity));
		current = current->next;	
	}
	return sum;	
}
