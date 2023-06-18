class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1, w =-1;

        while(l<r){
            int v = min(height[l], height[r])*(r-l);
            w = max(w, v);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return w;
    }
};