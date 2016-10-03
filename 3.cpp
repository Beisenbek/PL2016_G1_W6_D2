/*
Задача №3063. Банковские проценты
*/

#include <iostream>

using namespace std;

int _min(int x, int y, int z){

	int m1 = min(x,y);
	int m2 = min(m1,z);

	return m2;
}


int main(){

	int a,b,c;

	cin >> a >> b >> c;

	cout << _min(a,b,c);
                             
                         
	return 0;
}
