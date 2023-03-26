#include<bits/stdc++.h>
using namespace std;
int r,c,k;
char s[101];
int main(){
    s[0]='.';
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>s[j];
        }
    }
    for(int i=1;i<=c;i++)if(s[i]=='B'&&s[i-1]!='B')k++;
    cout<<k;
}
