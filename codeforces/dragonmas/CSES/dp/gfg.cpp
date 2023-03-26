string kPeriodic(string s, int k) {
    int n = s.size();
    sort(s.begin(), s.end());
    vector<int> m(26);
    for (int i = 0; i < n; i++) m[s[i] - 'a']++;
    
    int sz = 0, id = 0;
    string ans = string(n, '_');
    while(ans[id] == '_') {
        sz++;
        ans[id] = '.';
        id += k;
        id %= n;
    }
    for(auto it: m) if(it % sz != 0) return "-1";
    ans = string(n, '_');
    id = 0;
    int cnt = 0, val = 0;
    while(cnt != n) {
        while(ans[id] != '_') id++;
        while(!m[val]) val++;
        while(ans[id] == '_') {
            cnt++;
            ans[id] = 'a' + val;
            id += k;
            id %= n;
        }
        m[val] -= sz;
    }
    return ans;
}



// bool temp=true;
//         int r=0;
//         string u="";
//         int d=s.size();
//         k=k%d;
//         if(k%d==0){
//             sort(s.begin(),s.end());
//             return s;
//         }
//         int a[26]={0};
//         for(int i=0;i<s.size();i++){
//             a[s[i]-'a']++;
//         }
//         int x=0;
//         for(int i=0;i<26;i++){
//             x=__gcd(x,a[i]);
//         }
//         if(x==1){
//             temp=false;
//         }
//         else{
//             for(int i=0;i<26;i++){
//                 if(a[i])r++;
//                 if(a[i]%x!=0){
//                     temp=false;
//                 }
//                 a[i]=a[i]/x;
//             }
//             string t="";
//             for(int i=0;i<26;i++){
//                 if(a[i]){
//                     char c=i+'a';
//                     t+=string(a[i],c);
//                 }
//             }
//             int l=t.size();
//             if(k%l==0){
//                 int e=l;
//                 while(k%(e*2)==0&&d%(e*2)==0){
//                     e*=2;
//                 }
//                 for(int i=0;i<e/l;i++)u+=t;
//                 sort(u.begin(),u.end());
//                 t=u;
//                 u="";
//                 // l=e;
//                 // if(e>l){
//                 //     for(int i=0;i<e/l;i++)u+=t;
//                 //     sort(u.begin(),u.end());
//                 //     t=u;
//                 //     u="";
//                 //     for(int i=0;i<d/e;i++){
//                 //         u+=t;
//                 //     }
//                 // }
//                 // else{
//                     for(int i=0;i<d/e;i++){
//                         u+=t;
//                     // }
//                 }
//             }
//             else temp=false;
//         }
//         if(r==1){
//             return s;
//         }
//         else if(temp){
//             return u;
//         }
//         else{
//             return "-1";
//         }