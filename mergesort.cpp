#include <bits/stdc++.h>
using namespace std;
void merging(int ar[],int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int lar[n1];
	int rar[n2];

	for(int i=0; i<n1; i++){
		lar[i]=ar[p+i];
	}
	for(int i=0; i<n2; i++){
		rar[i]=ar[i+q+1];
	}
	int i=0,j=0,k=p;
	while(i<n1 && j<n2){
		if(lar[i]<=rar[j]){
			ar[k]=lar[i];
			i++;
		}
		else{
			ar[k]=rar[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		ar[k]=lar[i];
		i++;
		k++;
	}
	while(j<n2){
		ar[k]=rar[j];
		j++;
		k++;
	}
}
void merge(int ar[],int l,int r)
{
	if(l<r){
		int mid=l+(r-l)/2;
		merge(ar,l,mid);
		merge(ar,mid+1,r);
		merging(ar,l,mid,r);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	#ifndef a 
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}
	merge(ar,0,n);
	for(int i=0; i<n; i++){
		cout<<ar[i]<<" ";
	}
	return 0;
}