class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        set<vector<int>> st;
        sort(nums.begin(), nums.end());

        int pi = 0;
        for(int i = 0; i<nums.size(); i++){
           if(nums[i]>=0){
               pi = i;
               break;
           }
        }

        //  cout<<pi<<endk;
        //check one negative and two positives
       

        for(int i = 0; i<pi; i++){
           int lp =pi, rp = nums.size() - 1;
            while(lp<rp){
              long long sum =   nums[i] + nums[lp] + nums[rp];
              vector<int> a;
              if(sum < 0){
                 lp++;
              }else if(sum == 0){
                 a.push_back(nums[i]);
                 a.push_back(nums[lp]);
                 a.push_back(nums[rp]);
                 lp++;
              }else{
                rp--;
              }

              if(a.size()!=0){
                  st.insert(a);
              }
            }
        }

        //check two negative and one positives
       
         for(int i = pi; i<nums.size(); i++){
            int lne = 0, rne = pi - 1;
            while(lne<rne){
              long long sum =   nums[i] + nums[lne] + nums[rne];

              vector<int> a;
              if(sum < 0){
                 lne++;
              }else if(sum == 0){
                 a.push_back(nums[i]);
                 a.push_back(nums[lne]);
                 a.push_back(nums[rne]);
                 lne++;
              }else{
                rne--;
              }

              if(a.size()!= 0){
                  st.insert(a);
              }
            }
        }

       if(nums[pi]==0){
         vector<int> a;
         for(int i = pi; i < nums.size(); i++){   
            if(nums[i]!=0)break;
            a.push_back(nums[i]);
            if(a.size()==3){
              v.push_back(a);
              a.clear();
              break;
            }
         }
       }

   for (auto itr : st)
  {
     v.push_back(itr);
  }
        return v;
    }
};