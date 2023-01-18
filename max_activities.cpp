#include <bits/stdc++.h>
using namespace std;
struct act{
    char id;
    int start;
    int finish;
};
bool cmp(act a,act b){
	return (a.finish<b.finish);
}
void max_act(act ar[],int n){
     sort(ar,ar+n,cmp);
     int cnt=1;
     int pnt=0;
     for(int i=1; i<n; i++){
     	if(ar[i].start>=ar[pnt].finish){
     		cnt++;
     		pnt=i;
     	}
     }
     cout<<cnt<<endl;

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
	act ar[n];
	for(int i=0; i<n; i++){
		cin>>ar[i].id>>ar[i].start>>ar[i].finish;
	}
	max_act(ar,n);

}