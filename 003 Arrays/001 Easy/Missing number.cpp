
int missingNumber(int A[], int N)
{
     int sum = (N*(N+1))/2;
     int temp = 0;
     for(int i=0;i<N-1;i++){
         temp+=A[i];
     }
     return sum-temp;
}
