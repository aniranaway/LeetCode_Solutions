/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) 
{
    *returnSize = numsSize;
    int index = 0;
    int L = 0;
    int R = L+1;
    int *res = (int *)malloc(numsSize * sizeof(int));
    while(index < numsSize)
    {
        if(nums[index]%2 == 0)
        {
            res[L] = nums[index];
            L += 2;
            index++;
        }

        else{
            res[R] = nums[index];
            R += 2;
            index++;
        }
    }
    return res;
}