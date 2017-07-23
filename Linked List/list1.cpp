#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

void insert_beg(node*& head, int data) {
	node* newnode = new node();
	newnode->data = data;
	newnode->next = head;
	head = newnode;
}

void insert_pos(node*& head, int data,int pos) {
	int ctr = 1;
	if (pos==0) {
		node* tmp = new node();
		tmp->data = data;
		tmp->next = head;
		head = tmp;
	}else {
		node* tmp = new node();
		tmp = head;
		while (ctr != pos && tmp->next != NULL) {
			tmp = tmp->next;
			ctr++;
		}
		node* tmp1 = new node();
		tmp1->data = data;
		tmp1->next = tmp->next;
		tmp->next = tmp1;
	}
}

void cir_insert(node*& head, int data) {
	if (head == NULL) {
		node* tmp = new node();
		tmp->data = data;		
		head = tmp;
		tmp->next = head;
	}/*else if (pos == 0) {
		node* tmp = new node();
		tmp->data = data;
		tmp->next = head;
		head = tmp;
	} */else {
		node* tmp=new node();
		tmp = head;
		while ( tmp->next != head) {
			tmp = tmp->next;
		}
		node* tmp1 = new node();
		tmp1->data = data;
		tmp1->next = tmp->next;
		tmp->next = tmp1;
	}
}

void display(node* head) {
	node* tmp ;
	tmp = head;
	cout <<"-->"<< tmp->data ;
	tmp = tmp->next;
	while(tmp != head) {
		cout <<"-->"<< tmp->data ;
		tmp = tmp->next;
	}
	cout <<'\n';
}	

int main(int argc, char const *argv[])
{
	/* code */
	int n,pos;	
	node* head;
	head = NULL;
	while (1) {
		/*cin >> n;
		insert_beg(head,n);
		display(head);
		cout <<"Pos wala \n";*/
		cin >> n;			
		cir_insert(head,n);
		display(head);
	}
	return 0;
}
