#include<bits/stdc++.h>
using namespace std;
int t,n,a[8],b[8],s[8];
void solve(){
	int k=a[7],ans=1e9;
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			if(n%k==(b[i]+a[j])%k){
				ans=min(ans,8-i+j+(n-b[i]-a[j])/k*7);
			}
		}
	}
	cout<<ans;
}
int main(){
	for(cin>>t;t--;cout<<endl){
		cin>>n;
		for(int i=1;i<=7;i++)cin>>s[i],a[i]=a[i-1]+s[i];
		for(int i=7;i>=1;i--)b[i]=b[i+1]+s[i];
		solve();
	}
}