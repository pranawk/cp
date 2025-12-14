//  B. Azamon Web Services

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        string s1,s2;
        cin>>s1>>s2;
        vector<int>v;
        for(int i=0; i<s1.size(); i++)v.push_back(s1[i]-'A');
        sort(v.begin(),v.end());
        //for(int i=0; i<s1.size(); i++)cout<<'A'+v[i].first<<" "<<v[i].second<<" ";
        for(int i=0; i<s1.size(); i++){
            if(s1[i]-'A'!=v[i]){
                int lastap=0;
                for(int j=0; j<s1.size(); j++)if(v[i]==s1[j]-'A')lastap=j;
                swap(s1[i],s1[lastap]);
                break;}
        }
        bool poss=true;
        int i=0,j=0;
        while(i<s1.size()&& j<s2.size()){
            if(s1[i]-'A'<s2[j]-'A')break;
            if(s1[i]-'A'>s2[j]-'A'){poss=false;break;}
            i++;j++;
            if(i==s1.size() && j!=s2.size())break;
            else if(i==s1.size())poss=false;
            else if(j==s2.size())poss=false;
        }
        //cout<<s1<<" ";
        if(poss==false)cout<<"---"<<endl;
        else cout<<s1<<endl;
    }
    
    return 0;
}
