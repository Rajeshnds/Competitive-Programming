#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        int x=0,y=0;
        for(int j=i;j<n;j++){
            switch(s[j]){
             case 'U':x++;break;
             case 'D':x--;break;
             case 'L':y--;break;
             case 'R':y++;break;
            }
            if(x==0&&y==0)k++;
        }
    }
    cout<<k;
}
