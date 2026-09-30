//  C. Sagheer and Nubian Market

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
//     sort(a.begin(),a.end());
//     vector<pair<int,int>>pq;
//     for(int i=0; i<n; i++){
//         pq.push_back({a[i],i});
//     }
//     sort(pq.begin(),pq.end());
//     int cs=0;
    int as=0,ss=0;
    for(int i=1; i<=n; i++){
        vector<int>temp;
        int sum=s;
        for(int j= 0; j<n; j++){
            temp.push_back(a[j]+(j+1)*i);
        }
        sort(temp.begin(),temp.end());
//         for(int i=0; i<n; i++)cout<<temp[i]<<" ";
//         break;
        int ii=0;
        while(ii<i && sum>=temp[ii]){
            sum-=temp[ii];
            ii++;
        }
        if(ii<=as)break;
        as=ii;
        ss=s-sum;
    }
    cout<<as<<" "<<ss;
    return 0;
}