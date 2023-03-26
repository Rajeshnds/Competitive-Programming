#include<bits/stdc++.h>
using namespace std;
int x,y,a,b;
main(){
    cin>>x>>y>>a>>b;
    if(b>=a)a+=b-a+1;
    if(x>=a&&y>=b){
        for(int i=a;i<=x;i++){
            cout<<i<<" "<<b<<endl;
            for(int j=b+1;j<i;j++)cout<<i<<" "<<j<<endl;
        }
    }
}
