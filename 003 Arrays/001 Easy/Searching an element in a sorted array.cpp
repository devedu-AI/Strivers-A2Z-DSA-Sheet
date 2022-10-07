public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       int max = N-1,min=0;
       while(max>=min){
           int mid = (max+min)/2;
           if(arr[mid]==K){
               return 1;
           }
           if(arr[mid]>K){
               max = mid-1;
           }else{
               min = mid+1;
           }
       }
       return -1;
       
    }
};
