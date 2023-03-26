#include<bits/stdc++.h>
using namespace std;
int n,m,a,l,b,c,i=1;
main(){
    for(cin>>n>>m;i<=n;i++){
        cin>>a;
            l=(a+m-1)/m;
            if(l>=b)b=l,c=i;
    }
    cout<<c;
}
