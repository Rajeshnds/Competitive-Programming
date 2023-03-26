#include<bits/stdc++.h>
using namespace std;
int n,m,a;
main(){
scanf("%d:%d%d",&n,&m,&a);
printf("%02d:%02d",((n+(m+a)/60)+24)%24,(m+a)%60);
}
