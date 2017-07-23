#include<iostream>
using namespace std;

int main() {
	int arr[100000]={0},key=0,i,j,n;
	cin >> n;
	for (i= n,j=0;i>=0; i--,j++)
		 arr[j] = i;
	for (i=1;i<n;i++) {
		key = arr[i];
		j=i-1;
		while (j>-1 && key < arr[j]) {
			arr[j+1] = arr[j];
			j--;
		}
	arr[j+1] = key;
	//cout << key <<' ';
	}
	for (i= 0;i<n; i++)
		cout << arr[i] <<' ';
	cout <<'\n';
return 0;
}
	
