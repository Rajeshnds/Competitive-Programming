#include<bits/stdc++.h>
using namespace std;
int a[123],b[123];
string s,p;
void solve(){
    int f=1,ans=0,l=0;
    for(int i=p.size()-1;i<s.size();i++){
        a[s[i]]++;
        f=1;
        for(int j='a';j<='z';j++){
            if(a[j]>b[j]){f=0;break;}
        }
        if(f)ans++;
        a[s[l]]--;
        l++;
    }
    cout<<ans;
}
int main(){
    cin>>s>>p;
    if(p.size()>s.size()){return cout<<0,0;}
    for(int i=0;i<p.size();i++){
        if(i<p.size()-1)a[s[i]]++;
        b[p[i]]++;
    }
    solve();
}