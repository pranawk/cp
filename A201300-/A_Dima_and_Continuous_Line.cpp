//  A. Dima and Continuous Line

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    bool fl=true;
    vector<pair<int,int>>pp;
    pp.push_back({min(a[0],a[1]),max(a[0],a[1])});
    for(int i=2; i<n; i++){
        int aa=min(a[i],a[i-1]);
        int b=max(a[i],a[i-1]);
        for(int j=0; j<i-1; j++){
            int c=pp[j].first,d=pp[j].second;
            if(aa<c && c<b && b<d )fl=false;
            if(c<aa && aa<d && d<b)fl=false;
        }
        pp.push_back({aa,b});
    }
    cout<<(fl==true ? "no" :"yes")<<endl;
    return 0;
}