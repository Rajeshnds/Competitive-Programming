#include<bits/stdc++.h>
using namespace std;
int t,n,k,f;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        while(true){
            k=n;
            f=1;
            while(k){
                if(k%3==2)f=0;
                k/=3;
            }
            if(f)break;
            n++;
        }
        cout<<n<<endl;
    }
}
