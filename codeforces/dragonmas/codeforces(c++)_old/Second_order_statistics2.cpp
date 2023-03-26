#include<bits/stdc++.h>
using namespace std;
int n,a;
set<int> s;
main(){
for(cin>>n;n--;){
    cin>>a;
    s.insert(a);
}
if(s.size()>=2)cout<<*++s.begin();
else cout<<"NO";
}
