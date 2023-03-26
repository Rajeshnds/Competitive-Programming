#include<bits/stdc++.h>
using namespace std;
int n,a[100001];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        while(a[i]%2==0)a[i]/=2;
        while(a[i]%3==0)a[i]/=3;
        if(a[i]!=a[0])return cout<<"NO",0;
    }
    cout<<"YES";
}
