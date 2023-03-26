#include<bits/stdc++.h>
using namespace std;
int t,n,c[3001],j;
string a,b;
int main(){
    for(cin>>t;t--;cout<<endl){
        j=0;
        cin>>n>>a>>b;
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i])c[j++]=i+1,c[j++]=1,c[j++]=i+1;
        }
        cout<<j<<" ";
        for(int i=0;i<j;i++)cout<<c[i]<<" ";
    }
}
