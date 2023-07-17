class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        int a=0;
        int b=0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            a++;
            else if(nums[i]==1)
            b++;
            else
            c++;
        }
        for(int i=0;i<a;i++)
        {
           // ans.push_back(0);
            nums[i]=0;

        }
        for(int i=a;i<a+b;i++)
        {
           // ans.push_back(1);
            nums[i]=1;
            
        }
        for(int i=a+b;i<nums.size();i++)
        {
           // ans.push_back(2);
           // cout<<2<<endl;
            nums[i]=2;
        }
    }
};