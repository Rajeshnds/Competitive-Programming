#include<bits/stdc++.h>
using namespace std;
int t,n,m,a,p,k,l,q;
main(){
    for(cin>>t;t--;){
        cin>>n;
        while(n--)cin>>a,a&1?k++:l++;
        cin>>m;
        while(m--)cin>>a,a&1?p++:q++;
        cout<<k*p+l*q<<endl;
    }
}
