#include<bits/stdc++.h>
using namespace std;
int n,m,k;
main(){
    cin>>n>>m;
    if(n<m)cout<<-1;
    else{
        k=(n+1)/2;
        cout<<k+(k%m?m-(k%m):0);
    }
}
