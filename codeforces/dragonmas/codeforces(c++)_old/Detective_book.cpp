#include<bits/stdc++.h>
using namespace std;
int n,a,k,m,i=1;
main(){
    for(cin>>n;i<=n;i++){
        cin>>a;
        m=max(m,a);
        if(m<=i)k++;
    }
    cout<<k;
}
