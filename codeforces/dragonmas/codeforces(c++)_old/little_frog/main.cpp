#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i&1)cout<<(i+1)/2<<" ";
        else cout<<n-(i-1)/2<<" ";
    }
}
