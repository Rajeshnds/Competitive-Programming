#include<bits/stdc++.h>
using namespace std;
int n,a[1001];
int main(){
    int c=0,b,f,d[1001]={0},j=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>b,a[i]=b-c,c=b;
    for(int k=1;k<=n;k++){
        f=1;
        for(int i=0;i<n;i++){
            if(a[i]!=a[i%k])f=0;
        }
        if(f){
            d[j++]=k;
        }
    }
    cout<<j<<endl;
    for(int i=0;i<j;i++)cout<<d[i]<<" ";
}
