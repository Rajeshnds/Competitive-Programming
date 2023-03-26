#include<bits/stdc++.h>
using namespace std;
long long t,i,m,k,f,n,g;
signed main(){
    cin>>t;
    while(t--){
        cin>>n;
        m=1;
        f=n;
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                g=n;
                k=0;
                while(g%i==0)g/=i,k++;
                if(k>m)m=k,f=i;
            }
        }
        cout<<m<<endl;
        for(int i=1;i<m;i++)cout<<f<<" ",n/=f;cout<<n<<endl;
    }
}
