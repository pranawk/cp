#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long x;
        cin>>x;

        vector<int> nums;
        long long current_sum = 0;
        while(x > 0){
            int digit = x % 10;
            nums.push_back(digit);
            current_sum += digit;
            x /= 10;
        }

        if(current_sum <= 9){
            cout << 0 << endl;
            continue;
        }

        long long target_reduction = current_sum - 9;
        vector<int> reductions;
        int leading_idx = nums.size() - 1;

        for(int i = 0; i < nums.size(); i++){
            if(i == leading_idx){
                if(nums[i] > 1) reductions.push_back(nums[i] - 1);
            } else {
                if(nums[i] > 0) reductions.push_back(nums[i]);
            }
        }
        sort(reductions.rbegin(), reductions.rend());

        int ans = 0;
        long long reduced_so_far = 0;
        for(int r : reductions){
            reduced_so_far += r;
            ans++;
            if(reduced_so_far >= target_reduction) break;
        }

        cout << ans << endl;
    }
    return 0;
}