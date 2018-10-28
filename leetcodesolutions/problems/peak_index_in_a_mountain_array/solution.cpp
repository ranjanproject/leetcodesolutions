class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int mid,l,r;
        l = 0; r= A.size()-1;
        while(l<r){
            mid = (l+r)/2;
            if(A[mid]>=A[mid+1]){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};