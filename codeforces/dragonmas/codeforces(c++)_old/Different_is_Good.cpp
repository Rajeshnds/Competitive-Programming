#include<bits/stdc++.h>
using namespace std;
int n;
string t;
set<char>s;
main(){
    cin>>n>>t;
    for(char c:t)s.insert(c);
    int k=t.size()-s.size();
    cout<<(k+s.size()<=26?k:-1);
}
