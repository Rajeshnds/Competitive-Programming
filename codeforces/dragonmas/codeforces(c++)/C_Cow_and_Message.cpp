#include<bits/stdc++.h>
using namespace std;
long long m,b[26][26],a[26];
string s;
void solve(){
	for(int i=0;i<s.size();i++){
		for(int j=0;j<26;j++){
			b[j][s[i]-'a']+=a[j];
			m=max(m,b[j][s[i]-'a']);
		}
		m=max(m,++a[s[i]-'a']);
	}
	cout<<m;
}
int main(){
	cin>>s;
	solve();
}