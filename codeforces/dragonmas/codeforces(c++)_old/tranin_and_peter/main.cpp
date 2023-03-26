#include<bits/stdc++.h>
using namespace std;
string s,t,u;
int main(){
    int k=0,r=0,d=0,l=0;
    cin>>s>>t>>u;
    l=t.size();
    k=s.find(t);
    r=(k!=-1&&s.find(u,k+l)!=-1);
    reverse(s.begin(),s.end());
    k=s.find(t);
    d=(k!=-1&&s.find(u,k+l)!=-1);
    if(r&&d)cout<<"both";
    else if(r)cout<<"forward";
    else if(d)cout<<"backward";
    else cout<<"fantasy";
}
