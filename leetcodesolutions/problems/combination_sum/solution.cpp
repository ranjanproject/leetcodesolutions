class Solution {
public:
    void fun(vector<vector<int> > &v,vector<int> c,vector<int> &b,int n,int i){
        if(n==0){
            v.push_back(b);
            return; 
        }
        else if(n<0 || i>=c.size()){
            return;
        }
        else{
            for(int j = i;j<c.size();j++){
                b.push_back(c[j]);
                fun(v,c,b,n-c[j],j);
                b.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int n) {
     vector<vector<int> > v;
     vector<int> b;
     fun(v,c,b,n,0);
     return v;
    }
};