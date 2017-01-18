#include<bits/stdc++.h>
using namespace std;

/*
Input
-----
1 2 3
2 1 0
1 2 4

Output
------
1 2 0
0 0 0
1 2 0
*/

void zero_matrix(){
	int matrix[100][100], rows, cols;

	cin>>rows>>cols;
	
	int row_map[rows + 1] = {0}, cols_map[cols + 1] = {0};
	
	for (int i = 0; i < rows; i += 1) {
		for (int j = 0; j < cols; j += 1) {
			cin >> matrix[i][j];
			if (!matrix[i][j]) row_map[i] = 1, cols_map[j] = 1;
		}
	}

	for (int i = 0; i < rows; i += 1) {
		for (int j = 0; j < cols; j += 1) {
			if (row_map[i] || cols_map[j]) matrix[i][j] = 0;
		}
	}

	for (int i = 0; i < rows; i += 1) {
		for (int j = 0; j < cols; j += 1) 
			cout<<matrix[i][j]<<" ";
		cout<<"\n";
	}
}


int main() {
	zero_matrix();
	return 0;
}
