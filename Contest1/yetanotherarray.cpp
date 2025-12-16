#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool f=true;
        for(int i=0;i<n;i++){
            long long x=2;
            bool flag=false;
            while(x<=__LONG_LONG_MAX__){
                long long ans=__gcd(x,arr[i]);
                if(ans==1){
                    cout<<x;
                    flag=true;
                    break;
                }
                x++;
            }
            f=!flag;
            if(flag){
                break;
            }
        }
        if(f){
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}