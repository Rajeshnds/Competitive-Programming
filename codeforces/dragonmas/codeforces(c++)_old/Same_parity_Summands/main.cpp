#include<bits/stdc++.h>
using namespace std;
void odd_even(int n,int k){
    if(k>n)cout<<"NO"<<endl;
    else if((n-k+1)%2==1){
        cout<<"YES"<<endl;
        for(int i=1;i<k;i++)cout<<1<<" ";cout<<n-k+1<<endl;
    }
    else if(n%2==0&&n>=k*2){
        cout<<"YES"<<endl;
        for(int i=1;i<k;i++)cout<<2<<" ";cout<<n-(2*(k-1))<<endl;
    }
    else cout<<"NO"<<endl;
}
int main(){
    int t,n,k;
    for(cin>>t;t--;)cin>>n>>k,odd_even(n,k);
}
