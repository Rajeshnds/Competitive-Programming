#include<bits/stdc++.h>
using namespace std;
int n,s;
main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(s=1;s<=n-i;s++)cout<<" ";
        for(int j=1;j<=(i*2)-1;j++)cout<<"*";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(s=1;s<=n-i;s++)cout<<" ";
        for(int j=1;j<=(i*2)-1;j++)cout<<"*";
        cout<<endl;
    }
}

