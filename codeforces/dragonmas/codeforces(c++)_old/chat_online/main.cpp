#include<bits/stdc++.h>
using namespace std;
int p,q,l,r,a,b,f[2055],c,d,k,s[2005],w;
int main(){
    cin>>p>>q>>l>>r;
    for(int i=l;i<=r;i++)s[i]=1;
    for(int i=1;i<=p;i++){
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            f[j]=1;
        }
    }
    for(int i=1;i<=q;i++){
        cin>>c>>d;
        for(int j=l;j<=r;j++){
            for(int k=c+j;k<=d+j;k++){
                if(f[k]&&s[j])w++,s[j]=0;
            }
        }
    }
    cout<<w;
}
