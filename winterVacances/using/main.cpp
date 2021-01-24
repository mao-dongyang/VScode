#include <iostream>

namespace LOL
{
    int sunWuKongId = 1;
}

void test01()
{
    using LOL::sunWuKongId;
    std::cout << sunWuKongId << std::endl;
}


void test02()
{
    using namespace LOL;
    std::cout << sunWuKongId << std::endl;
}

int main()
{
    test01();

    return 0;
}
