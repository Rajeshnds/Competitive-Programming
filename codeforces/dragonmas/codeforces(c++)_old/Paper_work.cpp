#include<bits/stdc++.h>
using namespace std;
int n,j,a,k,b[102],l;
void folder(int n){
    while(n--){
        cin>>a;
        if(a<0)k++;
        if(k==3)b[j++]=l,k=1,l=0;
        l++;
    }
    b[j++]=l;
    cout<<j<<endl;
    for(int i=0;i<j;i++)cout<<b[i]<<" ";
}
int main(){
    cin>>n;
    folder(n);
}
