#include <algorithm>



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zeroCount = 0;
        //int zeroIndex = -1;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0){
                ++zeroCount;
                //zeroIndex = i;
            }
            else{
                product = product * nums[i];
            }
        }

        vector<int> answer (nums.size());
        std::fill (answer.begin(), answer.end(), 0);
        if(zeroCount > 1){return answer;}
        else{
            for(int i = 0; i < answer.size(); ++i){
                if(zeroCount == 1){
                    if(nums[i] == 0){
                        answer[i] = product;
                        break;
                    }
                }
                else{
                    answer[i] = product / nums[i];
                }
            }
        }
        return answer;
    }
};
