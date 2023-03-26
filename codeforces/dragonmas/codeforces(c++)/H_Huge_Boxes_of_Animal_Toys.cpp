#include<bits/stdc++.h>
using namespace std;
int t,a,b,c,d;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b>>c>>d;
        if((a+b)%2==1&&(a||d))cout<<"Ya";
        else cout<<"Tidak";
        if((a+b)%2==1&&(b||c))cout<<" Ya";
        else cout<<" Tidak";
        if((a+b)%2==0&&(b||c))cout<<" Ya";
        else cout<<" Tidak";
        if((a+b)%2==0&&(a||d))cout<<" Ya";
        else cout<<" Tidak";
    }
}