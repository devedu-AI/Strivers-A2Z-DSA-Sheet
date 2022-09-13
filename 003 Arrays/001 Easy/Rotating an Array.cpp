class Solution{   
public:
    void leftRotate(int arr[], int n, int k) {
        // code here
        while(k>=n) k-=n;
        if(k==0) return;
        
        int* a = new int[k];
        
        for(int i=0;i<k;i++){
            a[i]=arr[i];
        }
        for(int i=0;i<n-k;i++){
            arr[i]=arr[i+k];
        }
        int count=0;
        for(int i=n-k;i<n;i++){
            arr[i]=a[count++];
        }
    }
};
