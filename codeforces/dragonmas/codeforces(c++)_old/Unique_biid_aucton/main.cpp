#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    for(cin>>t;t--;){
        map<int,int>m;
        cin>>n;
        int b[n+1]={0},a[n+1],f=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            m[a[i]]=i;
            b[a[i]]++;
        }
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++){
            if(b[a[i]]==1){
                cout<<m[a[i]]<<endl;
                f=1;
                break;
            }
        }
        if(!f)cout<<-1<<endl;
    }
}
