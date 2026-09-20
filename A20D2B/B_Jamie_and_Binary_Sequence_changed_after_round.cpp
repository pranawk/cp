//  B. Jamie and Binary Sequence (changed after round)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>damn;
    string s;
    while(n>0){
        if(n%2==0)s='0'+s;
        else s='1'+s;
        n/=2;
    }
//     cout<<s;
    vector<int>ti;
    for(int i=0; i<s.size(); i++)ti.push_back(s[i]-'0');
    int nn=ti.size();
    int cs=0;
    for(int i=0; i<ti.size(); i++)cs+=ti[i];
    if(cs>k)cout<<"No";
    else{
        int fp=0;
        while(cs<k){
            if(k-cs>=ti[fp]){
                cs+=ti[fp];
                if(fp==ti.size()-1)ti.push_back(2*ti[fp]);
                else ti[fp+1]+=2*ti[fp];
                ti[fp]=0;
                fp++;
            }
            else break;
        }
        int lp=0;
        for(int i=0; i<ti.size(); i++)if(ti[i]!=0)lp=i;
        while(cs<k){
            cs++;
            if(lp==ti.size()-1)ti.push_back(2);
            else ti[lp+1]=2;
            ti[lp]--;
            lp++;
        }
        cout<<"Yes"<<endl;
        for(int i=0; i<ti.size(); i++){
            for(int j=0; j<ti[i]; j++)cout<<nn-i-1<<" ";
        }
    }
    return 0;
}
// one project. + currone's whole arch.