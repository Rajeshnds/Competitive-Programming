#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,k;
int main(){
    for(cin>>t;t--;){
        cin>>n>>k;
        ll j=0,b[54]={0},a,f=1;
        for(int i=0;i<n;i++){
            j=0;
            cin>>a;
            while(a>0){
                b[j]+=(a%k);
                if(b[j]>1){f=0;break;}
                a/=k;
                j++;
            }
        }
        cout<<(f?"YES":"NO")<<endl;
    }
}