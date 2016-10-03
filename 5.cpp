#include <iostream>

using namespace std;

int sqr(int x){
	return x*x;
}

int f(int a, int n){
	if(n == 0) return 1;
	if(n == 1) return a;

	if(n%2 == 0){
		return sqr(f(a,n/2));
	}
	else{
		return a*sqr(f(a,(n-1)/2));
	}
}


int main(){

	cout << f(2,3);
                         
	return 0;
}
