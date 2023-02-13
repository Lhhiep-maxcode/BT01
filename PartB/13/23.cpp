#include <iostream>
#include <iomanip>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
#include <stdio.h>
#define ll long long
using namespace std;


int main(){
	double a, b;
	cin >> a >> b;
	double max = ((a + b)/2 + abs(a - b)/2);
    cout << max;
	return 0;
}
