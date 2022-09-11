class Solution
{
    public:
    int select(int arr[], int i,int n)
    {
           int min=i;
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[min]) min=j;
           }
           return min;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0;i<n-1;i++){
           int res = select(arr,i,n);
           if(res!=i){
               int temp = arr[res];
               arr[res]=arr[i];
               arr[i]=temp;
           }
       }
    }
};
