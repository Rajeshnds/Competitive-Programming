#include<bits/stdc++.h>
using namespace std;
int n,a,k=1000000001,c;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        int d=(a-i+n)/n;
        if(d<k)k=d,c=i;
    }
    cout<<c;
}