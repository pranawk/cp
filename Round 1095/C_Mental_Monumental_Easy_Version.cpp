//  C. Mental Monumental (Easy Version)

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
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        sort(a.begin(),a.end());
        vector<bool>y(n,false);
        queue<int>b;
        for(int i=0; i<n; i++){
            if(a[i]<n)y[a[i]]=true;
            else b.push(a[i]);
        }
        for(int i=0; i<n; i++){
            if(y[i]==false){
                while(!b.empty() && (b.front()+1)/2-1 < i)b.pop_front();
                if(!b.empty()){y[i]=true; b.pop_front();}
            }
        }
    }
    return 0;
}