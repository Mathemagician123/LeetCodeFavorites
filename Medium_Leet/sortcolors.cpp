class Solution {
public:
    void swap(int *xp, int *yp){
        int temp = *xp;
        *xp=*yp;
        *yp=temp;
    }
    void sortColors(vector<int>& nums) {
      for (int i=0; i<nums.size()-1; i++){
          for (int j=0; j<nums.size()-i-1; j++){
              if (nums[j]>nums[j+1]){
                  swap(&nums[j], &nums[j+1]);
              }
          }
      }
    }
};
