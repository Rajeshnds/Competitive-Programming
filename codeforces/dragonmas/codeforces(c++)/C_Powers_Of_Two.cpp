#include<bits/stdc++.h>
using namespace std;
int n,k,a[200001],j;
void solve(){
    while(n>k&&k>0){
        int i=log2(n-k+1);
        a[j++]=1<<i;
        n-=1<<i;
        k--;
    }
    for(int i=0;i<k;i++)a[j++]=1;
    if(n-k)cout<<"NO";
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<j;i++)cout<<a[i]<<" ";
    }
}
int main(){
    cin>>n>>k;
    solve();
}