//  B. Psychos in a Line

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++)cin>>a[i];
    vector<int>ans(n,0);
    vector<int>life(n,INT_MAX);
    stack<pair<int,int>>st;
    for (int i=0; i<n; i++)
    {
        while (!st.empty() && (st.top().first<a[i]|| life[st.top().second]<=ans[st.top().second]))st.pop();
        if (!st.empty())
        {
            ans[st.top().second]++;
            life[i]=ans[st.top().second];
        }
        st.push({a[i],i});
    }
    // for (int i=0; i<n; i++)cout<<life[i]<<" ";
    // cout<<endl;
    // for (int i=0; i<n; i++)cout<<ans[i]<<" ";
    cout<<*max_element(ans.begin(),ans.end());
    return 0;
}