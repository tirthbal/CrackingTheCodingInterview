#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 1000

int solve(char seq[], int n) {
	int len  = strlen(seq);
	int dp[len + 2][n + 2];

	memset(dp, 0, sizeof(dp));
	
	dp[0][(int)(seq[0] - '0') % n]++;
	for (int i = 1; i < len; i += 1) {
		dp[i][(int)(seq[i] - '0') % n]++;
		for (int j = 0; j < n; j += 1) {
			int num = j*10 + (int)(seq[i] - '0');
			dp[i][j] += dp[i-1][j];
			if(!(num % n)) { cout<<num<<"\n";}
			dp[i][num % n] += dp[i-1][j];
		}
	}
	for (int i = 0; i < len; i += 1){
		for (int j = 0; j < n; j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	return dp[len - 1][0];
}

int main() {
	char seq[1000];
	int n;
	cin>>seq;
	cin>>n;
	cout<<solve(seq, n)<<"\n";
	return 0;
}