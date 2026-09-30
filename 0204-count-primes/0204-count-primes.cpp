// class Solution {
// public:
//     int countPrimes(int n) {
//         if (n < 3) return 0;
//         int count=n/2;
//         vector<bool> prime(n+1,false);
//         for(int i=3;i*i<n;i++){
//             if(!prime[i]){
//                 for(int j=i*i;j<=n;j+=2*i){
//                     if (!prime[j]) {
//                         prime[j] = true;
//                         count--;
//                     }
//                 }
//             }
//         }
//         // for(int i=2;i<n;i++){
//         //     if(prime[i]){
//         //         count++;
//         //     }
//         // }
//         return count;
//     }
// };

class Solution {
public:
    int countPrimes(int n) {
        if (n < 3) return 0;
        vector<bool> composite(n, false);
        int count = n / 2;                 // 2 plus all odds (the extra "1" cancels the missing "2")
        for (long long i = 3; i * i < n; i += 2) {
            if (!composite[i]) {
                for (long long j = i * i; j < n; j += 2 * i) {
                    if (!composite[j]) {
                        composite[j] = true;
                        count--;
                    }
                }
            }
        }
        return count;
    }
};