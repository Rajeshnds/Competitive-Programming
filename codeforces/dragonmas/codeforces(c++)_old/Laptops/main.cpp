#include<bits/stdc++.h>
using namespace std;
int n,a,b;
string s="Poor Alex";
void laptop(int a,int b,string &s){
    if(a!=b)s="Happy Alex";
}
int main(){
    for(cin>>n;n--;)cin>>a>>b,laptop(a,b,s);
    cout<<s;
}
