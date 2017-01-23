#include<bits/stdc++.h>
using namespace std;

// This algorithm works only for sorted array having distinct integers
int magic_index(int arr[], int b, int e) {
	int mid = (b + e)/2;
	if (b > e) { return b;}
	if (arr[mid] == mid ) return mid;
	else if (arr[mid] > mid) return magic_index(arr, b, mid - 1);
	else return magic_index(arr, mid + 1, e);
}

// This algorithm will work for all sorted array
int magic_index_offset(int arr[], int n) {
	for (int i = 0; i < n;) {
		if (arr[i] < i) { i++; continue;}
		if (arr[i] == i) return i;
		if ( arr[i] > i) i += arr[i];
	}
	return n;
}

int main() {
	int n;
	cin >> n;
	int arr[n+2];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int res = magic_index_offset(arr, n);
	if (arr[res] == res) { cout << res <<"\n" ;}
	else { cout << -1 <<"\n" ;}
}