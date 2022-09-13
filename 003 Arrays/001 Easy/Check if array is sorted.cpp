class Solution {
  public:
    bool helper(int arr[],int s,int e){
        if(s>=e) return true;
        if(arr[s]<=arr[s+1]) return true&helper(arr,s+1,e);
        else return false&helper(arr,s+1,e);
    }
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        return helper(arr,0,n-1);
    }
};
