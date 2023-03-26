#include<bits/stdc++.h>
using namespace std;
int n,a[2002];
void read(){
    int b,c,m=0;
    cin>>n>>c;a[0]=c;
    for(int i=1;i<n;i++){
        cin>>b;
        if(__gcd(b,c)>1)a[i]=999999733,a[i+1]=b,n++,i++,m++;
        else a[i]=b;
        c=b;
    }
    cout<<m<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
int main(){
    read();
}
