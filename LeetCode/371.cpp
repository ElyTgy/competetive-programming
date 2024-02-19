class Solution {
public:
    //method 1: using bitwise operators
    int getSum(int a, int b) {
        int result = a ^ b;
        int carry = a & b;

        while(carry != 0){
            int shiftedCarry = carry << 1;
            carry = result & shiftedCarry;
            result = shiftedCarry ^ result;
        }

        return result;
    }

    /* method 2: using bitwse operators with recursion
    int getSum(int a, int b) {
        if(b == 0){return a;}
        return getSum(a^b, (a&b)<<1);
    }
    */

  /* method 3: using loops and twos complement
    
  */
};
