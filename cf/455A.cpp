#include <iostream>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll freq[100001],dp[100001];
	int n,k,mx=-1;
	cin >> n;
	for(int i=0;i!=n;i++){
		cin >> k;
		freq[k]++;
		mx=max(mx,k);
	}
	dp[0]=0;
	dp[1]=freq[1];
	for(int i=2;i<=mx;i++){
		dp[i]=max(dp[i-2]+freq[i]*i,dp[i-1]);
	}
	cout << dp[mx] << '\n';
}
