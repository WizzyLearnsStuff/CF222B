#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;

	int *mem = new int[m * n];

	for (int i = 0; i < n; i++) 
	for (int j = 0; j < m; j++) {
		cin >> mem[i * m + j];
	}

	vector<int> rows(n);
	vector<int> cols(m);

	iota(rows.begin(), rows.end(), 0);
	iota(cols.begin(), cols.end(), 0);

	for (int i = 0; i < k; i++) {
		char c;
		int x, y;
		cin >> c >> x >> y;
		x--; y--;
		switch (c) {
			case 'r':
				swap(rows[x], rows[y]);
				break;
			case 'c':
				swap(cols[x], cols[y]);
				break;
			case 'g':
				cout << mem[rows[x] * m + cols[y]] << '\n';
				break;
		}
	}
}
