//  B. Quasi Binary

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<string>aa;
    int n=s.size();
    for(int i=0; i<s.size(); i++){
        int sz=aa.size();
        for(int j=1; j<=s[i]-'0'; j++){
            if(j<=sz){
                int pp=aa[j-1].size();
                pp-=(n-i);
                aa[j-1][pp]='1';
            }
            else{
                string temp="1";
                for(int k=i+1; k<s.size(); k++)temp+='0';
                aa.push_back(temp);
            }
        }
//         for(int l=0; l<aa.size(); l++)cout<<aa[l]<<" ";
//         cout<<endl;
    }
    cout<<aa.size()<<endl;
    for(int i=0; i<aa.size(); i++)cout<<aa[i]<<" ";
    return 0;
}