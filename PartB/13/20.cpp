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
	int a, b;
    cin >> a >> b;
    if(a % 7 == 0 && b % 7 == 0) cout << "true";
    else cout << "false";
	return 0;
}
