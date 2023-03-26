#include<bits/stdc++.h>
using namespace std;
int n,a;
main(){
    cin>>n;
    for(int i=-n;i<=n;i++){
        a=n-abs(i);
        for(int j=1;j<=abs(i);j++)cout<<"  ";
        for(int j=0;j<a;j++)cout<<j<<" ";
        for(int j=a;j>0;j--)cout<<j<<" ";
        cout<<0<<endl;
    }
}
