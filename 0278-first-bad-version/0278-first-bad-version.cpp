// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0 , r = n-1 , mid = 0 , result=n ;
        while(l<=r){
            mid = l+(r-l)/2;

            if(isBadVersion(mid)){
                result = mid;
                r = mid-1;
            }
            else
            l = mid+1;
        }
        return result;
    }
};