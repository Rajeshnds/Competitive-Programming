#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int k=n;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            k+=n/i;
            n/=i;
        }
    }
    cout<<k+(n>1);
}
