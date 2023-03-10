#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "color.h"
#include "vec3.h"
using namespace std;


int main(){

    // image parameters

    const int image_width = 256;
    const int image_height = 256;

    cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for(int i = image_height-1; i >= 0; i--){
        cerr << "Scanlines remaining: " << i << ' ' << flush;
        for(int j = 0; j < image_width; j++){
            color pixel_color(double(j)/(image_width-1), double(i)/(image_height-1), 0.25);
            write_color(cout, pixel_color);
        }
    }

    cerr << "\nDone.\n";

    return 0;
}
