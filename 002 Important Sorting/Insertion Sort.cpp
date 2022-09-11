class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
        int j = i-1;
        int temp = arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++){
            insert(arr,i);
        }
    }
};
