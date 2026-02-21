#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int> oc, zc;
        for(int i=0; i<n; i++){
            if(s[i]=='1') oc.push_back(i+1);
            else zc.push_back(i+1);
        }
        if(oc.size()==0){cout<<0<<endl;continue;}
        if(oc.size()%2==0){
            cout<<oc.size()<<endl;
            for(int i:oc) cout <<i<< " ";
            cout << endl;
        }
        else if(zc.size() % 2 != 0){
            cout << zc.size() << endl;
            for(int i:zc) cout <<i<< " ";
            cout << endl;
        }
        else {
            cout <<-1<< endl;
        }
    }
    return 0;
}