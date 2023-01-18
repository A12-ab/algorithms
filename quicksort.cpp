#include <bits/stdc++.h>
using namespace std;
int partition(int ar[],int l,int h)
{
	int pvt=ar[l];
	int i=l,j=h;
	while(i<j){
		do{
			i++;
		}while(ar[i]<=pvt);
		do{
			j--;
		}while(ar[j]>pvt);

		if(i<j){
			swap(ar[i],ar[j]);
		}
	}
	swap(ar[l],ar[j]);
	return j;

}
void qcksort(int ar[],int l,int h)
{
	if(l<h){
		int j=partition(ar,l,h);
		qcksort(ar,l,j);
		qcksort(ar,j+1,h);
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
     int ar[n+1];
     for(int i=0; i<n; i++){
     	cin>>ar[i];
     }
     ar[n]=INT_MAX;
     qcksort(ar,0,n);
     for(int i=0; i<n; i++){
     	cout<<ar[i]<<" ";
     }

}