// Two Sum
#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);
int main(void)
{
    int i;
    int nums[] = {3, 3}, target = 6, returnSize = 0;
    int *result = twoSum(nums, 2, target, &returnSize);
    if (returnSize > 0)
    {
        printf("[");
        for (i = 0; i < returnSize; i++)
        {
            if (i == 0)
                printf("%d, ", result[i]);
            else
                printf("%d", result[i]);
        }
        printf("]\n");
    }
    else
    {
        printf("Not Found!");
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *result;
    result = malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
            }
        }
    }
    return result;
}