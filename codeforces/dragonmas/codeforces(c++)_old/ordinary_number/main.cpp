#include<bits/stdc++.h>
using namespace std;
long long t,n,k,s,d;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        s=0;
        for(int i=1;i<=9;i++){
            k=i;
            d=1;
            while(k<=n){
                s++;
                d=d*10;
                k=i*d+k;
            }
        }
        cout<<s;
    }
}
