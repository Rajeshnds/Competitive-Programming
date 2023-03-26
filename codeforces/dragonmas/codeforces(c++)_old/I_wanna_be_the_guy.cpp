#include<bits/stdc++.h>
using namespace std;
int n,p,q,a;
set<int> s;
int main(){
cin>>n>>p;
while(p--){
    cin>>a;
    s.insert(a);
}
cin>>q;
while(q--){
    cin>>a;
    s.insert(a);
}
cout<<(n==s.size()?"I become the guy.":"Oh, my keyboard!");
return 0;
}
