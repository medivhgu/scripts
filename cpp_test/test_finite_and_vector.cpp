/*
 * =====================================================================================
 *
 *       Filename:  kk.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/28/2019 11:37:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  MedivhGu (M.G), MedivhGu@foxmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <cstdint>
#include <limits>
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    float nan = std::numeric_limits<float>::quiet_NaN();
    float inf = std::numeric_limits<float>::infinity();
    float normal = 9;
    std::vector<float> test = {nan, inf, normal};
    for(size_t i=0; i < test.size(); i++) {
        if (std::isnan(test[i]))
            std::cout << test[i] << " is NaN\n";
        else
            std::cout << test[i] << " is not NaN\n";
    }
    for(size_t i=0; i < test.size(); i++) {
        if (std::isinf(test[i]))
            std::cout << test[i] << " is Inf\n";
        else
            std::cout << test[i] << " is not Inf\n";
    }
    for(size_t i=0; i < test.size(); i++) {
        if (std::isfinite(test[i]))
            std::cout << test[i] << " is Finite\n";
        else
            std::cout << test[i] << " is not Finite\n";
    }


    std::vector<int> k1 = {2, 3, 1, 4}, k2;
    k2.assign(&k1[0]+0, &k1[0] + 2 + 1);
    std::cout << k2.size() << ' ' << k1.size() << std::endl;
    for(auto t : k2) std::cout << t << ' ';  std::cout << std::endl;
    k2.assign(&k1[1], &k1[3 + 1]);
    std::cout << k2.size() << ' ' << k1.size() << ' ' << k1[40] << std::endl;
    for(auto t : k2) std::cout << t << ' ';  std::cout << std::endl;
    
    std::cout << "front: " << k1.front() << ", back: " << k1.back() << std::endl;
    k1.pop_back();
    std::cout << "front: " << k1.front() << ", back: " << k1.back() << std::endl;

    std::vector<int>().swap(k1);
    std::cout << "k1.size(): " << k1.size() << std::endl;

    return 0;
}
