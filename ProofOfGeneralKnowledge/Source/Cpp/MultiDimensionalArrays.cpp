#include "../Headers/MultiDimensionalArrays.h"
#include <string>;
#include "../Headers/MacroEx.h"
#include "../Headers/TimingNotes.h"
void MultiDimensionalExample()
{
	// How to initialize an 2d array
	int** x =new int*[3]; // Intializes row pointers for 2D array
	for (int i = 0; i < 3; i++)
	{
		x[i] = new int[3]; // initalizes pointers per column inside a row
	}


	print2DArray(x);

	// This is how you assign a value for each individual index
	// in this case the [] brackets are dereferencing the pointers to allow a value to be assigned
	for (int i=0;i<3;i++)
	{
		for (int y=0;y<3;y++)
		{
			x[i][y] = 12;
		}
	}

	print2DArray(x);

	x[0][0] = 1; 
	x[0][1] = 4;

	print2DArray(x);

	for (int i = 0; i < 3; i++) // be aware that simply deleting the 2d array using [] is insufficent and causes memory leaks
	{
		delete[] x[i]; // You have to delete each array of pointers by looping through each dimension
	}

	delete[] x;

	std::cout << "Done\n";
}

void print2DArray(int** arr)
{
	Timer t;
	for (int i=0;i<3;i++)
	{
		for (int y = 0; y < 3; y++)
		{
			std::cout << arr[i][y] << " ";
			if (y == 2)
			{
				std::cout <<"\n";
			}
		}
	}
	
}
