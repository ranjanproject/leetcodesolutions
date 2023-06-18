class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int l = 0, r = numbers.size() - 1;
        vector<int> v;

        while(l<r){
            int sm = numbers[l] + numbers[r];
           if(sm == target){
               v.push_back(l+1);
               v.push_back(r+1);
               break;
           }else if(sm < target){
               l++;
           }else{
               r--;
           }
        }

        return v;
    }
};