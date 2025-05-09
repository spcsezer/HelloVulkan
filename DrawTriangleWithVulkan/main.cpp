#include "HelloVulkan.hpp"

#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main()
{
    HelloVulkan helloTriangle;

    try {
        helloTriangle.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}