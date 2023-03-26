#include<bits/stdc++.h>
using namespace std;
int n,k,a;
set<int> s;
main(){
cin>>n;
while(n--){
    cin>>a;
    if(a==0)k=1;
    s.insert(a);
}
cout<<s.size()-k;
}
