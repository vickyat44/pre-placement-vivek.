class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res= nums;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        
        while(j>i)
        {
            if((nums[i]+nums[j])==target){
                int start=-1,end=-1;
                for(int k=0;k<nums.size();k++)
                {
                    if(nums[i]==res[k] && start==-1)
                        start=k;
                    else if(nums[j]==res[k])
                        end=k;
                        
                }
                return {start,end};
            }
            else if(nums[i]+nums[j]<target)
            {
                i++;
            }
            else{
                j--;
            }
            
        }
        return {-1,-1};
        
    
    }
};