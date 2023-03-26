#include<bits/stdc++.h>
using namespace std;
long long q,l,r,d;
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>l>>r>>d;
        cout<<(l>d?d:r+d-(r+d)%d);
    }
}
