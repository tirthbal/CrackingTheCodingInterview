#include<bits/stdc++.h>
using namespace std;

// Stringstream is just a another stream buffer like iostream , fstream 
// it is used mostly to parse the string inputted as get line

vector<string> split(string S, char delim) {
	stringstream ss;
	ss.str(S);
	vector<string> elems;
	string item;
	while (getline(ss, item, delim )) {
		elems.push_back(item);
	}
	return elems;
}


string replace_space_with_x(string S, string x) {
	vector<string> res = split(S, ' ');
	string ans = "";
	for ( auto i = res.begin(); i != res.end(); i++ ) {
		ans += ans == "" ? *i : x + *i;
	}
	return ans;
}

int main() {
	string basic, out, S = "";
	stringstream ss; 
	getline(cin, basic);
	ss<<basic; // ss.str(basic); both will set the content of basic in the stringstream buffer
	while(ss>>out) { S += S == "" ? out : " " + out; }
	cout<<S<<"\n";
	cout<<replace_space_with_x(S, "%20")<<"\n";
}