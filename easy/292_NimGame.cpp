class Solution {
public:
    bool canWinNim(int n) {
        if((n-1)%4==0||(n-2)%4==0||(n-3)%4==0)
            return true;
        return false;     
    }
};