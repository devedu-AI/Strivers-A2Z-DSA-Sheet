class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void helper(int arr[],int n){
        if(n==0){
            return;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        helper(arr,n-1);
    }
    void bubbleSort(int arr[], int n)
    {
        helper(arr,n-1);
    }
};