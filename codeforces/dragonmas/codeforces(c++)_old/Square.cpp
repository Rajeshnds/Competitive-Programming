#include<bits/stdc++.h>
using namespace std;
int t,a,b,c,d;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>a>>b>>c>>d;
cout<<(max(a,b)==max(c,d)&&max(a,b)==min(a,b)+min(c,d)?"YES":"NO");
}
}
