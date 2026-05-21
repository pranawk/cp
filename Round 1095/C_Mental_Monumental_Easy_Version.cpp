//  C. Mental Monumental (Easy Version)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    //int n;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int nn=*max_element(a.begin(),a.end());
        unordered_set<int>st;
        vector<int>line(nn+1,0);
        for(int i=0; i<n; i++){
            st.insert(a[i]);
            line[(a[i]-1)/2]++;
        }
        for(int i=nn-1; i>=0; i--)line[i]+=line[i+1];
        //for(int i=0; i<n; i++)cout<<line[i]<<" ";
        int ans=0;
        int cur=line[0];
        //cout<<cur<<" ";
        for(int i=0; i<n; i++){
            ans++;
            if(line[i]>0 && cur>0){
                cur--;line[i]-=cur;
            }
            else if(cur>0 && st.find(i)!=st.end() && line[(i-1)/2]>0){cur--;continue;}
            else {ans--;break;}
        }
        cout<<ans<<endl;
    }
    return 0;
}