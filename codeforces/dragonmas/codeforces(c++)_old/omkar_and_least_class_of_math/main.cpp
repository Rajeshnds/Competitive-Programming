#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        k=1;
        for(int i=2;i*i<=n;i++)if(n%i==0)k=max(k,n/i);
        cout<<k<<" "<<n-k<<endl;
    }
}
