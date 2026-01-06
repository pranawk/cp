#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string ss;
    int ii=0;
    for(int i=0; i<s.size(); i++){
        if(ii-2>=0&&ss[ii-2]==ss[ii-1]&&s[i]==ss[ii-1])continue;
        if(ii-3>=0&&ss[ii-1]==s[i]&&ss[ii-3]==ss[ii-2])continue;
        ss+=s[i];
        ii++;
    }
    cout<<ss<<endl;
    return 0;
}