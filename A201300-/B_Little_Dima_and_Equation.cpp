//  B. Little Dima and Equation

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>ans;
    for(int i=0; i<=81; i++){
        long long pp=1ll*b*(long long)pow(i,a)+c;
        long long nu=pp;
        if(pp>=1000000000 || pp<=0)continue;
        int tt=0;
        while(pp>0){tt+=pp%10;pp/=10;}
        if(tt==i)ans.push_back(nu);
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}