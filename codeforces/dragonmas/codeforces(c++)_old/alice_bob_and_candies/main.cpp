#include<bits/stdc++.h>
using namespace std;
int t,n,a[1001];
int main(){
    for(cin>>t;t--;){
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        int s=a[0],i=1,f=0,d=n-1,e=1,k=0,g=a[0];
        while(i<=d){
            if(e==1)e=0;
            while(s<=k&&i<=d)s+=a[i],g+=a[i++];
            if(s)e++;
            if(s<=k)break;
            k=0;
            while(k<=s&&d>=i)k+=a[d],f+=a[d--];
            if(k)e++;
            if(k<=s)break;
            s=0;
        }
        cout<<e<<" "<<g<<" "<<f<<endl;
    }
}
