#include<bits/stdc++.h>
using namespace std;
int n,a[101],m=-101,k,d;
void solve(){
    if(d==n||(n>1&&k==1&&d==n-1)){
        cout<<0;
    }
    else if(n==1&&k==1)cout<<m;
    else if(k%2==1){
        for(int i=0;i<n;i++){
            if(a[i]!=m&&a[i]!=0)cout<<a[i]<<" ";
            else if(a[i]==m)m=0;
        }
    }
    else{
        for(int i=0;i<n;i++)if(a[i]!=0)cout<<a[i]<<" ";
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0)k++,m=max(m,a[i]);
        else if(a[i]==0)d++;
    }
    solve();
}