
#include "includes/Main.hpp"
#include "includes/UtilityFunctions.hpp"

void waitForInput();


int main(int argc, char *argv[])
{
	if (argc == 2) {
		initializeProgram();
		
		auto timepointStart = std::chrono::system_clock::now();
	
		std::cout << argv[1] << std::endl;
	
		waitForInput();
		
		auto timepointEnd = std::chrono::system_clock::now();
	
		auto durationDifference = timepointEnd - timepointStart;
		
		std::cout << std::chrono::duration<double, std::ratio<1, 1'000>>(durationDifference).count() << "ms " << std::endl;
		
		// Write output to a file
		
	} else {
		return EXIT_FAILURE;
	}
}


void waitForInput()
{
	system("pause");
}