#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *arr = malloc(2 * sizeof(int));
    *returnSize = 2;
    for(int itr1 = 0; itr1< numsSize; itr1++){
        for(int itr2 = itr1 + 1; itr2< numsSize; itr2++){
            if (nums[itr1] + nums[itr2] == target){
                arr[0]= itr1;
                arr[1]= itr2;
                return arr;
            }
        }
    }
    return arr;
}
int main(){
    int numsSize = 0;
    int target = 0;
    int *returnSize = malloc(sizeof(int));
    printf("Enter  the size of the array: ");
    scanf("%d", &numsSize);
    printf("Enter the target sum: ");
    scanf("%d", &target);
    int *nums = malloc(numsSize * sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i = 0; i < numsSize; i++){
        scanf("%d", &nums[i]);
    }
    int *result = twoSum(nums, numsSize, target, returnSize);
    for(int i = 0; i < *returnSize; i++){
        printf("%d ", result[i]);
    }
    return 0;
}