/*
Задача №3063. Банковские проценты
*/

#include <iostream>

using namespace std;

int solve(int x, int p, int y){
        int res = 0;

	x = x * 100;
	y = y * 100;

	while(x < y){
		x = x + int(p*(x/100.0));
		res++;
	}

	return res;
}


int main(){

	int x,p,y;

	cin >> x >> p >> y;


	cout << solve(x,p,y);
                             
                         
	return 0;
}
