#include<bits/stdc++.h>
using namespace std;
int a,b,c,s,m=1073741824;
int main(){
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                int d=i*j*k;
                for(int l=1;l*l<=d;l++){
                    if(d%l==0&&l*l==d)s=(s+1)%m;
                    else if(d%l==0)s=(s+2)%m;
                }
            }
        }
    }
    cout<<s;
}