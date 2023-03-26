#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        long long a=0,b=0,k=0,l=1,m=0;
        for(int i=1;i<=n;i++){
            cin>>a;
            b+=a;
            if(b>m)m=b,k=i;
            if(b<=0)b=0,l=0;
        }
        cout<<(k==n&&l?"YES":"NO")<<endl;
    }
}
