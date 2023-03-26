#include<bits/stdc++.h>
using namespace std;
long long j,l,x,k,n,c[200001];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>c[i];
    for(int i=0;i<n;i++){
        cin>>x;
        c[i]-=x;
    }
    sort(c,c+n);
    j=n-1;
    // for(int i=n-1;i>0;i--){
    //     for(int j=i-1;j>=0;j--){
    //         if(c[i]+c[j]>0){k+=j+1;break;}
    //     }
    // }
    while(l<j){
        if(c[j]+c[l]>0)k+=(j-l),j--;
        else l++;
    }
    cout<<k;
}