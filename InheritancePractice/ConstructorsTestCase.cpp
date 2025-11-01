#include "ConstructorTestCase.h"

double testConstructor(int numObjects)
{
	std::chrono::high_resolution_clock::time_point startConstructor = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < numObjects; ++i)
	{
		Fightership fighterShip{ "fighter", Vector3{1,1,0}, Vector3{1,1,0}, 95, 100, 85 };
	}

	std::chrono::high_resolution_clock::time_point endConstructor = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> elapsedConstructor = endConstructor - startConstructor;

	return elapsedConstructor.count();
}

double testMemberList(int numObjects)
{
	std::chrono::high_resolution_clock::time_point startMemberList = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < numObjects; ++i)
	{
		Bombership bomberShip{ "bomber", Vector3{1,1,0}, Vector3{1,1,0}, 95, 100, 85 };
	}

	std::chrono::high_resolution_clock::time_point endMemberList = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> elapsedMemberList = endMemberList - startMemberList;

	return elapsedMemberList.count();
}
void testCase()
{
	std::vector<int> testCases = { 10, 100, 1000, 10000, 100000, 1000000, 10000000 };


	std::cout << std::setw(12) << "Objects"
		<< std::setw(15) << "Constructor (ms)"
		<< std::setw(15) << "MemberList (ms)"
		<< std::setw(15) << "Difference\n";
	std::cout << std::string(60, '-') << "\n";

	for (int n : testCases)
	{
		double constructorTime = testConstructor(n);

		double memberListTime = testMemberList(n);

		double ratio = constructorTime / memberListTime;

		std::cout << std::setw(12) << n
			<< std::setw(15) << std::fixed << std::setprecision(4) << constructorTime
			<< std::setw(15) << memberListTime
			<< std::setw(15) << std::setprecision(2) << ratio << "x\n";
	}
}