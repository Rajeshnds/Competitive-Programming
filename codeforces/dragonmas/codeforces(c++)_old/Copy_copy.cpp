#include<bits/stdc++.h>
using namespace std;
int t,n,a;
main(){
cin>>t;
while(t--){
        set<int> c;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a,c.insert(a);
    cout<<c.size()<<endl;
}
return 0;
}
