#include<bits/stdc++.h>
using namespace std;

string remove_duplicates(string S){
	int bv = 0; // bit set to store occurence of a character in string or not
	for (int i = 0; i < S.length(); i++ ) {
		int bp = S[i] - 'a'; 
		if ( (bv >> bp) & 1) continue;
		bv |= (1 << bp);
	}
	string tmp = "";
	for (int cnt = 0; bv > 0; bv >>= 1, cnt++) {
		if (!(bv & 1)) continue;
		tmp += 'a' + cnt;
	}
	return tmp;
}


int main(){
	string S;
	cin>>S;
	cout<<remove_duplicates(S)<<"\n";
	return 0;
}