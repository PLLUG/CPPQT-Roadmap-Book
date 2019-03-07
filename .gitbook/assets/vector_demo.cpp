#include <vector>
#include <string>
#include <iostream>

const std::string cExitValue {"exit"};

int main()
{
	std::vector<std::string> studentsList;

	std::string nextStudent;
	do
	{
		std::cin >> nextStudent;

		if (nextStudent != cExitValue)
		{
			 studentsList.push_back(nextStudent);
		}
	} 
	while(nextStudent != cExitValue);

	for (int index = 0; index < studentsList.size(); ++index)
	{
		std::cout << index << " : " << studentsList.at(index) << std::endl;
	}
}
