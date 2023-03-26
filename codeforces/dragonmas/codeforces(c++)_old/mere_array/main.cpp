#include<bits/stdc++.h>
using namespace std;
int t,n,a[100001],c[100001];
int main(){
    for(cin>>t;t--;){
        cin>>n;
        int f=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[i]=a[i];
        }
        sort(c,c+n);
        for(int i=0;i<n;i++){
            if(a[i]!=c[i]&&a[i]%c[0])f=0;
        }
        cout<<(f?"YES":"NO")<<endl;
    }
}
