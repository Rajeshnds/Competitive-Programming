#include<bits/stdc++.h>
using namespace std;
int x=100,t,h,m,a,b,d[10]={0,1,5,x,x,2,x,x,8,x};
char c;
int main(){
    for(cin>>t;t--;){
        cin>>h>>m>>a>>c>>b;
        while(true){
            int p=d[b%10]*10+d[b/10];
            int q=d[a%10]*10+d[a/10];
            if(p<h&&q<m){
                printf("%02d:%02d\n",a,b);
                break;
            }
            if(++b==m)b=0,a=(a+1)%h;
        }
    }
}
