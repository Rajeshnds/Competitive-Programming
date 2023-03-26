#include<bits/stdc++.h>
using namespace std;
int n,a,b,k=1,c,d;
main(){
cin>>n>>a>>b;n--;
        if(a!=b){cout<<"rated";return 0;}
        while(n--){
        cin>>c>>d;
        if(c!=d){cout<<"rated";return 0;}
        else{
            if(c+d>a+b)k=0;
            a=c;b=d;
        }
    }
    cout<<(k?"maybe":"unrated");
}
