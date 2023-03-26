#include<bits/stdc++.h>
using namespace std;
int n,m,a,b[51],c[51],p[3],k;
void solve(){
	for(int i=1;i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			int q[3]={b[i],b[j]-b[i],b[n]-b[j]};
			sort(q,q+3);
			if(p[0]==q[0]&&p[1]==q[1]&&p[2]==q[2])k++;
		}
	}
	for(int i=1;i<=m-2;i++){
		for(int j=i+1;j<=m-1;j++){
			int q[3]={c[i],c[j]-c[i],c[m]-c[j]};
			sort(q,q+3);
			if(p[0]==q[0]&&p[1]==q[1]&&p[2]==q[2])k++;
		}
	}
	cout<<k;
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a;
			b[i]+=a;
			c[j]+=a;
			if(i==n)c[j]+=c[j-1];
		}
		b[i]+=b[i-1];
	}
	cin>>p[0]>>p[1]>>p[2];
	sort(p,p+3);
	solve();
}