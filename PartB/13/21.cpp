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
	double a, b, c;
    cin >> a >> b >> c;
    double d = a + b + c;
    d /= 2;
    cout << sqrt(d*(d-a)*(d-b)*(d-c));
	return 0;
}
