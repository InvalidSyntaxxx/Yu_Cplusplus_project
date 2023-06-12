/*
 * @Descripttion: 
 * @version: 
 * @Author: 王远昭
 * @Date: 2023-06-11 23:08:52
 * @LastEditors: 王远昭
 * @LastEditTime: 2023-06-12 11:29:41
 */
#include <iostream>
#include "string_to_num.cpp"

template<typename T>
T multiply(T a, T b)
{
    return a * b;
}

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        std::cerr << "<" << argv[0] << "> need two digits!" << std::endl;
        return 0;
    }

    if(!valid_number(argv[1])) 
    {
        std::cerr << "The input:" << argv[1] <<" is not valid!" << std::endl;
        return 0;
    }
    if(!valid_number(argv[2])) 
    {
        std::cerr << "The input:" << argv[2] <<" is not valid!" << std::endl;
        return 0;
    }


    std::cout
        << argv[1] << " * " << argv[2] << " = "
        << multiply<float>(atof(argv[1]), atof(argv[2]))
        << std::endl;
    return 1;
}
/*
    result: 
        success：[6, 9], [9.9, 6], [9.9e2, 6e7], 
        [-1, 8e2], [3.1415, 2.0e-2], [1234567890, 1234567890]
        fail：[a, 2], [2, b], [2, 2b], [1.0e200, 1.0e200]
*/