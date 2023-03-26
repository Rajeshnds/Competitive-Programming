int n,k;cin>>n>>k;
string s;cin>>s;
int lens=n;
vector<pair<int,int>>se(26);//start end
int flag=0;
vector<int>fp(26);
map<int,int>mlp;
for(int i=0;i<n;i++){
  mlp[s[i]-'A']=i;
}
vector<int>lp;
for(auto it=mlp.begin();it!=mlp.end();it++){
    lp.pb(it->second);
}
sort(lp.begin(),lp.end());
int curractive=0;
set <char> active;
int ptr=0;
for(int i=0;i<n;i++){
    active.insert(s[i]);
    if(active.size()-ptr>k){
        cout<<"YES"<<endl;return;
    }
    if(i==lp[ptr]){
        ptr++;
    }
}
cout<<"NO"<<endl;
