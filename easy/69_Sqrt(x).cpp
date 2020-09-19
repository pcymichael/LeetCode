class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        int left=1, right=x/2;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(mid<x/mid)
                left=mid+1;
            else if(mid>x/mid)
                right=mid-1;
            else
                return mid;
        }
        return left-1;
    }
};
// 1 2 3 4 5 6 7 8 9 10
// 1 2 3 4 5
// 1       5    mid=1+(5-1)/2=3
//     3    
//     3 4 5
//     3   5    mid=3+(5-3)/2=4
//       4
//     3        mid=3+(3-3)/3=3
//     3 4      3->right 4->left
//left-1
