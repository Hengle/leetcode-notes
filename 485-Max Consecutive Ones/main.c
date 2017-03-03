int findMaxConsecutiveOnes(int* nums, int numsSize) {
    
    int max = 0;
    int current = 0;
    
    for(int i = 0 ; i < numsSize ; i++)
    {
        if(nums[i] == 1)
        {
            current ++ ;
        }
        else
        {
            if(current > max)
            {
                max = current;
            }
            current = 0;
        }
    }
    
    if(current > max)
    {
        max = current;
    }
    
    return max;
}