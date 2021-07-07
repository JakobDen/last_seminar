#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>

#include "visualizer.hpp"

int main(int argc, char ** argv)
{
    try 
	{
        float imJc, reJc;
        std::cout << "Please, type initial complex number: "<< std::endl;
        std::cout << "Real part: ";
        std::cin >> reJc;
        std::cout << "Imaginary part: ";
        std::cin >> imJc;
        Visualizer visualizer(std::complex<float>(reJc, imJc));

		visualizer.run();
    }
    catch (const std::exception & exception) 
	{
        std::cerr << exception.what() << '\n';

		system("pause");

        return EXIT_FAILURE;
    }
	catch (...)
	{
		std::cerr << "Unknown exception\n";

		system("pause");

		return EXIT_FAILURE;
	}

	system("pause");

    return EXIT_SUCCESS;
}
