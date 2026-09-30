#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll maxTotalSumAfterFlips(vector<ll>& nums) {
    ll totalSum = 0;
    ll currentSubarraySum = 0;
    ll maxSubarraySum = 0; // 0 initialized to handle empty subarray case

    for (int num : nums) {
        totalSum += num;
        
        // Kadane's logic
        currentSubarraySum += num;
        if (currentSubarraySum < 0) {
            currentSubarraySum = 0;
        }
        if (currentSubarraySum > maxSubarraySum) {
            maxSubarraySum = currentSubarraySum;
        }
    }

    // Mathematical formula: 2 * (Max Subarray Sum) - Total Sum
    return 2 * maxSubarraySum - totalSum;
}

int main(){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<maxTotalSumAfterFlips(a);
}