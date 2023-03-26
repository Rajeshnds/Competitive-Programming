#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
set<int> s;
main(){
cin>>n>>m;
while(n--){
        cin>>a;
        while(a--){
            cin>>b;
            s.insert(b);
        }
}
cout<<(s.size()==m?"YES":"NO")<<endl;
}
