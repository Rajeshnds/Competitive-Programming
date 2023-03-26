#include<bits/stdc++.h>
using namespace std;
int n,a,k,l,d,e;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a&1)k++,l=i;
        else d++,e=i;
    }
        cout<<(k==1?l:e);
}
