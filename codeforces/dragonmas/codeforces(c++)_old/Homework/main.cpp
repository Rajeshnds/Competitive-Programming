#include<bits/stdc++.h>
using namespace std;
string s,t;
int n,a[26],p;
vector<pair<int,int>>v;
int main(){
    cin>>s>>n;
    for(int i=0;i<s.size();i++)a[s[i]-'a']++;
    for(int i=0;i<26;i++)if(a[i])p++;
    for(int i=0;i<26;i++)v.push_back({a[i],i});
    sort(v.begin(),v.end());
    for(int i=0;i<26;i++){
        if(v[i].first&&n>=v[i].first){
            n-=v[i].first;
            a[v[i].second]=0;
            p--;
        }
    }
    cout<<p<<endl;
    for(int i=0;i<s.size();i++)if(a[s[i]-'a'])cout<<s[i];
}
