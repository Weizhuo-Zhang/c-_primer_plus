/*************************************************************************
    > File Name: question_2_3_define_function.cpp
    > Author: Weizhuo Zhang (Ray)
    > Mail: wzhuo.zhang@gmail.com
    > Created Time: Wed Sep 18 01:42:28 2019
 ************************************************************************/
#include <iostream>

void firstOutputFunc();
void secondOutputFunc();

int main()
{
    firstOutputFunc();
    firstOutputFunc();
    secondOutputFunc();
    secondOutputFunc();
}

void firstOutputFunc()
{
    std::cout << "Three blind mice" << std::endl;
}

void secondOutputFunc()
{
    std::cout << "See how they run" << std::endl;
}
