/*
  The left bit shift x << k appends k zero bits to the number, and the right bit
shift x >> k removes the k last bits from the number. For example, 14 << 2 = 56,
because 14 and 56 correspond to 1110 and 111000. Similarly, 49 >> 3 = 6, because
49 and 6 correspond to 110001 and 110.
Note that x << k corresponds to multiplying x by 2k, and x >> k corresponds
to dividing x by 2k rounded down to an integer.
*/

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=0;
        for(int i=30;i>=0;i--){
            int cur=(1<<i);
            if((cur&left)!=(cur&right)){
                break;
            }
            if((cur&left) && (cur&right)){
                ans+=cur;
            }
        }
        return ans;
    }
};
