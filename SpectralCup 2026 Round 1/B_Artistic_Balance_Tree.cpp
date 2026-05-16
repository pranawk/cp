//  B. Artistic Balance Tree

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long tt;
    cin>>tt;
    while(tt--){
        long long n,m;
        cin>>n>>m;
        vector<pair<long long,long long>>a(n);
        long long ec=0,oc=0;
        for(long long i=0; i<n; i++){cin>>a[i].first;a[i].second=i;}
        for(long long i=0; i<m; i++){long long pp;cin>>pp;if(pp%2==0)oc++;else ec++;}
        sort(a.begin(),a.end());
        long long sum=0;bool fle=false,flo=false;
        for(long long i=n-1; i>=0; i--){
            if(a[i].first<0){
                if(a[i].second%2==0 && fle==false && ec>0){fle=true;}
                else if(a[i].second%2==1 && flo==false && oc>0){flo=true;}
                else sum+=a[i].first;
            }
            else if(a[i].second%2==0 && ec>0){fle=true;}
            else if(a[i].second%2==1 && oc>0){flo=true;}
            else sum+=a[i].first;
            if(a[i].second%2==0)ec--;
            else oc--;
        }
        cout<<sum<<endl;
    }
    return 0;
}