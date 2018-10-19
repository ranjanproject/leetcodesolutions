class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> v;
        vector<vector<int> > res;
        if(numRows==0)return res;
        int r;
        r = 1;
        v.push_back(1);
        res.push_back(v);
        while(r<numRows){
            v.clear();
            int pr,j;
            pr = 0;
            j = 0;
            while(j<res[r-1].size()){
                v.push_back(res[r-1][j]+pr);
                pr = res[r-1][j];
                j++;
            }
            v.push_back(1);
            res.push_back(v);
            r++;
        }
        return res;
        
    }
};