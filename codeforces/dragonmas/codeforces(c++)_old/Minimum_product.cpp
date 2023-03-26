#include<bits/stdc++.h>
using namespace std;
int n,k,l,m,p,d,a[201],b[201];
main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];
    for(int i=0;i<n;i++){
        k=0;l=0;m=0;p=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                if(b[i]>b[j])k++;
                if(b[i]<b[j])l++;
            }
            if(b[i]==b[j]){
                if(a[i]>a[j])m++;
                else if(a[i]<a[j])p++;
            }
        }
        if(k&&l&&m&&p)d++;
    }
    cout<<d;
}
