class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            nums1 = nums2;
            return;
        }
         int i,j,k;
         i = 0;j = 0;
        k = m;
         while(i<n && j<m){
             if(nums1[j]<nums2[i]){
                 nums1[k]=nums1[j];
                 j++;
                 k++;
             }
             else{
                 nums1[k]=nums2[i];
                 i++;
                 k++;
             }
             if(k==m+n)break;
         }
        // cout<<i<<" "<<j<<endl;
        if(k<(m+n)){
            if(j<m){
             while(k<(m+n)){
                nums1[k]=nums1[j];
                k++;j++;
             }
           }
           if(i<n){
              while(k<(m+n)){
                  nums1[k]=nums2[i];
                  i++;k++;
              }
           }
        }
        k=0;
        while(j<m && i<n){
            if(nums1[j]<nums2[i]){
                nums1[k]=nums1[j];
                k++;
                j++;
            }
            else{
                nums1[k]=nums2[i];
                k++;i++;
            }
            if(k==m)break;
        }
      if(i!=n){
          while(k<m){
              nums1[k]=nums2[i];
              k++,i++;
          }
      }
      if(j!=m){
          while(k<m){
              nums1[k]=nums1[j];
              j++;k++;
          }
      }
     reverse(nums1.begin(),nums1.begin()+m);
     reverse(nums1.begin()+m,nums1.end());
     reverse(nums1.begin(),nums1.end());
    }
};