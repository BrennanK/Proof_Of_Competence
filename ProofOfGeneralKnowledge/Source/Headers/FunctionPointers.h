#pragma once
void FunctionPointerExample();
void PrintSomething();
void PrintInt(int& a);
void PassFunctionExample(void(*func)(int&), int& a);