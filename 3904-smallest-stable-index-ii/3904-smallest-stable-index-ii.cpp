class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> rightMin(n);
         // suffix min 
         rightMin[n-1]=nums[n-1];
         for (int i=n-2; i>=0 ; i--){
            rightMin[i]=min(rightMin[i+1],nums[i]);
        
         }
         //prefix
        int leftmax = nums[0];
        for (int i = 0;i<n;i++){
            leftmax = max(leftmax,nums[i]);
        int instability = leftmax - rightMin[i];
          if(instability <= k){
            return i;
        }
        }
        
      
        return -1;
    }
    
};