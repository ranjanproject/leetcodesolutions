class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,vector<int> > mp;
         mp.clear();
         int i,sm,j;
         vector<int> v;
         for(i=0;i<nums.size();i++){
               if(mp.find(nums[i])==mp.end()){
                   mp[nums[i]].push_back(i);
               }
               else{
                   mp[nums[i]].push_back(i);
               }
         }
        for(i=0;i<nums.size();i++){
             if(mp.find(target-nums[i])!=mp.end()){
                 for(j=0;j<mp[target-nums[i]].size();j++){
                     if(i!= mp[target-nums[i]][j]){
                         v.push_back(i);
                         v.push_back(mp[target-nums[i]][j]);
                         return v;
                         break;
                     }
                 }
             }
             
        }
    }
};