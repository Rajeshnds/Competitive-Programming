#include<bits/stdc++.h>
using namespace std;
int n,c,d,e,a[101][3],k;
string s[101],t,u,v,w;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k>>s[i];
        for(int j=1;j<=k;j++){
            cin>>t;
            if(t[0]==t[1]&&t[1]==t[3]&&
                    t[3]==t[4]&&t[4]==t[6]&&t[6]==t[7])
                a[i][0]++;

            else if(t[0]>t[1]&&t[1]>t[3]&&
                    t[3]>t[4]&&t[4]>t[6]&&t[6]>t[7])
                a[i][1]++;

            else a[i][2]++;

        }
         c=max(c,a[i][0]);
          d=max(d,a[i][1]);
          e=max(e,a[i][2]);
    }
    for(int i=1;i<=n;i++){
        if(a[i][0]==c)u+=" "+s[i]+",";
        if(a[i][1]==d)v+=" "+s[i]+",";
        if(a[i][2]==e)w+=" "+s[i]+",";
    }
    u[u.size()-1]='.';
    v[v.size()-1]='.';
    w[w.size()-1]='.';
    cout<<"If you want to call a taxi, you should call:"
       <<u<<endl;
    cout<<"If you want to order a pizza, you should call:"
       <<v<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, "
          "you should call:"<<w;
}
