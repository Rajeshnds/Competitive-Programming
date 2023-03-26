#include<bits/stdc++.h>
using namespace std;
long long j,t,n,k,a,b,l;
int main(){
    for(cin>>t;t--;){
        cin>>n>>k>>a;
        l=0;
        while(--n){
            cin>>b;
            j=(b*100+k-1)/k;
            if(a<j)l+=j-a,a=j;
            a+=b;
        }
        cout<<l<<endl;
    }
}
