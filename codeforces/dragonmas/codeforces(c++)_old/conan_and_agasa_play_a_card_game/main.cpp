#include<bits/stdc++.h>
using namespace std;
int n,b[100001],a[100001];
void read(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
}
void solve(){
    int f=0;
    for(int i=0;i<n;i++){
        if(b[a[i]]%2==1)f=1;
    }
   cout<<(f?"Conan":"Agasa");
}
int main(){
    read();
    solve();
}
