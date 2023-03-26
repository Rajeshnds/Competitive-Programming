#include<bits/stdc++.h>
using namespace std;
int t,n,a;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        int s=0,b[200001]={0};
        for(int i=1;i<=n;i++){
            cin>>a;
            b[a]=1;
            for(int j=1;j<i;j++)if(b[max(0,a-j)])s++;
        }
        cout<<s<<endl;
    }
}
