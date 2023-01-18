#include <bits/stdc++.h>
using namespace std;
int dp[3001][3001];
int lcs(string a,string b,int i,int j)
{

   if(i<0 || j<0) return 0;
   if(dp[i][j]!=-1) return dp[i][j];

   int ans=lcs(a,b,i-1,j);
   ans=max(ans,lcs(a,b,i,j-1));
   if(a[i]==b[j]){
   	   ans=max(ans,lcs(a,b,i-1,j-1)+1);
   }
   return dp[i][j]=ans;

}
int main()
{
	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	#ifndef a 
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
	string a,b;
	cin>>a>>b;
	int n=a.size()-1;
	int m=b.size()-1;
	memset(dp,-1,sizeof(dp));
	int ans=lcs(a,b,n,m);
    cout<<ans<<endl;
    int i=n,j=m;
    char s[ans];
    int idx=ans-1;
    while(i>0 && j>0){
    	if(a[i]==b[j]){
             s[idx]=a[i];
             idx--;
             i--;
             j--;
    	}
    	else if(dp[i-1][j]>dp[i][j-1]){
    		i--;
    	}
    	else{
    		j--;
    	}
    }
    for(int i=0; i<ans; i++){
    	cout<<s[i];
    }
    cout<<endl;
    for(int i=0; i<=n; i++){
    	for(int j=0; j<=m; j++){
    		cout<<dp[i][j]<<" ";
    	}
    	cout<<endl;
    }
    return 0;

}