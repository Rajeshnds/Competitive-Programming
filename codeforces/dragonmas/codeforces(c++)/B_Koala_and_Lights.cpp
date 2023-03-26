#include<bits/stdc++.h>
using namespace std;
int n,a[101],b[101],r,k;
string s;
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++)cin>>a[i]>>b[i],k+=(s[i]=='1');
    r=k;
    for(int i=0;i<=125;i++){
        for(int j=0;j<n;j++){
            if(b[j]==i){
                s[j]^=1;
                s[j]=='1'?k++:k--;
                b[j]+=a[j];
            }
        }
        if(k>r)r=k;
    }
    cout<<r;
}