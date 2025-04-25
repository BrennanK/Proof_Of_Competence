#include "../Headers/UnionNotes.h"
#include "../Headers/MacroEx.h"
/*
Unions allow us to group members together for addressing sets of values for varying purposes. 
This also helps in that we can address variables with similar properties without having to make new objects
*/
struct Vector2
{
	float x, y;
};
struct Vector4
{
	union
	{
		struct
		{
			float a, b, c, d;
		};
		struct
		{
			Vector2 g, h;
		};
	};
	
};

void PrintVector2D(const Vector2& vec)
{
	std::cout << vec.x << "," << vec.y << std::endl;
}
void UnionNotes()
{
	Vector4 sampVec = { 10.0f,20.0f,30.0f,40.0f };

	PrintVector2D(sampVec.g);
	PrintVector2D(sampVec.h);

	sampVec.h = { 1000.0f,13450.0f };
	sampVec.a = sampVec.c / sampVec.b;

	PrintVector2D(sampVec.g);
	PrintVector2D(sampVec.h);
}
