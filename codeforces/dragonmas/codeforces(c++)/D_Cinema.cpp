#include<bits/stdc++.h>
using namespace std;
int a[101],n,maxf,minf,cmax[101],cmin[101];
void solve(){
    int j;
    for(int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i!=j&&cmax[j]>cmin[i])break;
        }
        if(j>n)cout<<0;
        else if(cmax[i]>=minf)cout<<2;
        else cout<<1;
        cout<<endl;
    }
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int c,p,q,d,r,notf,total,fav;
    string s;
    cin>>total>>fav;
    notf=total-fav;
    for(int i=1;i<=fav;i++)cin>>c,a[c]=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s>>d;
        p=0;q=0;r=0;
        for(int j=1;j<=d;j++){
            cin>>c;
            if(c==0)p++;
            else if(a[c])q++;
            else r++;
        }
        cmax[i]=min(fav,p+q);
        cmin[i]=q+max(0,p-(notf-r));   
        maxf=max(maxf,cmax[i]);
        minf=max(minf,cmin[i]);
    }
    solve();
}