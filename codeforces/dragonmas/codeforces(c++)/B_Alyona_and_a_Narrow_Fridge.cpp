#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n,h,s;
int main(){
    cin>>n>>h;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        s=0;
        sort(v.rbegin(),v.rend());
        for(int j=0;j<=i;j++){
            if(j%2==0)s+=v[j];
            if(s>h)return cout<<i,0;
        }
    }
    cout<<n;
}