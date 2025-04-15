#include "../Headers/ThreadNotes.h"
#include <thread>
#include "../Headers/MacroEx.h"

/*
Threads work by allowing us to perform work simultaniously by putting different tasks or processes on different threads

Join method blocks current task/thread from continuing to execute until the tread that called join finishes it's task

std::thread takes in void pointers in which case if parameters exist the signature is std::thread x(pointer, parameter,...) 
*/
static bool finish_work = false;

void ThreadExample()
{
	std::cout << "Thread Id: " << std::this_thread::get_id() << " is starting" << std::endl;
	MorphGun JGun = MorphGun(GunType::AssultRifle, 100);
	int y = 12;

	std::thread workThread(ThreadWork,std::ref(JGun));
	std::cin.get();
	finish_work = true;
	workThread.join();
}

void ThreadWork(MorphGun& mGun)
{
	std::cout << "Thread Id: " << std::this_thread::get_id() << " is starting" << std::endl;
	using namespace std::literals::chrono_literals;
	while (!finish_work)
	{
		LOG("GunStats: ");
		LOG(mGun.GetGunType());
		LOG(mGun.GetAmmoCount());
		std::this_thread::sleep_for(1s);
	}
	std::cout << "Thread Id: " << std::this_thread::get_id() << " is finished"<<std::endl;
	
}

void ThreadInt(int& a)
{
	std::cout << a << std::endl;
}
