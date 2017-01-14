#include<bits/stdc++.h>
using namespace std;

void reverse(char str[]) {
	int l = strlen(str), beg = 0, end;
	end = l - 1;
	for (; beg < end; beg++, end--) {
		char tmp = str[beg];
		str[beg] = str[end];
		str[end] = tmp;
	}
}

int main() {
	char str[100];
	cin>>str;
	reverse(str);
	cout<<str<<"\n";
}

