class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        int maxi =0;
        int maxkey = -1;
        int temp = INT_MAX;
        for(auto x=m.begin();x!=m.end();x++)
        {
            if(x->second.size()>maxi)
            {
                maxi = x->second.size();
                maxkey = x->first;
                temp = m[maxkey][maxi-1]-m[maxkey][0]+1;
                
            }
             else if(x->second.size()==maxi && (m[x->first][x->second.size()-1]-m[x->first][0]+1)<temp)
                {
                maxi = x->second.size();
                maxkey = x->first;
                temp = m[maxkey][maxi-1]-m[maxkey][0]+1;
                }
            
            
        }
        return temp;

    }
};
