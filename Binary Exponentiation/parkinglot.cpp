#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     long long val = 4;
//     long long it1 = n - 4;
//     long long res1 = 0;
//     if (it1 > 0)
//     {
//         res1=3*3*4*(n-3);
//         while (it1 > 0)
//         {
//             if (it1 & 1)
//             {
//                 res1 *= val;
//             }
//             val *= val;
//             it1 >>= 1;
//         }
//     }else if(it1==0){
//         res1=36;
//     }

//     long long it2 = n - 3;
//     long long res2=1;
//     val = 4;
//     while (it2 > 0)
//     {
//         if (it2 & 1)
//         {
//             res2 *= val;
//         }
//         val *= val;
//         it2 >>= 1;
//     }
//     res2 *= 3 * 2 * 4;
//     cout << res2+res1;
// }

int main(){
    int n;
    cin>>n;
    int it1=n-3;
    long long res1=3*4*2;
    long long val=4;
    while(it1>0){
        if(it1&1){
            res1*=val;
        }    
        val*=val;
        it1>>=1;
    }
    long long res2=0;
    it1=n-4;
    if(it1>=0){
        res2=3*3*4*(n-3);
        long long val=4;
        while(it1>0){
            if(it1&1){
                res2*=val;
            }
            val*=val;
            it1>>=1;
        }
    }
    cout<<res1+res2;
}