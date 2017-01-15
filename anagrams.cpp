#include<bits/stdc++.h>
using namespace std;

bool is_anagram(string S1, string S2) {
	int l1 = S1.length(), l2 = S2.length();
	int buf1[27] = {0}, buf2[27] = {0};
	if (l1 != l2) return false;
	for (int i = 0; i < l1; i++) {
		buf1[S1[i] - 'a'] += 1;
		buf2[S2[i] - 'a'] += 1;
	}
	for (int i = 0; i < 27; i++) {
		if (buf1[i] != buf2[i]) return false;
	}
	return true;
}


int main() {
	string S1, S2, out;
	cin>>S1>>S2;
	out = "" + S1 + " and " + S2;
	out = is_anagram(S1, S2) ? out + " are anagrams" : out + " are not anagrams";
	cout<<out<<"\n";
	return 0;
}