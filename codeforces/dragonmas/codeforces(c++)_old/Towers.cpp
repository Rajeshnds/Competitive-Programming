#include<bits/stdc++.h>
using namespace std;
int n,a,b[1001],k;
set<int> s;
main(){
    for(cin>>n;n--;)cin>>a,b[a]++,k=max(k,b[a]),s.insert(a);
    cout<<k<<" "<<s.size();
}

