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
	int d, m, y;
    cin >> d >> m >> y;
    int a = (14 - m)/12;
    y = y - a;
    m = m + 12*a - 2;
    int dayofweek = (d+y+y/4-y/100+y/400+(31*m)/12)%7;
    switch (dayofweek)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1: 
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    }
	return 0;
}
