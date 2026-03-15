#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int op = 0;
        int cnt = 1;

        for(int i = 1; i < n; i++){
            if(a[i] % 2 == a[i-1] % 2){
                cnt++;
            }else{
                op += (cnt - 1);
                cnt = 1;
            }
        }

        op += (cnt - 1);

        cout << op << endl;
    }
}