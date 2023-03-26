#include<bits/stdc++.h>
using namespace std;
int n,i;
set<int> x;
main(){
for(i=0;i<4;i++){
    cin>>n;
    x.insert(n);
}
cout<<i-x.size();
}
