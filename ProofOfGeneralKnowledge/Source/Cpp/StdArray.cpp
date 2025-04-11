#include "../Headers/StdArray.h"

/*
std::array is very similar to just a normal array with additional protection for bounds, keeps track of the size, and has no performance cost 
since it is a pure template with some additional code 
*/

void StdArrayExample()
{
	std::array<int, 8> arr{5,6,7,8,9,10,11,12};
	arr[0] = 14;

	
	PrintArray(arr);
}