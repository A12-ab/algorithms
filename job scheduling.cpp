#include <bits/stdc++.h>
using namespace std;
struct job
{
	char id;
	int dline;
	int prft;
	
};
bool cmp(job a,job b){
	return (a.prft>b.prft);
}
void jobschedule(job ar[],int n)
{
	sort(ar,ar+n,cmp);
	int result[n];
	bool slot[n];

	for(int i=0; i<n; i++){
		slot[i]=false;
	}
	for(int i=0; i<n; i++){
		for(int j=min(n,ar[i].dline)-1; j>=0; j--){
			if(slot[j]==false){
				result[j]=i;
				slot[j]=true;
				break;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(slot[i]){
			cout<<ar[result[i]].id<<" ";
		}
	}

}

int main()
{
	/*ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	#ifndef a 
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif*/

	int n;
	cin>>n;
	job ar[n];
	for(int i=0; i<n; i++){
		cin>>ar[i].id>>ar[i].dline>>ar[i].prft;
	}
	jobschedule(ar,n);

}