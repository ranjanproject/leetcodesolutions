class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        string s;
        int i,j,mn,f;
        mn = INT_MAX;
        for(i=0;i<strs.size();i++){
            int n = strs[i].length();
            mn = min(mn,n);
        }
        for(i=0;i<mn;i++){
            f = 1;
            char c;
            c = strs[0][i];
            for(j=1;j<strs.size();j++){
                if(c!=strs[j][i]){
                    f = 0;
                    break;
                }
            }
            if(f==1){
                s = s+strs[0][i];
            }
            else break;
        }
        return s;
    }
};