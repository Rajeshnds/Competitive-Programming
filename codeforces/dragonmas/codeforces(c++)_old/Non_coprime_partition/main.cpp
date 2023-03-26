#include<bits/stdc++.h>
using namespace std;
int n,k;
int partitions(int n){
    if(n<=2)cout<<"No";
    else{
        int k=(n+1)/2;
        cout<<"Yes"<<endl<<1<<" "<<k<<endl<<n-1<<" ";
        for(int i=1;i<=n;i++)if(i!=k)cout<<i<<" ";
    }
}
int main(){
    cin>>n;partitions(n);
}
