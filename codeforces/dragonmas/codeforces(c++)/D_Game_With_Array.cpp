#include<bits/stdc++.h>
using namespace std;
int n,s;
int main(){
    cin>>n>>s;
    if(s/n==1)return cout<<"NO",0;
    int d=s/n;
    int e=s%n;
    cout<<"YES"<<endl;
    for(int i=1;i<=n-e;i++)cout<<d<<" ";
    for(int i=1;i<=e;i++)cout<<d+1<<" ";
    cout<<endl<<1;

}