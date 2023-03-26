#include<bits/stdc++.h>
using namespace std;
long long n,k,l,t;
string s;
vector<long long>v(26);
int main(){
    cin>>n>>k>>s;
    for(int i=0;i<n;i++){
        v[s[i]-'A']++;
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<26;i++){
        l=min(k,v[i]);
        k-=l;
        t+=(l*l);
    }
    cout<<t;
}
