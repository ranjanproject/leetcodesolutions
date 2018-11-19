class Solution {
public:
    void fun(set<vector<int> > &st,vector<int> nums,vector<int> &b,int j){
        if(j==nums.size()){
            return;
        }
        else{
           for(int i=j;i<nums.size();i++){
               b.push_back(nums[i]);
               st.insert(b);
               fun(st,nums,b,i+1);
               b.pop_back();
           }
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > v;
        set<vector<int> > st;
        vector<int> b;
        v.push_back(b);
        fun(st,nums,b,0);
        set<vector<int> >:: iterator it;
        for(it=st.begin();it!=st.end();it++){
            v.push_back(*it);
        }
        return v;
    }
};