#include <bits/stdc++.h>
using namespace std;
struct knap{
    double value;
    double weight;
};
bool cmp(knap a,knap b){
	double r1=a.value/a.weight;
	double r2=b.value/b.weight;
	return r1>r2;
}
void knapsack(knap ar[],int n,double w)
{
	sort(ar,ar+n,cmp);
	double final_val=0.0;
	for(int i=0; i<n; i++){
		if(ar[i].weight<=w){
			final_val+=ar[i].value;
			w-=ar[i].weight;
		}
		else{
			final_val+=((ar[i].value/ar[i].weight)*w);
		}
	}
	cout<<final_val<<endl;

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
	double w;
	cin>>n>>w;
	knap ar[n];
	for(int i=0; i<n; i++){
		cin>>ar[i].value>>ar[i].weight;
	}
	knapsack(ar,n,w);
}