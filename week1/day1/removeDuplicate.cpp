#include <iostream>
#include <vector>
using namespace std;    

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       for(int i=0; i< nums.size() - 1; i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i+1);
                i--;
                // cout << nums[i];
            }
       }
       
       return nums.size();
    }
};
int main(){
    int numsSize = 0;
    printf("Enter  the size : ");
    scanf("%d", &numsSize);
    vector<int> nums(numsSize);
    printf("Enter elements of the array: ");
    for(int i = 0; i < numsSize; i++){
        scanf("%d", &nums[i]);
    }
    Solution sol;
    int newSize = sol.removeDuplicates(nums);
    printf("The new size of the array is: %d\n", newSize);
    printf("The elements of the array now are: ");
    for(int i = 0; i < newSize; i++){
        printf("%d ", nums[i]);
    }
    return 0;
}