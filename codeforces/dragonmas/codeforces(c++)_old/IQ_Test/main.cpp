#include<bits/stdc++.h>
using namespace std;
string s[4];
int k;
string square(){
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            k=0;
            if(s[i][j]=='#')k++;
            if(s[i][j+1]=='#')k++;
            if(s[i+1][j]=='#')k++;
            if(s[i+1][j+1]=='#')k++;
            if(k==0||k==1||k==3||k==4)return "YES";
        }
    }
    return "NO";
}
int main(){
    cout<<square();
}
