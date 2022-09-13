class Solution{
public:
    int remove_duplicate(int a[],int n){
        
        if(n==1||n==0) return 1;
        int ans = remove_duplicate(a+1,n-1);
        if(a[0]==a[1]){
            for(int i=0;i<ans;i++){
                a[i]=a[i+1];
            }
            return ans;
        }else{
            return ans+1;
        }
    }
};
