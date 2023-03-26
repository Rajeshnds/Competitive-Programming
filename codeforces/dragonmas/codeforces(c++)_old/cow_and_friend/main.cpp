#include<bits/stdc++.h>
using namespace std;
long long t,n,x,m,k,f;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>x;
        f=0;
        m=0;
        for(int i=1;i<=n;i++){
            cin>>k;
            if(k==x)f=1;
            m=max(m,k);
        }
        if(f)cout<<1;
        else if(m>x)cout<<2;
        else cout<<(x+m-1)/m;
    }
}
