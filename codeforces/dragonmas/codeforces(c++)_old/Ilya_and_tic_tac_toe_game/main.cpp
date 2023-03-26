#include<bits/stdc++.h>
using namespace std;
string s[10];
string winning_Ilya(){
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(s[i][j]+s[i][j+1]+s[i][j+2]==286||s[i][j]+s[i+1][j]+s[i+2][j]==286||s[i][j]+s[i+1][j+1]+s[i+2][j+2]==286||s[i][j]+s[i+1][j-1]+s[i+2][j-2]==286)return "YES";
        }
    }
    return "NO";
}
int main(){
    cout<<winning_Ilya();
}
