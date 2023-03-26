#include<bits/stdc++.h>
using namespace std;
int n,h,m,a[24][60],k;
main(){
    for(cin>>n;n--;){
        cin>>h>>m;
        a[h][m]++;
        if(a[h][m]>k)k++;
    }
    cout<<k;
}
