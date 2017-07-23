#include <iostream>
using namespace std;

int main(){
	
	int A[10]={0},temp;
	for(int i=0; i<10; i++)
		cin>>A[i];

	for(int j=0; j<10; j++)
		for(int k=0; k<10-j-1; k++)
			{
				if(A[k]>A[k+1])
					{
						temp=A[k];
						A[k]=A[k+1];
						A[k+1]=temp;
					}
			}
		
	for(int i=0; i<10; i++)
		cout<<A[i]<<' ' ;
	return 0;

}
