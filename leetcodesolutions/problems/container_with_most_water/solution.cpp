class Solution {
public:
    int maxArea(vector<int>& height) {
        int l,r,mx = 0;
        l=0;r=height.size()-1;
        while(l<r){
            mx = max(mx,min(height[l],height[r])*(r-l));
            if(height[r]<height[l])r--;
            else l++;
        }
        return mx;
    }
};