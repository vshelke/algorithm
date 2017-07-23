#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void insert(struct node*& head, int d) {
	if (head == NULL) {
		node* tmp = new struct node;
		tmp->data = d;
		tmp->next = head;
		head = tmp;
	}else {
		node* tmp = new struct node;
		node* tmp1 = new struct node;
		tmp1 = head;
		//tmp1 = tmp1->next;
		tmp->data = d;
		tmp->next = head;
		while (tmp1 != head)
			tmp1 = tmp1->next;
		tmp1->next = tmp;
	}
}



void display(struct node* head) {
	node* tmp  = new struct node;
	tmp = head;
	cout << tmp->data << "-->";
	tmp= tmp->next;
	while(tmp != head){
		cout << tmp->data << "-->";
		tmp = tmp->next;
	}
	cout << tmp->data << "-->";
}

int main()
{
	struct node* head = new struct node;
	head = NULL;
	int opt = 1,tmp,a;
	while (opt) {
		cin >> tmp;
		switch (tmp) {
			case 1:cout << "Insert\n";
			cin >>a;
				insert(head, a);
				break;
			default:display(head);
			break;
		}
	}
	return 0;
}
