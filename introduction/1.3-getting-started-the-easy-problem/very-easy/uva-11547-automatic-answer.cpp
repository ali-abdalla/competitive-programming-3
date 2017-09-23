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
            int n, ret;
            cin >> n;
            ret = ((((n * 567) / 9) + 7492) * 235) / 47 - 498;
            cout << abs((ret % 100) / 10) << endl;
        }
        return 0;
    }