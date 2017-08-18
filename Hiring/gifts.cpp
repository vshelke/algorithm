#include <iostream>
using namespace std;

bool cmp(int a, int b) {
	return (a>b);
}

long long Gifts (int S[], int K, int n) {
	long long ans = 0;
	sort(S, S+n, cmp);
	int opti = S[n-K];
	for (int i = 0;i<n;i++) {
		if (i > (n-K))
			ans = ans + S[i];
		else
			ans = ans + opti;
	}
	return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, N, K;
    cin >> T;
    while (T--) {
        cin >> N;
        int S[N];
        for(int i_S=0; i_S<N; i_S++)
        	cin >> S[i_S];
        cin >> K;
        cout << Gifts(S, K, N) << '\n';
    }
}