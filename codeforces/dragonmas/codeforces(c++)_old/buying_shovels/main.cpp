#include<bits/stdc++.h>
using namespace std;
int t,n,k,l;
int main(){
    for(cin>>t;t--;){
        cin>>n>>k;
        l=n;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(i<=k)l=min(l,n/i);
                if(n/i<=k)l=min(l,i);
            }
        }
        cout<<l<<endl;;
    }
}
