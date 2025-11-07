#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<int>points;
    points.push_back(0);
    int ps=0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1])ps++;
        points.push_back(ps);
    }
    int n;
    cin>>n;
    while(n--){
        int l,r;
        cin>>l>>r;
        cout<<points[r-1]-points[l-1]<<endl;
    }
    return 0;
}