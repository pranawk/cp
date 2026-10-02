//  B. Bear and Forgotten Tree 3

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,h;
    cin>>n>>d>>h;
    if(n==2 && d==1 && h== 1){
        cout<<"1 2";
        return 0;
    }
    if(d>2*h || d==1 || n<h+1){
        cout<<-1;
        return 0;
    }
    vector<vector<int>>aa;
    int ii=2;
    for(ii=2; ii<h+2 && ii<=n ; ii++){
        vector<int>temp;
        temp.push_back(ii);
        aa.push_back(temp);
    }
    vector<vector<int>>aa2;
    if(d>h){
        int dd=h;
        while(dd<d){
            vector<int>temp={ii};
            aa2.push_back(temp);
            ii++;
            dd++;
        }
        if(dd!=d){cout<<-1<<endl;return 0;}
    }
    while(ii<=n){
        aa[aa.size()-1].push_back(ii);
        ii++;
    }
    int prev=1;
    for(int i=0; i<aa.size(); i++){
        for(int j=0; j<aa[i].size(); j++)cout<<prev<<" "<<aa[i][j]<<endl;
        prev=aa[i][0];
    }
    prev=1;
    for(int i=0; i<aa2.size(); i++){
        for(int j=0; j<aa2[i].size(); j++)cout<<prev<<" "<<aa2[i][j]<<endl;
        prev=aa2[i][0];
    }
    return 0;
}