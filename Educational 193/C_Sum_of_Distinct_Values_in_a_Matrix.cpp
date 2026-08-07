//  C. Sum of Distinct Values in a Matrix

#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int>a(x),b(y);
        for(int i=0; i<x; i++)cin>>a[i];
        for(int i=0; i<y; i++)cin>>b[i];
        long long as=0,bs=0;
        int l=x-1,r=y-1;
        /*******/
        int ll=n-1,rr=m;
        /*******/
        long long  ms=0,mi=0;
        unordered_set<int>st,st1;
        while(true){
            if(l<0 || r<0)break;
            if(ll<=0 || rr<=0)break;
            if(a[l]==b[r]){
                ll--;
                rr--;
                mi++;st.insert(a[l]);
                ms+=a[l];
                l--;r--;
            }
            else if(a[l]>b[r]){
                as+=a[l];st.insert(a[l]);
                ll--;
                l--;
            }
            else{
                bs+=b[r];st.insert(b[r]);
                rr--;
                r--;
            }
        }
        //cout<<as<<" "<<bs<<endl;
        while(ll>0 && l>=0){
            as+=a[l];st.insert(a[l]);
            l--;
            ll--;
        }
        while(rr>0 && r>=0){
            bs+=b[r];st.insert(b[r]);
            rr--;
            r--;
        }
        while( mi>0){
            priority_queue<int>pq;
            int mia=mi,mib=mi;
            for(int i=l; i>=0 && mia-- ; i--){if(st.find(a[i])==st.end())pq.push(a[i]); st.insert(a[i]);}
            for(int i=r; i>=0 && mib-- ; i--){if(st.find(b[i])==st.end())pq.push(b[i]); st.insert(b[i]);}
            while(mi-- && !pq.empty()){
                ms+=pq.top();
                pq.pop();
            }
        }
        long long a1=as+bs+ms;
        as=0; bs=0;
        l=x-1; r=y-1;
        /*******/
        ll=n; rr=m-1;
        /*******/
        ms=0; mi=0;
        while(true){
            if(l<0 || r<0)break;
            if(ll<=0 || rr<=0)break;
            if(a[l]==b[r]){
                ll--;
                rr--;
                mi++;st1.insert(a[l]);
                ms+=a[l];
                l--;r--;
            }
            else if(a[l]>b[r]){
                as+=a[l];
                ll--;st1.insert(a[l]);
                l--;
            }
            else{
                bs+=b[r];
                rr--;st1.insert(b[r]);
                r--;
            }
        }
        //cout<<as<<" "<<bs<<endl;
        while(ll>0 && l>=0){
            as+=a[l];st1.insert(a[l]);
            l--;
            ll--;
        }
        while(rr>0 && r>=0){
            bs+=b[r];st1.insert(b[r]);
            rr--;
            r--;
        }
        while(mi>0){
            priority_queue<int>pq;
            int mia=mi,mib=mi;
            for(int i=l; i>=0 && mia-- ; i--){if(st1.find(a[i])==st1.end())pq.push(a[i]); st1.insert(a[i]);}
            for(int i=r; i>=0 && mib-- ; i--){if(st1.find(b[i])==st1.end())pq.push(b[i]); st1.insert(b[i]);}
            while(mi-- && !pq.empty()){
                ms+=pq.top();
                pq.pop();
            }
        }
        long long a2=as+bs+ms;
        //cout<<a1<<" "<<a2<<endl<<endl;
        cout<<max(a1,a2)<<endl;
    }
    return 0;
}