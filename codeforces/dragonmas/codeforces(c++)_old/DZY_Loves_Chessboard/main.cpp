#include<bits/stdc++.h>
using namespace std;
void DZY_chess(int n,int m){
    char c;
    string s[101];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>c;
            if(c=='.'){
                if((i+j)%2==1)s[i]+='W';
                else s[i]+='B';
            }
            else s[i]+='-';
        }
    for(int i=0;i<n;i++)cout<<s[i]<<endl;

}
int main(){
    int n,m;
    cin>>n>>m;
    DZY_chess(n,m);
}
