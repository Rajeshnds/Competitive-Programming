#include<bits/stdc++.h>
using namespace std;
int t,n,a,b;
string s;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>s;a=0;b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')a++;
        else b++;
    }
cout<<(min(a,b)%2?"DA":"NET");
}
}
