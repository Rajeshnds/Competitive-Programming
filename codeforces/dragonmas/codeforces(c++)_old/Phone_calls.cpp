#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
int n,k,m;
main(){
cin>>n;
string s[n];
REP(i,0,n)cin>>s[i];m=s[0].size();
REP(i,0,m){
REP(j,0,n){
    if(s[0][i]==s[j][i])k++;
    else {cout<<k/n;return 0;}
    }
}
cout<<k/n;
}
