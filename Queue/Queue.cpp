#include<iostream>

#define MAX 10
using namespace std;

int que[MAX] = {0},head = 0, tail = 0;
void enqueue(int x)
{
	que[tail] = x;
	if (tail == MAX-1)
		tail = 0;
	else 
		tail++;
}

int dequeue()
{
	int x;
	x = que[head];
	que[head] = 0;
	if (head == MAX-1)
		head = 0;
	else
		head++;
return x;
}

void display()
{
	for (int i = 0; i< MAX; i++)
		cout << que[i] << " ";
	cout <<'\n' << "HEAD = " << head << '\n' << "TAIL = " << tail <<'\n';
}


int main()
{
	int val;
 	int choice;
 	int option = 1;
		
	cout <<"QUEUE OPERATION\n";
    	while (option)
    	{
		cout <<"------------------------------------------\n";
		cout <<"      1    -->    ENQUEUE               \n";
		cout <<"      2    -->    DEQUEUE           \n";
		cout <<"      3    -->    DISPLAY               \n";
		cout <<"------------------------------------------\n";
	 	cout <<"Enter your choice\n";
		cin >> choice;
		switch (choice)
		{
		case 1:cin >> val;
		enqueue(val);	
		    break;
		case 2:
	      	cout << dequeue() << '\n';	
		    break;
		case 3:
		    display();
		    break;
	       }
		/*cout <<"Do you want to continue (1 or 0) ?"<< '\n';
		cin >> option;*/
		cout << '\n';		
     	}
	return 0;
}

	
