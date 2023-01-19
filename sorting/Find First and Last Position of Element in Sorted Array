class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1; 
        int lx = -1, rx = -1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(target<nums[mid])
            {
                r = mid-1;
            }
            else if(target>nums[mid])
            {
                l=mid+1;
            }
            else
            {
                lx = mid;
                r = mid-1;
            }
        }
        l = 0, r = n-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(target<nums[mid])
            {
                r = mid-1;
            }
            else if(target>nums[mid])
            {
                l=mid+1;
            }
            else
            {
                rx = mid;
                l = mid+1;
            }
        }
        vector<int> res;
        res.push_back(lx);
        res.push_back(rx);
        return res;

    }
};
