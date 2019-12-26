/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize)
{
    int res[10000]={0};
    int count=0;
    int temp,mod;
        for(int i=left;i<=right;i++)
        {
            temp=i;
            while(temp)
            {
                mod=temp%10;
                if(mod==0)
                {
                    break;
                }
                else
                {
                    if(i%mod==0)
                    {
                        temp/=10;
                    }
                    else
                    {
                        break;
                    }
                }

            }
            if(temp==0)
            {
                res[count]=i;
                count++;
            }
        }
        *returnSize=count;
        int *result=(int*)malloc(count*sizeof(int));
        for(int i=0;i<count;i++)
        {
            result[i]=res[i];
        }
        return result;
}
