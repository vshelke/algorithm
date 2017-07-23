#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
void cir_insert(node*& head, int data) {
	node* tmp1 = new node();
	tmp1->data = data;
	if (head == NULL) {		
		head = tmp1;
		tmp1->next = head;
	} else {
		node* tmp;
		tmp = head;
		while ( tmp->next != head)
			tmp = tmp->next;
		tmp1->next = tmp->next;
		tmp->next = tmp1;
	}
}
void del_neg(node*& head) {
	node* tmp;
	node* tmp1;
	tmp = head->next;
	tmp1 = head;
	while ( tmp!= head){ 
		if (tmp->data < 0 )
	tmp1->next = tmp->next;
	else
		tmp1 = tmp1->next;
	tmp = tmp->next; 
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
int main()
{
	int n,pos=10;	
	node* head;
	head = NULL;
	while (pos--) {
		cin >> n;			
		cir_insert(head,n);
		display(head);
		}
		del_neg(head);
		display(head);
	return 0;
}