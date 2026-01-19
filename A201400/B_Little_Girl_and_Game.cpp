//  B. Little Girl and Game

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    vector<int>freq(26,0);
    for(int i=0; i<n; i++)freq[s[i]-'a']++;
    int oc=0;
    for(int i=0; i<26; i++)if(freq[i]%2==1)oc++;
    if(oc<=1)cout<<"First"<<endl;
    else{
        if(n%2==0)cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}
i