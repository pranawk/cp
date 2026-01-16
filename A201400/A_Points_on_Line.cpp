//  A. Points on Line

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    vector<int>x(n);
    for(int i=0 ; i<n; i++)cin>>x[i];
    int l=0,r=1;
    priority_queue<int, vector<int>, greater<int>>pqmin;
    priority_queue<int>pqmax;
    unordered_set<int>st;
    int ans=0;
    pqmax.push(x[0]);pqmin.push(x[0]);st.insert(x[0]);
    while(r!=n || r-l>3){
        while(r<n && (pqmax.top()-pqmin.top()<=d)){pqmin.push(x[r]);pqmax.push(x[r]);st.insert(x[r]);r++;}
        if(pqmax.top()-pqmin.top()>=d){
            if(r-l>3){
               int ii=1;
               int kk=r-l;
               if(r!=n)kk--;
               if(r==n && pqmax.top()-pqmin.top()>d)kk--;
               while(kk!=3){ii*=kk; kk--;}
//               cout<<pqmax.top()<<" "<<pqmin.top()<<endl;
//               cout<<l<<" "<<r<<endl;
               ans+=ii;
                    st.erase(x[l]);
                    while(st.find(pqmax.top())==st.end())pqmax.pop();
                    while(st.find(pqmin.top())==st.end())pqmin.pop();
                    l++;
            }
            while(pqmax.top()-pqmin.top()>d){
                st.erase(x[l]);
                while(st.find(pqmax.top())==st.end())pqmax.pop();
                while(st.find(pqmin.top())==st.end())pqmin.pop();
                l++;
            }
        }

    }
    //cout<<pqmin.top()<<" "<<pqmax.top();
    cout<<ans<<endl;
    return 0;
}