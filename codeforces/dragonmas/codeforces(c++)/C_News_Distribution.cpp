#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000001],b[1000001];
int f(int i){
	return b[i]==i?i:b[i]=f(b[i]);
}
void solve(int n,int m){
	int k,x;
	for(int i=1;i<=m;i++){
		cin>>k;
		for(int j=1;j<=k;j++){
			cin>>x;
			b[f(x)]=f(n+i);
		}
	}
	for(int i=1;i<=n;i++)a[f(i)]++;
	for(int i=1;i<=n;i++)cout<<a[f(i)]<<" ";
}
int main(){
	cin>>n>>m;
	iota(b+1,b+n+m+1,1);
	solve(n,m);
}