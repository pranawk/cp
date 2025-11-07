#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        string s;
        cin>>s;
        string ans;
        for(int i=0; i<s.size(); ){
            if(s[i]=='.'){ans+='0';i++;continue;}
            else if(s[i]=='-'){
                if(s[i+1]=='.'){ans+='1';i+=2;continue;}
                if(s[i+1]=='-'){ans+='2';i+=2;continue;}
            }
        }
        cout<<ans<<endl;
    return 0;
}