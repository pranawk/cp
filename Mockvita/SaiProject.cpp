#include<string>
#include<vector>
#include<iostream>
#include<cctype>
using namespace std;

int main(){
    int bal,op;
    cin>>bal>>op;
    vector<int>nums;
    vector<int>bals;
    while(op--){
        string s;
        cin>>s;
        if(s.find("abort")!=string::npos){
            int ind=0;
            for(size_t i=0; i<s.size(); i++)if(s[i]>='0' && s[i]<='9')ind=ind*10+ s[i]-'0';
            nums[ind-1]=0;
        }
        if(s.find("credit")!=string::npos|| s.find("debit")!=string::npos){
            int ind=0;
            for(size_t i=0; i<s.size(); i++)if(s[i]>='0' && s[i]<='9')ind=ind*10+ s[i]-'0';
            if(s.find("credit")!=string::npos)nums.push_back(ind);
            else nums.push_back(-ind);
        }
        if(s.find("read")!=string::npos)cout<<bal<<endl;
        if(s.find("commit")!=string::npos){
            while(!nums.empty()){
                bal+=nums.back();
                nums.pop_back();
            }
            bals.push_back(bal);
        }
        if(s.find("rollback")!=string::npos){
            int ind=0;
            for(size_t i=0; i<s.size(); i++)if(s[i]>='0' && s[i]<='9')ind=ind*10+ s[i]-'0';
            bal=bals[ind-1];
            nums.clear();
            }
    }
    return 0;
}