#pragma once
void BreakPointPractice(int& breakPointValue)
{
	int methodValue = breakPointValue;

	LOG(breakPointValue);

	methodValue *= breakPointValue;

	LOG("End of practice");
}