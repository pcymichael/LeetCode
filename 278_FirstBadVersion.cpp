// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1, right=n;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isBadVersion(mid))
                right=mid-1;
            else
                left=mid+1;
        }
        return left;
    }
};
//  1   2   3   4   5
//  f   f   f   t   t
//  L       M       R
//              L   R
//          R   L

