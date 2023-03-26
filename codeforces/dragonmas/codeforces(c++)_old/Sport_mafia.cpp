#include<bits/stdc++.h>
using namespace std;
int n,k,i=1,d,m,l;
main(){
    cin>>n>>k;
    while(l<k)l+=i,i++;
    d=l-k;l=k;
    m=d+i-1;
    while(m<n){
        d+=i;
        m+=i+1;
        i++;
    }
    cout<<d;
}
