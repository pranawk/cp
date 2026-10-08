//  C. Heap Operations

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<string>ans;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int a;
        if(s[0]!='r')cin>>a;
        string temp;
        if(s[0]=='i'){
            temp=s; temp+=" ";
            temp+=to_string(a);
            ans.push_back(temp);
            pq.push(a);
        }
        else if(s[0]=='g'){
            temp="removeMin";
            while(!pq.empty() && pq.top()<a){
                ans.push_back(temp);
                pq.pop();
            }
            if(!pq.empty() && pq.top()==a){
                temp=s; temp+=" ";
                temp+=to_string(a);
                ans.push_back(temp);
            }
            else if (pq.empty() || pq.top()>a){
                string temp="insert ";
                temp+=to_string(a);
                ans.push_back(temp);
                temp=s; temp+=" ";
                temp+=to_string(a);
                ans.push_back(temp);
                pq.push(a);
            }
        }
        else{
            if(pq.empty()){
              string temp="insert 0";
              ans.push_back(temp);
            }
            else pq.pop();
            ans.push_back(s);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)cout<<ans[i]<<endl;
    return 0;
}