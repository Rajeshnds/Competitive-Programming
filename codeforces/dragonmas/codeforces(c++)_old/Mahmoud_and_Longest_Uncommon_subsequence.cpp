#include<bits/stdc++.h>
using namespace std;
string a,b;
int i=-1;
main(){
    cin>>a>>b;
    if(a==b)cout<<-1;
    else cout<<max(a.size(),b.size());
}
