#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
int n,k;
main(){
cin>>n;
int a[n][n];
REP(i,0,n)REP(j,0,n)cin>>a[i][j];
REP(i,0,n){
REP(j,0,n){
if(a[i][j]!=1){
k=0;
REP(p,0,n){
REP(q,0,n){
if(a[i][j]==a[i][q]+a[p][j])k=1;
}
}
if(k==0){cout<<"NO";return 0;}
}
}
}
cout<<"YES";
}
