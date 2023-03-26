#include<bits/stdc++.h>
using namespace std;
int q,n;
string s;
main(){
for(cin>>q;q--;cout<<endl){
    cin>>n>>s;
    if(s.size()==2&&s[0]>=s[1])cout<<"NO";
    else {cout<<"YES"<<endl<<2<<endl<<s[0]<<" "<<s.substr(1);
    }
}
}
