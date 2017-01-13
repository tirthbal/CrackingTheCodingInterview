#include<bits/stdc++.h>
using namespace std;

// To check for unique characters in string , characters must be from a-z
bool unique(string S) {
	int bv = 0; // bit vector to track the occurence of characters [a-z]
	for ( int i = 0; i < S.length(); i++ ) {
		int bp = S[i] - 'a';
		if ( (bv >> bp) & 1) ) return false;
		bv |= (1 << bp );
	}
	return true;
}

bool check_and_set(int &b, int x) {
	if ( (b >> x) & 1) {
		return true;
	}
	b |= (1 << x);
	return false;
}
// To check for unique characters in string , characters can be from 256 ascii character
bool unique_from_all(string S) {
	long bv1 = 0, bv2 = 0, bv3 = 0, bv4 = 0;
	for (int i=0; i < S.length(); i++ ) {
		int bp = int(S[i]);
		int n_bv = bp/64;
		bp %= 64;
		if (n_bv == 0 ) {
			if ( check_and_set(bv1, bp)) return false;
		} 
		if (n_bv == 1) {
			if ( check_and_set(bv2, bp))  return false;
		}
		if (n_bv == 2) {
			if (check_and_set(bv3, bp)) return false;
		}
		if (n_bv == 3) {
			if (check_and_set(bv4, bp)) return false;
		}
	}
	return true;
}

int main() {
	string s ;
	cin >> s;
	cout << unique(s);
	return 0;
}