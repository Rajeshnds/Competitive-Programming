#include<bits/stdc++.h>
using namespace std;
int n,k,m,a[100001],b[100001],d,f;
int main(){
    cin>>n>>k>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        d=a[i]%m;
        b[d]++;
        if(b[d]==k){
            cout<<"Yes"<<endl;
            while(i>=0){
                if(a[i]%m==d)cout<<a[i]<<" ";
                i--;
            }
            return 0;
        }
    }
        cout<<"No";
}