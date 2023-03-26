#include<bits/stdc++.h>
using namespace std;
int n;
map<int,int>m;
int main(){
    cin>>n;
    vector<pair<int,int>>p(n);
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)cin>>p[i].first,p[i].second=i;
    sort(v.rbegin(),v.rend());
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++){
        m[p[i].second]=v[i];
    }
    for(int i=0;i<n;i++)cout<<m[i]<<" ";
}