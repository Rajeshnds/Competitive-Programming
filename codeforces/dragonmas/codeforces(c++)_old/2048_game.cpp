#include<bits/stdc++.h>
using namespace std;
int q,n,a,s;
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n;s=0;
        while(n--){cin>>a;if(a<=2048)s+=a;}
        cout<<(s>=2048?"YES":"NO");
    }
}
