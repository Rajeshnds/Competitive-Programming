#include<bits/stdc++.h>
using namespace std;
int n,a,b,l[367],m[367],t;
char c;
string s[367];
int party_people(){
    cin>>n;
    while(n--){
        cin>>c>>a>>b;
        for(int i=a;i<=b;i++)c=='M'?l[i]++:m[i]++;
    }
    for(int i=1;i<=366;i++)t=max(t,min(l[i],m[i]));
    return t*2;
}
int main(){
    cout<<party_people();
}
