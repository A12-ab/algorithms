#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
const int mx=310510;
int tree[mx];
void update(int node,int st,int en,int i,int j,int x){
     
}
int query(int node,int st,int en,int i,int j){
     
}
int main()
{
	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	#ifndef a 
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	for(int p=1; p<=t; p++){
		int choice,u,v,x;
		cin>>choice;
		for(int i=0; i<n; i++){
			
		}
		if(choice==1){
            cin>>u>>v>>x;
            update(1,1,n,u,v,x);
		}
		else{
			cout<<query(1,1,n,u,v)<<"\n";

		}
	}

   return 0;
}