//Title:
/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        long long c;
        cin>>n>>c;
        vector<long long>costs(n);
        for(int i=0; i<n; i++)cin>>costs[i];
        int p=0;
        int count=0;
        sort(costs.begin(),costs.end());
        int i=0;
        while(costs[i]<c)i++;
        count+=n-i;
        i--;
        while(i>=0){
            while(i>=0&& costs[i]*pow(2,p)>c){count++;i--;}
            if(costs[i]*pow(2,p)<=c){p++;c--;i--;}
        }
        cout<<count<<'\n';
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int n;
        long long c;
        cin >> n >> c;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long coins = 0;
        int k = 0;
        while(!a.empty()){
           long long freeTh = (k < 63 ? (c >> k) : 0LL);
            auto it = upper_bound(a.begin(), a.end(), freeTh);
            if(it != a.begin()){
              a.erase(prev(it));
            } else {
                coins++;
                a.pop_back();
            }
            k++;
        }
        cout << coins << "\n";
    }
    return 0;
}