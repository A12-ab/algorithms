#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	#ifndef a 
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif

	ll n,k,d;
	cin>>n>>k>>d;
	vector<int>a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	//vector dp(n+1,vector(k+1,vector<ll>(d,-1)));
	ll dp[n+1][k+1][d];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=k; j++){
			for(int k=0; k<=d; k++){
				dp[i][j][k]=-1;
			}
		}
	}
	dp[0][0][0]=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<k+1; j++){
			for(int k=0; k<d; k++){
				if(dp[i][j][k]==-1) continue;
				dp[i+1][j][k]=max(dp[i+1][j][k],dp[i][j][k]);
				if(j!=k){
					dp[i+1][j+1][(k+a[i])%d]=max(dp[i+1][j+1][(k+a[i])%d],dp[i][j][k]+a[i]);
				}
			}
		}
	}
	cout<<dp[n][k][0]<<endl;

}