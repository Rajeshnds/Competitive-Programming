#include<bits/stdc++.h>
using namespace std;
long long t,n,k,m,a;
int main(){
    for(cin>>t;t--;cout<<endl){
        map<int,int>mp;
        m=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a;
            mp[a%k]++;
            if(a%k)m=max(m,(mp[a%k]-1)*k+(k-a%k+1));
        }
        cout<<m;
    }
}