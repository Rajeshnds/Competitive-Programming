#include<bits/stdc++.h>
using namespace std;
int h,w,k,s,l;
char c[502][502];
int main(){
    cin>>h>>w;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>c[i][j];
            if(c[i][j]=='*')s++;
        }
    }
    for(int i=1;i<=h&&k==0;i++){
        for(int j=1;j<=w&&k==0;j++){
            if(c[i][j]=='*'){
                for(int d=i;d<=h&&k==0;d++){
                    if(c[d][j+1]=='*'||c[d][j-1]=='*'){
                        if(c[d][j]=='*'&&c[d][j+1]=='*'
                                &&c[d][j-1]=='*'&&
                                c[d-1][j]=='*'&&
                                c[d+1][j]=='*'){
                            c[d][j]='1';
                            k=1;
                            while(c[d][j+k]=='*')k++,l++;
                            k=1;
                            while(c[d][j-k]=='*')k++,l++;
                            k=1;
                            while(c[d+k][j]=='*')k++,l++;
                            k=1;
                            while(c[d-k][j]=='*')k++,l++;
                            l++;
                        }
                    }
                }
            }
        }
    }
    cout<<(k&&s==l?"YES":"NO");
}
