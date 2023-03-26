#include<bits/stdc++.h>
using namespace std;
int n,m;
string staircase(int n,int m){
    int a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    sort(a,a+m);
    if(a[0]==1||a[m-1]==n)return "NO";
    for(int i=0;i<m-2;i++)if(a[i]==a[i+1]-1&&a[i+1]==a[i+2]-1)return "NO";
    return "YES";
}
int main(){
    cin>>n>>m;cout<<staircase(n,m);
}
