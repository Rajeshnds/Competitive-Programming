#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        int k=0;
        for(int i=1;i<=n;i++){
            k=i-1;
            for(int j=1;j<=k;j++){
                cout<<"()";
            }
            for(int j=1;j<=n-k;j++){
                cout<<'(';
            }
            for(int j=1;j<=n-k;j++){
                cout<<')';
            }
            cout<<endl;
        }
    }
}