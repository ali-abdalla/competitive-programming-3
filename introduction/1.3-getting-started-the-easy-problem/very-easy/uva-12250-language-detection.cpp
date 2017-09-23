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
        string str;
        int caseNum = 1;
        cin >> str;
        while (str != "#") {
            cout << "Case " << caseNum++ << ": ";
            if (str == "HELLO") {
                cout << "ENGLISH";
            }
            else if (str == "HOLA") {
                cout << "SPANISH";
            }
            else if (str == "HALLO") {
                cout << "GERMAN";
            }
            else if (str == "BONJOUR") {
                cout << "FRENCH";
            }
            else if (str == "CIAO") {
                cout << "ITALIAN";
            }
            else if (str == "ZDRAVSTVUJTE") {
                cout << "RUSSIAN";
            }
            else {
                cout << "UNKNOWN";
            }
            cout << "\n";
            cin >> str;
    
        }
        return 0;
    }