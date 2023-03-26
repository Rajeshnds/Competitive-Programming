#include<bits/stdc++.h>
using namespace std;
int t,n,d;
vector<int>v1,v2;
long long calc(vector<int> v){
    long long k=0;
    for(int i=1,j=0;i<=n;i+=2,j++){
        k+=abs(i-v[j]);
    }
    return k;
}
void solve(){
    long long ans=0;
    if(d==1){
        ans=calc(v1);
    }
    else if(d==-1){
        ans=calc(v2);
    }
    else ans=min(calc(v1),calc(v2));
    cout<<ans;
}
int main(){
    int a;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        d=0;
        v1.clear();
        v2.clear();
        for(int i=1;i<=n;i++){
            cin>>a;
            if(a&1)v1.push_back(i),d++;
            else v2.push_back(i),d--;
        }
        if(abs(d)>1)cout<<-1;
        else solve();
    }
}