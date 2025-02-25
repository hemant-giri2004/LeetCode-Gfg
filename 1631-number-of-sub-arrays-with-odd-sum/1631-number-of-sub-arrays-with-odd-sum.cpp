class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        // int n=arr.size();
        // int no=0;
        // brute force.
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=arr[j];
        //         if(sum%2!=0)
        //             no++;
        //     }
        // }
        const int MOD = 1e9 + 7;
        int count = 0;
        int prefixSum = 0;

        // ओड और इवन सम की काउंट
        int oddSum = 0, evenSum = 1;

        for (int num : arr) {
            // प्रीफिक्स सम अपडेट करें
            prefixSum += num;

            // अगर प्रीफिक्स सम ओड है
            if (prefixSum % 2 == 1) {
                count = (count + evenSum) % MOD;
                oddSum++;
            }
            // अगर प्रीफिक्स सम इवन है
            else {
                count = (count + oddSum) % MOD;
                evenSum++;
            }
        }

        return count;
    }
};