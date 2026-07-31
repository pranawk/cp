//  C. Long Beautiful Integer

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>num(n);
    for(int i=0; i<n; i++)num[i]=s[i]-'0';
    vector<int>a(k);
    for(int i=0; i<k; i++)a[i]=num[i];
    vector<int>ans(n),ans2(n);
    int ii=k-1;
    while(ii>=0){
        if(a[ii]!=9)break;
        ii--;
    }
    for(int i=0; i<n; i++){
        if((i)%k==(ii)%k){
            if(ii==-1){
                ans[i]=1;
            }
            else ans[i]=a[i%k]+1;
        }
        else{
            if(i%k>ii)ans[i]=0;
            else ans[i]=a[(i)%k];
        }
        ans2[i]=a[i%k];
    }
    bool fl=true;
    if(ii==-1)ans.push_back(0);
    for(int i=0; i<n; i++){
        if(ans2[i]>num[i])break;
        if(ans2[i]<num[i])fl=false;
    }
    if(fl==true){
        cout<<n<<endl;
        for(int i=0; i<n; i++)cout<<ans2[i];
        return 0;
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)cout<<ans[i];

    return 0;
}