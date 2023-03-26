#include<bits/stdc++.h>
using namespace std;
int d,n,a,i=1,k;
int day(int d,int a){
    return d-a;
}
int main(){
    for(cin>>d>>n;i<n;i++){
        cin>>a;
        k+=day(d,a);
    }
    cout<<k;
}

