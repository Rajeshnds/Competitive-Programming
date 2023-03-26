#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;cin>>n>>k;double a,b,s=0,c,d;cin>>a>>b;n--;
while(n--){cin>>c>>d;s+=sqrt((a-c)*(a-c)+(b-d)*(b-d));a=c;b=d;}
cout<<fixed<<setprecision(9)<<(s*k)/50;
}

