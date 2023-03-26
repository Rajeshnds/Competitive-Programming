#include<bits/stdc++.h>
using namespace std;
int t,n,a[200001];
vector<int>vec;
vector<vector<int>>v;
bool dfs(int i){
	vec[i]=1;
	a[i]=1;
	for(auto j:v[i]){
		if(vec[j]==0)dfs(j);
		if(vec[j]==1)return false;
		if(j<i)a[i]=max(a[i],a[j]);
		else a[i]=max(a[i],a[j]+1);
	}
	vec[i]=2;
	return true;
}
void solve(){
	vec.assign(n+1,0);
	for(int i=1;i<=n;i++){
		if(vec[i]==0){
			bool ok=dfs(i);
			if(!ok){cout<<-1;return;}
		}
	}
	cout<<*max_element(a+1,a+n+1);
}
int main(){
	int k,l;
	for(cin>>t;t--;cout<<endl){
		cin>>n;
		v.assign(n+1,{});
		for(int i=1;i<=n;i++){
			cin>>k;
			for(int j=1;j<=k;j++){
				cin>>l;
				v[i].push_back(l);
			}
		}
		solve();
	}
}