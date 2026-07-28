#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compareInt(const void *a, const void *b)
{

    const int x = *(const int *)a;
    const int y = *(const int *)b;

    if(x < y) 
        return -1;
    if(x > y) 
        return 1;

    return 0;
}

int containsDuplicate(int *nums, int numsSize)
{

    qsort(nums, (size_t)numsSize, sizeof(int), compareInt);

    for(int i=1; i<numsSize; i++)
    {
        if(nums[i] == nums[i-1]) 
        {
            return 1;
        }
    }
    return 0;
}