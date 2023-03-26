#include<bits/stdc++.h>
using namespace std;
int n,k,m;
string s;
main(){
cin>>n;
while(cin>>s){k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<91)k++;
    }
    m=max(m,k);
}
cout<<m;
}
