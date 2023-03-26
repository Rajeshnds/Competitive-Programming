#include<bits/stdc++.h>
using namespace std;
int n,k,a,b,t;
string s;
map<char,int>m;
main(){
for(cin>>n;n--;){
    cin>>s;
    m[s[0]]++;
}
for(auto i:m){
    k=i.second;
    a=k/2;
    b=k/2+(k%2);
    t+=(a*(a-1))/2+(b*(b-1))/2;
}
cout<<t;
}
