class Solution {
    fun search(nums: IntArray, target: Int): Int {
        var l = 0
        var r= nums.size - 1
        var mid = 0
        while(l<=r){
         mid = (l+r)/2
         if(nums[mid] == target){
             return mid
         }else {
            //find sorted side   
            if(nums[mid]>=nums[l]){
              //means left side is sorted completely
              if(target>= nums[l]  && target<nums[mid]){
                  //check in left sorted side
                     r = mid - 1;
              }else{
                  //check in right rotated side
                    l = mid + 1;
              }
            }
            else{
              //means right side is sorted completely
            if(target<= nums[r]  && target>nums[mid]){
                // check in sorted side
                    l = mid + 1;
                     
              }else{
                  //check in left rotated side
                    r = mid - 1;
              }
            }
         }
      
        }

        return -1
    }
}