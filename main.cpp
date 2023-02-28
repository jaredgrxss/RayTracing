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
using namespace std;


int main(){

    // image parameters

    const int image_width = 256;
    const int image_height = 256;

    cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for(int i = image_height-1; i >= 0; i--){
        cout << "Scanlines remaining: " << i << ' ' << endl;
        for(int j = 0; j < image_width; j++){
            auto r = double(j) / (image_width-1);
            auto g = double(i) / (image_height-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    return 0;
}
