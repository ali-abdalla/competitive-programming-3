// @author aliabdallah
// #includes {{{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <functional>
#include <math.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <vector>
#include <iostream>
#include <utility>
#include <numeric>
#include <list>
#include <iomanip>
#include <cmath>
#include <stack>
#include <complex>
#include <sstream>
using namespace std;
// }}}

int main() {
	int a, b, c, d;
	int ret = 0;
	cin >> a >> b >> c >> d;
	while (a || b || c || d) {
		ret = 360 * 2;
		
		if (b >= a) ret += (b - a) * 9;
		else ret += (40 - a + b) * 9;
		
		ret += 360;

		if (c <= b) ret += (b - c) * 9;
		else ret += (b + (40 - c)) * 9;

		if (d >= c) ret += (d - c) * 9;
		else ret += (40 - c + d) * 9;

		cout << ret << endl;
		cin >> a >> b >> c >> d;
	}
	return 0;
}