class Solution {
public:
    int hammingWeight(int n) {
        long long i=0;
        while(n!=0){
            if((n&1)==1){
                i++;
            }
            n=n>>1;
        }
        return i;
    }
};