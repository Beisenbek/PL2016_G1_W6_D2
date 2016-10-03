/*
Задача №3063. Банковские проценты
*/

#include <iostream>

using namespace std;

void printEvenNumbers(int a, int b){

	for(int i = a; i <=b ; ++i){
		if(i%2==0){
                	cout << i << endl;
                }
	}

	cout << "=========" << endl;
}


int stepen(int n, int x){
	int res = 1;

	for(int i = 1; i <= x; ++i){
        	res = res * n;
        }

        return res;
}

int main(){

	for(int i = 0; i <= 3; ++i){
		int k = stepen(10,i);
		printEvenNumbers(k,5*k);
	}
                         
	return 0;
}
