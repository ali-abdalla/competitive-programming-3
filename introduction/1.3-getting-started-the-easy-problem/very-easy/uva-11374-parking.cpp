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
	int t;
	cin >> t;
	while (t--) {
		int n, x, min, max;
		cin >> n;
		cin >> x;
		min = max = x;
		for (int i = 1; i < n; i++) {
			cin >> x;
			if (x < min) min = x;
			if (x > max) max = x;
		}
		cout << (max - min) * 2 << endl;
	}
	return 0;
}