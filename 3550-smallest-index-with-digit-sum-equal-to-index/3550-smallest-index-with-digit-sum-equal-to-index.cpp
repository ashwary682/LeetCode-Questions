class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i =0 ; i<nums.size();i++){
            int num = nums[i];
            int DigitSum = 0;

            while(num>0){
                DigitSum = DigitSum+num%10;
                num = num/10;
            }
            if(DigitSum==i){
                return i;
            }
        }
        return -1;
    }
};