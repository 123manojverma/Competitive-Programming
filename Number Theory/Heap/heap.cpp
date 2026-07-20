#include<bits/stdc++.h>
using namespace std;

struct custom_comp{
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
        // on the basis of first value --> min priority queue
        // on the basis of second value --> max priority queue
        if(a.first == b.first){
            return a.second < b.second;
        }
        return a.first > b.first;
    }
};

int findKthLargest(vector<int>&nums,int k){
    priority_queue<int,vector<int>>pq;
    for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}

int main(){
    // priority_queue<pair<int,int>, vector<pair<int,int>>, custom_comp> pq;
    vector<int>nums={3,2,1,5,6,4};
    int k=4;
    cout<<findKthLargest(nums,k);
    return 0;
}