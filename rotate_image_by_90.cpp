#include<bits/stdc++.h>
using namespace std;

/*
Input
------
1 2 3 4    
5 6 7 8     
9 10 11 12

Output
------

4 8 12
3 7 11
2 6 10
1 5 9
*/

int **rotate_image_by_90(int image[][100], int rows, int cols) {
	int **ans = 0;
	ans = new int*[cols + 10];

	for(int i = 0; i < cols; i++){
		ans[i] = new int [rows];
		for(int j = 0 ; j < rows; j++)
			ans[i][j] = image[j][cols - 1 - i];
	}
	return ans;
}


void print(int **image, int rows, int cols) {
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++)
			cout<<image[i][j]<<" ";
		cout<<"\n";
	}
}


int main(){
	int image[100][100];
	int rows, cols;

	cout<<"Enter rows and cols for images"<<"\n";
	cin>>rows>>cols;

	cout<<"Enter the image matrix\n";
	for (int i=0; i < rows; i++)
		for (int j=0; j < cols; j++)
			cin>>image[i][j];

	int** rotated_image = rotate_image_by_90(image, rows, cols);
	print(rotated_image, cols, rows);
	
	return 0;
}