#include<bits/stdc++.h>
using namespace std;
int t,a,b,c;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b>>c;
        cout<<(a>=c?-1:1)<<" "<<(a<=c/b?-1:b);
    }
}
