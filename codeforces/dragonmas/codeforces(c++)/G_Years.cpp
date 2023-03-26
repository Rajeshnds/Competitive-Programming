#include<bits/stdc++.h>
using namespace std;
int n,s,t,k,a,b;
int main(){
    cin>>n;
    map<int,int>m;
    while(n--){
        cin>>a>>b;
        m[a]++;
        m[b]--;
    }
    for(auto i:m){
        k+=i.second;
        if(k>s)s=k,t=i.first;
    }
    cout<<t<<" "<<s;
}