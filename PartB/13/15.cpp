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
	string fb[11];
    fb[0] = "a";
    fb[1] = "b";
    for(int i = 2; i <= 10; i++) fb[i] = fb[i-1] + fb[i-2];
	return 0;
}
