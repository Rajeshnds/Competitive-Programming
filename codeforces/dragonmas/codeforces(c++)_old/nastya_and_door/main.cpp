#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[200001];
int main(){
    for(cin>>t;t--;){
        int m=0,f=1,b[200001]={0};
        cin>>n>>k;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=2;i<=n-1;i++){
            b[i]=(a[i]>a[i-1]&&a[i]>a[i+1])+b[i-1];
        }
        int j=1;
        for(int i=k;i<=n;i++){
            if(b[i-1]-b[j]>m)m=b[i-1]-b[j],f=j;
            j++;
        }
        cout<<m+1<<" "<<f<<endl;
    }
}
