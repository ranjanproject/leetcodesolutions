class Solution {
public:
    string reverseVowels(string s) {
     int l,r;
    unordered_map<char,int> umap;
    umap['a']=1;umap['e']=1;umap['o']=1;umap['i']=  1;umap['u']=1;
    umap['A']=1;umap['E']=1;umap['O']=1;umap['I']=1;umap['U']=1;
     char temp;
     l = 0;r= s.length()-1;
        while(l<r){
            if(umap.find(s[l])!=umap.end() && umap.find(s[r])!=umap.end()){
                temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;r--;
            }
            else if(umap.find(s[l])!=umap.end()){
                r--;
            }
            else l++;
        }
        return s;
    }
};