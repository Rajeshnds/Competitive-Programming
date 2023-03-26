#include<bits/stdc++.h>
using namespace std;
int n,s,a[100001],b[100001];
void solve(){
    int i=1;
    s=abs(s);
    while(s){
        if(!b[i])a[i]++,s--;
        i++;
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<endl;
}
int main(){
    double x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[i]=floor(x);
        s+=a[i];
        if(a[i]==x)b[i]=1;
    }
    solve();
}