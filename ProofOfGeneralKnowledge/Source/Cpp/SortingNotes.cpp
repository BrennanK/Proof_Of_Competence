#include "../Headers/SortingNotes.h"
#include <vector>
#include <algorithm>
#include "../Headers/MacroEx.h"
#include <functional>
void SortingNotes()
{
	std::vector<int> values = { 4,1,3,2,5 };
	std::sort(values.begin(), values.end());
	for (int x : values)
	{
		LOG(x);
	}

	std::sort(values.begin(), values.end(),std::greater<int>());

	for (int x : values)
	{
		LOG(x);
	}

	std::sort(values.begin(), values.end(), [](int a,int b)
		{
			if (a == 1)
			{
				return a > b;
			}
			return a < b;
		});
	LOG("");
	LOG("Custom Sort: ");

	for (int x : values)
	{
		LOG(x);
	}
}
