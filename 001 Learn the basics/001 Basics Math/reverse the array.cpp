#include <iostream>
using namespace std;

void reverse(int n, int a[]){
    for(int i=n-1;i>=0;i--){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
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
	    reverse(n,a);
	    t--;
	}
	return 0;
}
