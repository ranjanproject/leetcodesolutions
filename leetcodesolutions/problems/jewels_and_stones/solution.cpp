class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> umap;
        umap.clear();
        int i;
        for(i=0;i<J.length();i++){
            umap[J[i]]=0;
        }
        int ct=0;
        for(i=0;i<S.length();i++){
            if(umap.find(S[i])!=umap.end()){
                ct++;
            }
        }
        return ct;
    }
};