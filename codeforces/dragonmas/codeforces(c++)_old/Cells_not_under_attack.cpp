#include<bits/stdc++.h>
using namespace std;
long long n,m,xi,yi;
set<long long>x,y;
main(){
cin>>n>>m;
for(int i=0;i<m;i++){
    cin>>xi>>yi;
    x.insert(xi);
    y.insert(yi);
        cout<<(n-x.size())*(n-y.size())<<endl;
}
}

