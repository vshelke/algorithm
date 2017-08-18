#include <iostream>
using namespace std;

void mergeSort(int arr[], int p, int q) {
	int mid = q/2;
	if (mid >= 1) {
		mergeSort(arr, p, mid);
		mergeSort(arr, mid+1, q);
		merge(arr, p, q, mid);
	}
}

void merge(int arr[], int p, int q, int mid) {
	
}



int main() {
	int n;
	int arr[n];
	for (i=0;i<n;i++)
		cin >> arr[i];
	mergeSort(arr, 0, n);
	for (i=0;i<n;i++)
		cout << arr[i] << " ";
	cout << '\n';
	return 0;
}