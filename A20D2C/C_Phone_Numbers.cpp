//  C. Phone Numbers

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s,ans;
    cin>>s;
    vector<int>alpha(26,0);
    for(int i=0; i<n; i++){
        alpha[s[i]-'a']=1;
    }
    int sl=0;
    int fl=0;
    int fa=26;
    for(int i=0; i<26; i++){
        if(alpha[i]==1){
            fa=min(fa,i);
            fl=i;
        }
    }
    if(k>n){
        for(int i=0; i<k-n; i++)s+=fa+'a';
        cout<<s;
        return 0;
    }
    if(k<n){
        for(int i=k-1; i>=0; i--){
            if(s[i]-'a'!=fl){
                int cc=s[i]-'a';
                for(int j=cc+1; j<26; j++){
                    if(alpha[j]==1){
                        s[i]=j+'a';
                        for(int l=i+1; l<k; l++)s[l]=fa+'a';
                        cout<<s.substr(0,k);
                        return 0;
                    }
                }
            }
        }
    }
    bool fln=false;
    for(int i=n-1; i>=0;i--){
        if(fln==false && s[i]-'a'!=fl){
            int cc=s[i]-'a';
            for(int j=cc+1; j<26; j++)if(alpha[j]==1){sl=j;break;}
            ans+='a'+sl;
            fln=true;
        }
        else if(fln==false)ans+='a'+fa;
        else ans+=s[i];
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}