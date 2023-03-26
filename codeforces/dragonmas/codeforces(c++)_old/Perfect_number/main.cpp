#include<bits/stdc++.h>
using namespace std;
int k,i,n,s;
int perfect(int k){
    for(i=19;k>0;i++){
       s=0; n=i;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        if(s==10)k--;
    }
    return i-1;
}
int main(){
    cin>>k;
    cout<<perfect(k);
}
