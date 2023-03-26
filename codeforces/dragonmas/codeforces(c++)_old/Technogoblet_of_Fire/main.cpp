#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[101],b[101],c[101],d,l;
int new_school(){
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        cin>>c[i];
        b[c[i]]=max(b[c[i]],a[i]);
    }
    for(int i=1;i<=k;i++){
        cin>>d;
        if(a[d]<b[c[d]])l++;
    }
    return l;
}
int main(){
    cout<<new_school();
}
