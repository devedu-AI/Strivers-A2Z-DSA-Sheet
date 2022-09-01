#include <iostream>
using namespace std;

void reverse(int n, int a[],int i,int j){
    if(i>j) return;
    int temp = a[j];
    a[j]=a[i];
    a[i]=temp;
    reverse(n,a,i+1,j-1);
}

int main() {
	//code
	int t,n;
	cin>>t;
	while(t>0){
	    cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
	    reverse(n,a,0,n-1);
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    t--;
	}
	return 0;
}