#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n;
string s;
vector<int>v;
void solve(){
	for(int i=0;i<n;i++){
		int r=i;
		while(s[i]==s[r+1])r++;
		v.push_back(r-i+1);
		i=r;
	}
	int p=0,ans=0;
	for(int i=0;i<v.size();i++){
		while(p<v.size()&&v[p]<=1)p++;
		if(v[i]>=2)ans++,v[i]=0;
		else if(v[i]==1){
			ans++;
			if(p<v.size())v[p]--;
			else i++;
		}
	}
	cout<<ans;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	for(cin>>t;t--;cout<<endl){
		cin>>n>>s;
		v.clear();
		solve();
	}	
}