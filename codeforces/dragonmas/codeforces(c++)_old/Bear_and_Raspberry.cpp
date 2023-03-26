#include<bits/stdc++.h>
using namespace std;
int n,c,m,a,b,i=1;
main(){
    for(cin>>n>>c>>a;i<n;i++){
        cin>>b;
        m=max(m,a-b);
        a=b;
    }
    cout<<max(0,m-c);
}
