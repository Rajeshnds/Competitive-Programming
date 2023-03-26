#include<bits/stdc++.h>
using namespace std;
int t,n,a;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        int m=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a;
            mp[a]++;
            m=max(m,mp[a]);
        }
        if(m>n/2)cout<<n-(n-m)*2<<endl;
        else cout<<0+(n&1)<<endl;
    }
}