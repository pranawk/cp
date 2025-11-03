#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int year;
    cin>>year;
    year++;
    while(1){
        unordered_set<int>st;
        bool fl=true;
        string yeari=to_string(year);
        for(auto i: yeari){if(st.find(i-'0')!=st.end())fl=false;else{st.insert(i-'0');}}
        if(fl==true)break;
        year++;
    }
    cout<<year<<endl;
    return 0;
}