#include <bits/stdc++.h>
using namespace std;

void secondGreaterElement(vector<int> &nums)
{
    stack<int>s1,s2;
    int n=nums.size();
    vector<int>res(n,-1);
    for(int i=0;i<n;i++){
        while(!s2.empty() && nums[i]>nums[s2.top()]){
            res[s2.top()]=nums[i];
            s2.pop();
        }
        stack<int>temp;
        while(!s1.empty() && nums[i]>nums[s1.top()]){
            temp.push(s1.top());
            s1.pop();
        }
        while(!temp.empty()){
            s2.push(temp.top());
            temp.pop();
        }
        s1.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}

int helper(vector<int>v){
    int n=v.size();
    vector<int>nsl(n,0),nsr(n,n);
    stack<int>s1,s2;
    for(int i=0;i<n;i++){
        while(!s1.empty() && v[s1.top()]>v[i]){
            nsr[s1.top()]=i;
            s1.pop();
        }
        s1.push(i);
    }
    for(int i=n-1;i>=0;i--){
        while(!s2.empty() && v[s2.top()]>v[i]){
            nsl[s2.top()]=i+1;
            s2.pop();
        }
        s2.push(i);
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=max(res,(nsr[i]-nsl[i])*v[i]);
    }
    return res;
}

int maximalRectangle(vector<vector<char>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>>v(n,vector<int>(m,0));
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]=='0'){
                v[i][j]=0;
            }else{
                v[i][j]=i>0?v[i-1][j]+1:1;
            }
        }
        res=max(helper(v[i]),res);
    }
    return res;
}

// 2nd approach
int maximalRectangle1(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>rec(m,0);
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0'){
                    rec[j]=0;
                }else{
                    rec[j]+=1;
                }
            }
            stack<int>st;
            for(int j=0;j<m;j++){
                while(!st.empty() && rec[st.top()]>rec[j]){
                    int val=rec[st.top()];
                    st.pop();
                    while(!st.empty() && rec[st.top()]==val){
                        st.pop();
                    }
                    int r=j;
                    int l=st.empty()?0:st.top()+1;
                    maxi=max((r-l)*val,maxi);
                }
                st.push(j);
            }
            while(!st.empty()){
                int val=rec[st.top()];
                st.pop();
                while(!st.empty() && rec[st.top()]==val){
                    st.pop();
                }
                int r=m;
                int l=st.empty()?0:st.top()+1;
                maxi=max((r-l)*val,maxi);
            }
        }
        return maxi;
    }

int main()
{
    vector<int>nums={2,4,0,9,6};
    // secondGreaterElement(nums);
    vector<vector<char>>matrix={{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    cout<<maximalRectangle(matrix);
}