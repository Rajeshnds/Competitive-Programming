#include<bits/stdc++.h>
using namespace std;
int n,k,a[102],s;
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(a[1]<k){
        s++;
        for(int i=1;i<=n;i++){
            if(a[i]!=a[i+1])a[i]++;
        }
    }
    cout<<s;
}
