#include<bits/stdc++.h>
using namespace std;
int n,a,x,m;
map<int,int>mp;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        mp[a]++;
        m=max(m,mp[a]);
    }
    cout<<n-m;
}
