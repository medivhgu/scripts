/*
 * =====================================================================================
 *
 *       Filename:  test_ptr_copy.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2019 11:33:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  MedivhGu (M.G), MedivhGu@foxmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <memory>
#include <iostream>
#include <vector>

struct Test {
    Test() : zz(new double(2.0)) {}
    std::string key;
    std::vector<std::string> values;
    double* zz;
};

int main() {
    std::shared_ptr<Test> d1 = std::make_shared<Test>();
    d1->key = "d1_";
    d1->values.push_back("test1");
    *(d1->zz) = 1.0;
    std::cout << "d1: " << d1 << ' ' << (*d1).key << (*d1).values.size() << ' ' << *(d1->zz) << std::endl;
    {
        std::shared_ptr<Test const> d2(new Test());
        std::cout << "d2: " << d2 << ' ' << (*d2).key << (*d2).values.size() << ' ' << *(d2->zz) << std::endl;

        *d1 = *d2;
        std::cout << "d1: " << d1 << ' ' << (*d1).key << (*d1).values.size() << ' ' << *(d1->zz) << std::endl;
        std::cout << "d2: " << d2 << ' ' << (*d2).key << (*d2).values.size() << ' ' << *(d2->zz) << std::endl;
        std::cout << "d1_use_count: " << d1.use_count() << std::endl;
        std::cout << "d2_use_count: " << d2.use_count() << std::endl;
        delete d2->zz;
    }

    std::cout << "d1: " << d1 << ' ' << (*d1).key << (*d1).values.size() << ' ' << *(d1->zz) << std::endl;
    std::cout << "d1_use_count: " << d1.use_count() << std::endl;

    return 0;
}
