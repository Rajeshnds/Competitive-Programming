#include<bits/stdc++.h>
using namespace std;
int r,d,n,l,x,y,R;
double k;
int proper_crust(){
    cin>>r>>d>>n;d=r-d;
    for(int i=0;i<n;i++){
        cin>>x>>y>>R;
        k=sqrt(x*x+y*y);
        if(k-R>=d&&k+R<=r)l++;
    }
    return l;
}
int main(){
    cout<<proper_crust();
}
