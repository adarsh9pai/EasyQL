#include<iostream>
#include "cxxopts.hpp"
#include<boost/algorithm/string.hpp>
#include<vector>

int main()
{
    std::string test;
    getline(std::cin, test);
    std::vector<std::string> result;
    boost::split(result, test, boost::is_any_of(" "));
    for(auto current : result)
    {
        std::cout << current << std::endl;
    }

    return 0;
}