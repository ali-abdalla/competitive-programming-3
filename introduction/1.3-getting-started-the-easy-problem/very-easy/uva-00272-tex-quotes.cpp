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
	string str, ret = "";
	bool isStart = true;
	while (getline(cin, str)) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '"') {
				if (isStart) ret += "``";
				else ret += "''";
				isStart = !isStart;
			}
			else {
				ret += str[i];
			}
		}
		ret += "\n";
	}
	cout << ret;
	return 0;
}