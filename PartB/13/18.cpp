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
	double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return 0;
}
