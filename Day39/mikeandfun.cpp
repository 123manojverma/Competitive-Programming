#include<bits/stdc++.h>
using namespace std;

// 1st approach

// int main(){
//     int n,m,q;
//     cin>>n>>m>>q;
//     vector<vector<int>>arr(n,vector<int>(m,0));
//     vector<int>dp(n,0);
//     for(int i=0;i<n;i++){
//         int cnt=0;
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//             if(arr[i][j]==0){
//                 cnt=0;
//             }else{
//                 cnt++;
//                 dp[i]=max(dp[i],cnt);
//             }
//         }
//     }
//     for(int i=0;i<q;i++){
//         int r,c;
//         cin>>r>>c;
//         r--;c--;
//         arr[r][c]=1-arr[r][c];
//         int cnt=0;
//         dp[r]=0;
//         for(int j=0;j<m;j++){
//             if(arr[r][j]==0){
//                 cnt=0;
//             }else{
//                 cnt++;
//                 dp[r]=max(dp[r],cnt);
//             }
//         }
//         cout<<*max_element(dp.begin(),dp.end())<<endl;
//     }
// }


// 2nd approach

static const int MAXN = 501;
static const int MAXM = 501;

int grid[MAXN][MAXM];
int row_score[MAXN];
int freq[MAXM];

inline int compute_row(int r, int m) {
    int best = 0, cur = 0;
    for (int j = 0; j < m; ++j) {
        cur = (cur + 1) * grid[r][j];
        best = max(best, cur);
    }
    return best;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    if (!(cin >> n >> m >> q)) return 0;

    int global_max = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
        row_score[i] = compute_row(i, m);
        freq[row_score[i]]++;
        global_max = max(global_max, row_score[i]);
    }

    while (q--) {
        int r, c;
        cin >> r >> c;
        --r; --c;

        grid[r][c] ^= 1;

        int old_val = row_score[r];
        freq[old_val]--;

        int new_val = compute_row(r, m);
        row_score[r] = new_val;
        freq[new_val]++;

        if (new_val > global_max) {
            global_max = new_val;
        } else if (freq[global_max] == 0) {
            while (global_max > 0 && freq[global_max] == 0) {
                --global_max;
            }
        }

        cout << global_max << '\n';
    }

    return 0;
}