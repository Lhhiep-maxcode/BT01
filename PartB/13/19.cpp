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
	int a, b, c;
    cin >> a >> b >> c;
    bool d;
    if(a < b && b < c) d = 1;
    else if(a > b && b > c) d = 1;
    else d = 0;
    cout << boolalpha << d;
	return 0;
}
