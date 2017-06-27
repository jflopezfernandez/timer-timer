
#include "includes/Main.hpp"
#include "includes/UtilityFunctions.hpp"


void printTesting(int n = 0);


int main(int argc, char *argv[])
{
	initializeProgram();
	
	std::cout << argv[1] << std::endl;
	
	if (argc == 1) {
		printTesting(argc);
	} else if (argc == 2) {
		printTesting(argc);
	} else {
		std::cout << "Unknown number of parameters passed in. [Terminating...] " << std::endl;
		
		// PrintCommandLineUsageHelp();
		return EXIT_FAILURE;
	}
}


void printTesting(int n)
{
	std::cout << "testing..." << std::endl;
	std::cout << "\tParameter count: " << n << std::endl << std::endl;
}

//std::chrono::timepoint start