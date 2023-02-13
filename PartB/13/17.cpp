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
	int n;
    cin >> n;
    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) cout << "true";
    else cout << "false";
	return 0;
}
