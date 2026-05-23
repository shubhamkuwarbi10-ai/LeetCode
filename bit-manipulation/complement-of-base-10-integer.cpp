class Solution {
public:
    int bitwiseComplement(int n) {
        int temp = n;
        int bits = 0;

        if (n == 0) return 1;
        // here we are calculating the number of bits in n
        while (temp > 0){
            bits++;
            temp >>= 1;
        }

        // now we create the mask so that after !n all the garbage bits are removed 
        // mask means that bits = 3 then mask = 111
        int mask = (1 << bits) - 1;

        return (~n) & mask;
    }
};