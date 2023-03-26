#include<bits/stdc++.h>
using namespace std;
long long n,a[20001],m,s;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],m+=a[i];
    for(int i=1;i*3<=n;i++){
        if(n%i==0){
            for(int j=1;j<=i;j++){
                s=0;
                for(int k=j;k<=n;k+=i){
                    s+=a[k];
                }
                m=max(m,s);
            }
        }
    }
    cout<<m;

}