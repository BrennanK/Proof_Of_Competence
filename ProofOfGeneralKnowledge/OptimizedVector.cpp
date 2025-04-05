#include "OptimizedVector.h"
#include <vector>
void STDVectorNotes()
{
	std::vector<OffsetEx>en;
	en.push_back({4,5,6});
	en.push_back({ 7,8,9 });

	for (int i = 0; i < en.size(); i++)
	{
		std::cout << en[i];
	}

	en.erase(en.begin() + 1);

	//ALternative way of looping similar to for each loop in other languages
	for (OffsetEx& o : en)
	{
		std::cout << o;
	}
}
