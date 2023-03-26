#include<bits/stdc++.h>
using namespace std;
long long t,n,s,a[100001],k,f,g,b,m,d;
int main(){
    for(cin>>t;t--;){
        cin>>n>>s;
        k=0;m=0;f=1;d=0;
        for(int i=1;i<=n;i++){
            cin>>b;
            if(b>m)m=b,g=i;
            k+=b;
            if(k>s&&f){
                f=0;
                if(b==m&&i<n)cin>>b,n--,k+=b;
                if(k-m<=s)d=g;
            }
        }
        cout<<d<<endl;
    }
}
