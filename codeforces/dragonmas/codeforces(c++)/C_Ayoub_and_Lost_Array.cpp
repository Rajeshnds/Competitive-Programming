#include<bits/stdc++.h>
using namespace std;
long long n,l,r,f[200001][3],a[3],m=1e9+7;
void solve(){
	f[0][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				f[i][j]=(f[i][j]+f[i-1][(j+k)%3]*a[k])%m;
			}
		}
	}
	cout<<f[n][0];
}
int main(){
	cin>>n>>l>>r;
	a[0]=r/3-(l-1)/3;
	a[1]=(r+2)/3-(l+1)/3;
	a[2]=(r+1)/3-l/3;
	solve();
}