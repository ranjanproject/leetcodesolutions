class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        map<int, bool> mp;
        int size = nums.size(), maxLen = 0;

        for(int i = 0;i < size; i++){
            mp[nums[i]] = true;
        }

        for(int i = 0; i < size; i++){
            int leftLen = 0, rightLen = 0, n = nums[i], leftNum = n - 1, rightNum = n+1;
           if(mp[n]){
      
            while(mp[leftNum] || mp[rightNum]){
               if(mp[leftNum]){
                 mp[leftNum] = false;
                 leftNum--;
                 leftLen++;
               }
               if(mp[rightNum]){
                 mp[rightNum] = false;
                 rightNum++;
                 rightLen++;
               }
            }
           }

          maxLen = max(leftLen + rightLen + 1, maxLen);
        }
        
        return maxLen;
    }
};