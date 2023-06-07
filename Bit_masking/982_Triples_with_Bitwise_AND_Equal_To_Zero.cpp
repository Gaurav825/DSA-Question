/*problem ->Given an integer array nums, return the number of AND triples.
An AND triple is a triple of indices (i, j, k) such that:
0 <= i < nums.length
0 <= j < nums.length
0 <= k < nums.length
nums[i] & nums[j] & nums[k] == 0, where & represents the bitwise-AND operator.

 problem link->https://leetcode.com/problems/triples-with-bitwise-and-equal-to-zero/
 */
// observation ->store nums[i] &nums[j] in map them again iterate nums[i] and map find nums[i]&map==0 res+=map.second then return res
 int countTriplets(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; j<nums.size(); j++)
            {
                mp[nums[i] & nums[j]]++;
            }
        }
        int res=0;
        for(int i=0; i<nums.size(); i++)
        {
            for(auto m:mp)
            {
                if((nums[i] & m.first)==0)
                    res+=m.second;
                
            }
            
        }
        return res;
    }
