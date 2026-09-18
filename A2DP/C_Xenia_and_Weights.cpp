//  C. Xenia and Weights
// He want to never make the balance 0 always, >10 or <10 for each values...
#include<bits/stdc++.h>

using namespace std;
int m;
pair<bool,vector<int>>solve(string &s, int m, int cs, int pv){
    if(m<=0 && cs!=0)return {true,{}};
    else if(m<=0)return {false,{}};
    if(m%2==0){
        for(int i=0; i<10; i++){
            if(s[i]=='1' && i!=pv && cs+i+1>0){
                pair<bool,vector<int>>temp= solve(s,m-1,cs+i+1,i);
                if(temp.first==true){
                    temp.second.push_back(i+1);
                    return temp;
                }
            }
        }
    }
    else{
        for(int i=0; i<10; i++){
            if(s[i]=='1' && i!=pv && cs-i-1<0){
                pair<bool,vector<int>>temp= solve(s,m-1,cs-i-1, i);
                if(temp.first==true){
                    temp.second.push_back(i+1);
                    return temp;
                }
            }
        }
    }
    return {false,{0}};
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    cin>>m;
    pair<bool,vector<int>>temp=solve(s,m,0,-1);
    if(temp.first==false)cout<<"NO";
    else{
        cout<<"YES"<<endl;
        for(int i=temp.second.size()-1; i>=0; i--)cout<<temp.second[i]<<" ";
    }
    return 0;
}