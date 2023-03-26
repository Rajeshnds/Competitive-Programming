#include<bits/stdc++.h>
using namespace std;
int n,a=1,b;
int main(){
    cin>>n;
    for(int i=2;a<n;i++){
        b=1;
        for(int j=2;b<n-a;j++){
            b+=j;
        }
        if(a+b==n)return cout<<"YES",0;
        a+=i;
    }
    cout<<"NO";
}