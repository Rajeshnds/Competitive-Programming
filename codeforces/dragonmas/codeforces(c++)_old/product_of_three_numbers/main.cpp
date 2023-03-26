#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        int k=sqrt(n),y=0,z=0;
        for(int i=2;i<=k;i++){
            if(n%i==0){
                n/=i;
                if(y==0)y=i;
                else z=i;
            }
            if(z)break;
        }
        if(n!=y&&n!=z&&z!=0)cout<<"YES\n"<<y<<" "<<z<<" "<<n<<endl;
        else cout<<"NO"<<endl;
    }
}
