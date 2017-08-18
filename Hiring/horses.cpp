#include <iostream>
#include <vector>
using namespace std;

bool isMovePossible(vector<vector<int> > A, int x, int y, int n, int move) {
	if (move == 1 && ((x-2) < n  && (x-2) >= 0) &&  ((y-1) < n && (y-1) >= 0) && A[x-2][y-1] == 0) 
		return 1;
	else if (move == 2 && ((x-1) < n && (x-1) >= 0) &&  ((y-2) < n && (y-2) >= 0) && A[x-1][y-2] == 0)
		return 1;
	else 
		return 0;
}

void make_move(vector<vector<int> > A, int x, int y,int move) {
	// 1 = (x-2), (y-1)
	// 2 = (x-1), (y-2)
	if (move == 1) 
		A[x-2][y-1] = A[x][y];
	else
		A[x-1][y-2] = A[x][y];
	A[x][y] = 0;
}

bool isFinished(vector<vector<int> > A) {
	int n = A.size();
	for (int i = 0;i<n;i++)
		for (int j = 0;j<n;j++)
			if (A[i][j] != 0 && isMovePossible(A, i, j, n, 1) && isMovePossible(A, i, j, n, 2))
				return 0;
	return 1;
}

int change_player(int x) {
	return (x == 0 ? 1 : 0);
}

string solve (vector<vector<int> > A) {
	// 0 = ALICE , 1 = BOB
	int n = A.size(), player = 0, i, j;
	while (!isFinished(A)) {
		for (i = 0;i<n;i++) {
			for (j = 0;j<n;j++)
				if (A[i][j] != 0 && (isMovePossible(A, i, j, n, 1) || isMovePossible(A, i, j, n, 2) ))
					break;
			if (A[i][j] != 0 && (isMovePossible(A, i, j, n, 1) || isMovePossible(A, i, j, n, 2) ))
				break;
		}
		if (isMovePossible(A, i, j, n, 1))
			make_move(A, i, j, 1);
		else if (isMovePossible(A, i, j, n, 2))
			make_move(A, i, j, 2);
		player = change_player(player);
	}
	return (player ? "BOB" : "ALICE");
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++) {
        int N;
        cin >> N;
        vector<vector<int> > A(N, vector<int>(N));
        for (int i_A=0; i_A<N; i_A++)
        	for(int j_A=0; j_A<N; j_A++)
        		cin >> A[i_A][j_A];
        string out_;
        out_ = solve(A);
        cout << out_;
        cout << "\n";
    }
	return 0;
}