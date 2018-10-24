#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{
    std::shared_ptr<int> sp1 = std::make_shared<int>(25);
    std::shared_ptr<int> sp_slave = std::make_shared<int>(20);
    std::cout << "sp1 use count:" << sp1.use_count() << std::endl;
    std::cout << "sp_slave use count:" << sp_slave.use_count() << std::endl;
    sp_slave = sp1;
    std::cout << "sp1 use count:" << sp1.use_count() << std::endl;
    std::cout << "sp_slave use count:" << sp_slave.use_count() << std::endl;
    return 0;
}
