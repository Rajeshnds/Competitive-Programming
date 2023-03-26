#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[14],v,t,k,l,m,b[14];
ll even_hole(){
    for(int i=0;i<14;i++)cin>>b[i];
    for(int i=0;i<14;i++){
        for(int j=0;j<14;j++)a[j]=b[j];
        t=a[i];a[i]=0;k=i+1;l=0;
        if(t>=14)for(int j=0;j<14;j++)a[j]+=t/14;
        t%=14;
        while(t--)a[k%14]++,k++;
        for(int j=0;j<14;j++)if(a[j]%2==0)l+=a[j];
        m=max(m,l);

    }
    return m;
}
int main(){
    cout<<even_hole();
}
