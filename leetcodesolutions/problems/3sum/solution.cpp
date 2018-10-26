class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int> >a;
        if(nums.size()<3)return a;
        vector<int> b;
        set<vector<int> > s;
        sort(nums.begin(),nums.end());
        int i,j,k,sm;
        sm = 0;
        for(i=0;i<nums.size()-2;i++){
            j=i+1;
            k = nums.size()-1;
            while(k>j){
               sm = nums[i]+nums[k]+nums[j];
                // cout<<sm<<endl;
               if((sm)==0){
                    // cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                    b.push_back(nums[i]);
                    b.push_back(nums[j]);
                    b.push_back(nums[k]);
                    s.insert(b);
                    b.clear();
                   j++;
                }
              else if(sm>0)k--;
              else j++;
            }
        }
        set<vector<int> > :: iterator it;
        
        for(it=s.begin();it!=s.end();it++){
            a.push_back(*it);
        }
        return a;
    }
};