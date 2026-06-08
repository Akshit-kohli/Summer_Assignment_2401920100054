class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        int add = 0;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            if (nums[i] == 0){
                j = i;
                break;
            }
        }
        if (j != -1){
            for(int i=j; i< nums.size()-1; i++){
                if((i+add) > n-1) break;
                if(nums[i+add] == 0) {
                    add++;
                    i--;
                    continue;
                }
                if((i+add) > n-1) break;
                if(nums[i]==0){
                    swap(nums[i],nums[i+add]);
                }
            }
        }

        

    }
}