//  D. Ghostfires

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int r,g,b;
        cin>>r>>g>>b;
        string s;
        vector<pair<int,char>>v;
        v.push_back({r,'R'});
        v.push_back({g,'G'});
        v.push_back({b,'B'});
        sort(v.begin(),v.end());

            s+=v[2].second;v[2].first--;
            while(v[2].first!=0 && (v[1].first!=0 || v[0].first!=0)){
                if(v[1].first!=0){s+=v[1].second;v[1].first--;}
                else if(v[0].first!=0){s+=v[0].second; v[0].first--;}
                s+=v[2].second;
                v[2].first--;
            }
            if(v[1].first!=0 && s[s.size()-1]!=v[1].second){s+=v[1].second; v[1].first--;}
            while(v[1].first!=0 && v[0].first!=0){
                if(v[0].first!=0){s+=v[0].second;v[0].first--;}
                s+=v[1].second;
                v[1].first--;
            }
            if(v[0].first!=0 && s[s.size()-1]!=v[0].second ){s+=v[0].second; v[0].first--;}
            if(v[0].first!=0 && s[0]!=v[0].second && s[2]!=v[0].second){s=v[0].second+s;}
        cout<<s<<endl;
    }
    return 0;
}