#include<bits/stdc++.h>
using namespace std;
int n,a[21];
void solve(){
	long long d,ans=0;
	for(int i=1;i<=n;i++){
		d=0;
		for(int j=0;j<20;j++){
			if(a[j])d+=(1<<j),a[j]--;
		}
		ans+=1ll*d*d;
	}
	cout<<ans;
}
int main(){
	int d;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>d;
		for(int j=0;j<20;j++){
			if(d&(1<<j))a[j]++;
		}
	}
	solve();
}
