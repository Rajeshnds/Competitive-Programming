#include<bits/stdc++.h>
using namespace std;
int n,l;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        int k=2*n-i+1;
        for(int j=2;j<=n;j++){
            if(j%2==0){
                cout<<k<<" ";
            }
            else{
                cout<<k+1<<" ";
            }
            k+=n;
        }
        cout<<endl;
    }
}