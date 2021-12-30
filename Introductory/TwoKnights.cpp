#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	long long attack, total;
	
	for(long long i = 1; i <= n; ++i){	
		total = (i*i * (i*i - 1))/2;
		attack = (i-2) * (i-1) * 2 * 2;
		cout << total - attack << endl;
	}

	//https://math.stackexchange.com/questions/3266257/number-of-ways-two-knights-can-be-placed-such-that-they-dont-attack/3266324#3266324
	//nxn chessboard contains n² cells.
	//2 knights can be placed in C(n², 2) different ways. Therefore:
	//total_ways = n²!/(2! * (n² - 2)!) = (n² * (n²-1)) / 2.

	//Every time two knights attack each other, their positions forms either a 2x3 or 3x2 board. So we basically have to calculate the total number of ways we can place two knights on a board and subtract by the number of ways they attack each other, which is how many 2x3 and 3x2 boards our nxn board can contain. Ps: "For each 2x3 or 3x2 board, there are 2 ways of placing the knights so that they threaten each other.".
	

	return 0;
}
