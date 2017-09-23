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
        while ((cin >> t) && t) {
            int dx, dy, x, y;
            cin >> dx >> dy;
            for (int i = 0; i < t; i++) {
                cin >> x >> y;
                if (x == dx || y == dy) {
                    cout << "divisa\n";
                    continue;
                }
                if (x < dx) {
                    if (y < dy) cout << "SO";
                    else cout << "NO";
                }
                else {
                    if (y < dy) cout << "SE";
                    else cout << "NE";
                }
                cout << "\n";
            }
        }
        return 0;
    }