#include<bits/stdc++.h>
using namespace std;
long long s,n,k,a,d=1,m=998244353,p;
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a>n-k){
            if(p)d*=(i-p),d%=m;
            p=i;
            s+=a;
        }
    }
    cout<<s<<" "<<d;
}
