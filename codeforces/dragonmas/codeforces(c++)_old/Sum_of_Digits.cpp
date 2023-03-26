#include<bits/stdc++.h>
using namespace std;
string s;
int d,k;
main(){
    cin>>s;
    while(s.size()!=1){
        k=0;
        for(char c:s)k+=(c-'0');
        s=to_string(k);
        d++;
    }
    cout<<d;
}

