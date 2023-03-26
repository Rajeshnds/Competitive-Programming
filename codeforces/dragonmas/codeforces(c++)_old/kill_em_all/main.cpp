#include<bits/stdc++.h>
using namespace std;
long long q,n,r,a[100001],b,j,k;
int main(){
    for(cin>>q;q--;){
        set<int>s;
        j=0;
        k=1;
        cin>>n>>r;
        for(int i=1;i<=n;i++)cin>>b,s.insert(b);
        for(auto i:s)a[++j]=i;
        sort(a+1,a+j+1);
        j--;
        while(a[j]-r*k>0&&j>0)k++,j--;
        cout<<k<<endl;
    }
}
