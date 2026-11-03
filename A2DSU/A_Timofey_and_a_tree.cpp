//  A. Timofey and a tree

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>a(n-1);
    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        x--; y--;
        a[i]={x,y};
    }
    vector<int>color(n);
    for(int i=0; i<n; i++)cin>>color[i];

    return 0;
}