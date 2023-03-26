#include<bits/stdc++.h>
using namespace std;
int n;
void read(){
    cin>>n;
}
void solve(){
    int l=0,b[101]={0};
    for(int i=max(1,n-100);i<n;i++){
        int j=i,k=0;
        while(j>0)k+=j%10,j/=10;
        if(n-i==k)b[l++]=i;
    }
        cout<<l<<endl;
        if(l){
        for(int i=0;i<l;i++)cout<<b[i]<<endl;
    }

}
int main(){
    read();
    solve();
}
