
int max_sum(int A[],int N)
{
    
//Your code here
int maxValue, currValue, arrSum;

arrSum = 0;
currValue = 0;

for (int i=0;i<N;i++)
{
    arrSum = arrSum + A[i];
    currValue += (i*A[i]);
}

maxValue = currValue;

for (int i=1;i<N;i++)
{
    currValue = currValue + arrSum - N*A[N-i];
    
    if (currValue > maxValue)
    {
            maxValue = currValue;
    }


}

return maxValue;

}

