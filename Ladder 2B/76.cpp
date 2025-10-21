#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    unordered_set<int>st;
    unordered_set<int>rep;
    vector<int>days;int nn=0;
    for(int i=0; i<n; i++){
        nn++;
        if(arr[i]<0){
            if(st.find(abs(arr[i]))==st.end()){cout<<-1<<endl;return 0;}
            st.erase(abs(arr[i]));
        }
        else{
            if(rep.find(arr[i])!=rep.end()){cout<<-1<<endl;return 0;}
            st.insert(arr[i]);
            rep.insert(arr[i]);
        }
        if(st.size()==0){
            days.push_back(nn);nn=0;
            rep.clear();
        }
    }
    if(st.size()!=0){cout<<-1<<endl;return 0;}
    cout<<days.size()<<endl;
    for(int i=0; i<days.size(); i++)cout<<days[i]<<" ";
    return 0;
}