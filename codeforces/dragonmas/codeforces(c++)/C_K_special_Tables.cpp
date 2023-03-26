#include<bits/stdc++.h>
using namespace std;
int n,k,d=1,l,s;
int main(){
    cin>>n>>k;
    int l=n*(k-1)+1;
    s=n*(2*l+(n-k+1)*(n-1))/2;
    cout<<s<<endl;
    for(int i=1;i<=n;i++,cout<<endl){
        for(int j=1;j<=n;j++){
            if(j>=k){
                cout<<l++<<" ";
            }
            else cout<<d++<<" ";
        }
    }
}