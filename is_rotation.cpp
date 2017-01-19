#include<bits/stdc++.h>
using namespace std;

bool is_rotation(string ori, string test) {
	ori += ori;
	if (ori.find(test) != string::npos)
		return true;
	return false;
}


int main() {
	string ori, test;
	
	cout<<"Enter the original string:\n";
	cin>>ori;

	cout<<"Enter the test string:\n";
	cin>>test;

	string op = is_rotation(ori, test) ? "True" : "False";
	cout<<op<<"\n";

}