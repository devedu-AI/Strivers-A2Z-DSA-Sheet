#include<iostream>
using namespace std;

void print5(int n){
	if(n==0) return;
	cout<<5<<" ";
	print5(n-1);
}

void printToN(int n){
	if(n==0) return;
	printToN(n-1);
	cout<<n<<" ";
}

void printFromN(int n){
	if(n==0) return;
	cout<<n<<" ";
	printToN(n-1);
}

int main(){
	printFromN(5);
	return 0;
}
