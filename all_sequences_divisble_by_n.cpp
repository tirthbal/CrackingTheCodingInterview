#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 1000

int solve(string seq, int n) {
	int dp[n + 2];
	memset(dp, 0, n + 1);
	for (int i = 0; i < seq.length(); i += 1) {
		for (int j = 0; j < n; j += 1) {
			int num = 10*j + (int)(seq[i] - '0');
			dp[num % n] += 1 ;
		}
	}
	return dp[0];
}

int main() {
	string seq;
	int n;
	cin>>seq>>n;
	cout<<solve(seq, n)<<"\n";
	return 0;
}