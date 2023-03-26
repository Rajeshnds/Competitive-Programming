#include<bits/stdc++.h>
using namespace std;
int n,a[101],r;
string s;
int main(){
    cin>>n;
    char c;
    for(int i=0;i<n;i++)cin>>c,a[i+1]=a[i]+c-'0';
    for(int i=1;i<n;i++){
        for(int k=i,j=i+1;j<=n;j++){
            if(a[j]-a[k]==a[i]){
                a[j]==a[n]?r=1:k=j;
            }
        }
    }
    cout<<(r?"YES":"NO");
}