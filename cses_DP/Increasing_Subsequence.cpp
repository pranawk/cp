//  Increasing Subsequence
/*   Check the relation here, and think of a way. check how the "1" is shifting,
 *   relation between shifts...
 *
 *   7,3,5,3,6,2,9,8
 *   1 1 2 1 3 1 4 4
 */
#include<bits/stdc++.h>

using namespace std;
int n;
void mxm(int l, int r, vector<int>&aa, int& num)
{
    if (r==0)
    {
        aa[0]=min(aa[0],num);
        return;
    }
    if (r<0)return;
    if (l==r)
    {
        aa[l]=min(aa[l],num);
        return ;
    }
    int mid=l+(r-l)/2;
    if (aa[mid]>=num)return mxm(l,mid,aa,num);
    else return mxm(mid+1,r, aa,num);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int>aa;
    int sz=0;
    for (int i=0; i<n; i++)
    {
        if (sz>0 && aa[sz-1]>=a[i])mxm(0,sz,aa,a[i]);
        else {sz++; aa.push_back(a[i]);}
    }
    // for (int i=0; i<aa.size(); i++)cout<<aa[i]<<" ";
    cout<<aa.size();
    return 0;
}