#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k>(n-1)/2)cout<<-1;
        else{
            cout<<1<<" ";
            for(int i=2;i<=k*2+1;i++){
                if(i%2==0)cout<<i+1<<" ";
                else cout<<i-1<<" ";
            }
            for(int i=k*2+2;i<=n;i++)cout<<i<<" ";
        }
        cout<<endl;
    }
}
