#include<bits/stdc++.h>
using namespace std;
int n,k=1;
main(){
    cin>>n;
    while(n--){
        if(k>0&&k<3){cout<<'a';k++;if(k==3)k=-1;}
        else cout<<'b',k++;
    }
}
