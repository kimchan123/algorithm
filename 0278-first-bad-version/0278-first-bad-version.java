/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        int ans = 0;
        while (left <= right){
            int mid = left + (right-left)/2; // (left+right) 하면 int 범위 초과할 수 있음
            if(isBadVersion(mid)){
                ans=mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
}