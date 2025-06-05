#pragma once
#include "../Headers/MacroEx.h"
class SingletonExample
{
private:
	SingletonExample() {};
	
	int classValue = 40;
public:
	static SingletonExample& Get()
	{
		static SingletonExample s_instance;
		return s_instance;
	}
	static int returnInt()
	{
		return Get().classValue;
	}

	void someSingletonFunction()
	{
		LOG("We called a Singleton Function!");
	}
	// We do this so that we don not allow copies of our singleton instance so that the purpose of a singleton is not deleted
	SingletonExample(SingletonExample& copy) = delete;
	
};

//SingletonExample SingletonExample::s_Instance;