#include<bits/stdc++.h>
using namespace std;
int n,m,k;
char c[101];
main(){
    for(cin>>n;n--;){
            k=0;
        cin>>c;
        sort(c,c+strlen(c));
        m=c[0];
    for(int i=0;i<strlen(c);i++)if(c[i]==m)m++,k++;
    cout<<(k==strlen(c)?"YES":"NO")<<endl;
    }
}
