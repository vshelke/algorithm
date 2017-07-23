#include<iostream>
using namespace std;
int length = 0;
struct node {
	int data;
	struct node *next;
};

void insert_top(struct node*& head, int d){
	node* newnode = new struct node;
	newnode->data = d;
	newnode->next = head;
	head = newnode;
	length++;
}

void insert_pos(struct node*& head, int d, int pos) {
	if (pos > length)
		cout << "Position not found !!";
	else {
		int ctr = 0; 
		node* tmp = new struct node;
		node* tmp1 = new struct node;
		node* newnode = new struct node;
		newnode->data = d;		
		tmp = head;
		tmp1 = head->next;
		while (ctr < pos-1 ) {
		tmp = tmp->next;
		tmp1 = tmp1->next;ctr++;
		}
		tmp->next = newnode;
		newnode->next = tmp1;
		length++;		
	}
}

void insert_end(struct node*& head, int d) {
	node* tmp= new struct node;
	node* newnode = new struct node;	
	tmp = head;
	int ctr = 0;
	while (ctr < length){
		tmp = tmp->next;
		ctr++;}
	newnode->data = d;
	tmp->next = newnode;
	newnode = tmp;
	length++;
}

void display(struct node* head) {
	struct node* tmp = new struct node;
	tmp = head;
	while (tmp != NULL) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}		

int main() {
	struct node* head = new struct node;
	head == NULL;
	int opt = 100,tmp;

	while (opt) {
		cout <<"Eneter option\n";
		cout << "1.Insert(top)\n2.Insert(pos)\n3.Insert(End)\n4.Delete(top)\n5.Delete(pos)\n6.Delete(End)\n7.Display\n";
		cin >> opt;
		switch (opt) {
			case 1:cout <<"Data: " ;
				cin >> opt;
				insert_top(head,opt);
				break;
			case 2:cout <<"Data: " ;
				cin >> opt;				
				cout << "Position: ";
				cin >> tmp; 
				insert_pos(head,opt,tmp);
				break;
			case 3:cout <<"Data: " ;
				cin >> opt;
				insert_end(head,opt);
				break;
			/*case 4:cin >> tmp;
				delete_top(head);
				break;
			case 5:cout << "Position: ";
				cin >> tmp;
				delete_pos(head,tmp);
				break;
			case 6:cin >> opt;
				delete_end(head,opt);
				break;*/
			case 7:cout <<"Displaying Elements\n";
				display(head);
				break;
		}
/*		cout << "Continue ? ";
		cin >>opt;
  */     }
			
	return 0 ;
}
