#include<bits/stdc++.h>
using namespace std;
string s,t;
int a,b,f;
int main(){
    int g=1;
    cin>>s;
    int k=s.size();
    while((k+g-1)/g>20)g++;
    int l=(k+g-1)/g;
    int m=l*g-k;
    int d=m/g;
    int e=m-d*g;
    for(int i=1;i<=g;i++){
        for(int j=1;j<=d;j++)t+='*';
        for(int j=d+1;j<=l-(e>0);j++)t+=s[f++];
        if(e)t+='*',e--;
        t+="\n";
    }
    cout<<g<<" "<<l<<endl<<t;
}
