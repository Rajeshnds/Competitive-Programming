#include<iostream>
using namespace std;
const int maxn=1e5+10;

int f[maxn];
int a[maxn];
int n,m;
long long ans;

int Find(int x) {
    return f[x]==x?x:f[x]=Find(f[x]);
}

int main()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        cin>>a[i],f[i]=i;
    for (int i=1,x,y;i<=m;i++)
        cin>>x>>y,f[Find(x)]=Find(y);
    for (int i=1;i<=n;i++)
        a[Find(i)]=min(a[Find(i)],a[i]);
    for (int i=1;i<=n;i++)
        if (i==Find(i)) ans+=a[i];
    cout<<ans<<endl;
    return 0;
}
