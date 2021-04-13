
#include <iostream>
#include <vector>

#include "linalg.hpp"

int main(){

    std::vector<float> mat = {1,2,3,1,2,3,1,2,3,1,2,3};
    std::vector<float> vec = {1,1,1};
    std::vector<float> vec_out = {0,0,0};

    mat_vec(vec_out.data(), mat.data(), vec.data(), 4, 3);

    std::cout << vec_out[1] << std::endl;

    return 0;
}

