#include<bits/stdc++.h>
using namespace std;
int h,m,a,b;
main(){
scanf("%d:%d %d:%d",&h,&m,&a,&b);
printf("%02d:%02d",(h-a-(b>m)+24)%24,(m-b+60)%60);
}
