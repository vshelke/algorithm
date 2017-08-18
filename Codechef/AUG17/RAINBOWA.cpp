#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i, n, t, j, mid = 0;
	bool flag = 0;
	cin >> t;
	while (t--) {
		flag = 0;
		cin >> n;
		int arr[n];
		cin >> arr[0];
		for (i = 1; i<n;i++) {
			cin >> arr[i];
			if (abs(arr[i] - arr[i-1]) > 1)	flag = 1; 
		}
		if (flag)
			cout << "no\n";
		else {
			mid = (n%2 == 0) ? (n/2)-1 : (n/2);
			for (i = 0, j = n-1; i<=mid;i++,j--)
				if (arr[i] != arr[j]) 
					break;
			cout << ((i == mid+1) ? "yes\n" : "no\n");
		}		
	}
	return 0;
}