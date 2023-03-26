#include<bits/stdc++.h>
using namespace std;
int n,k,I,L,R;
int beauty(int n){
    int l[n+1],r[n+1];
    for(int i=1;i<=n;i++)cin>>l[i]>>r[i],L+=l[i],R+=r[i];
    k=abs(L-R);
    for(int i=1;i<=n;i++){
        if(abs((L-l[i]+r[i])-(R-r[i]+l[i]))>k)
            k=abs((L-l[i]+r[i])-(R-r[i]+l[i])),I=i;
    }
    return I;
}
int main(){
    cin>>n;cout<<beauty(n);
}
