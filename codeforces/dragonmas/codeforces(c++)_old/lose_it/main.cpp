#include<bits/stdc++.h>
using namespace std;
int n,c,k,b[43],a[7];
int main(){
    cin>>n;
    b[4]=1;b[8]=2;b[15]=3;b[16]=4;b[23]=5;b[42]=6;
    for(int i=1;i<=n;i++){
        cin>>c;
        k=b[c];
        if(k==1)a[k]++;
        if(a[k-1]>0)a[k-1]--,a[k]++;
    }
    cout<<n-a[6]*6;
}
