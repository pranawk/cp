#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>holes(n-1);
    int aa;
    cin>>aa;
    int sum=aa;
    for(int i=0; i<n-1; i++){cin>>holes[i];sum+=holes[i];}
    sort(holes.begin(),holes.end());
    int ans=0;
    int ii= n-2;
    while((aa*a)/sum<b){
        sum-=holes[ii];
        ans++;
        ii--;
    }
    cout<<ans<<endl;
return 0;
}