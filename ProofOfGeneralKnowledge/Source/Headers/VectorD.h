#pragma once
#include <iostream>
#include "PrintableInterface.h";
class VectorD: public IPrintable
{

public:
	VectorD() :X(0.0f) {};
	VectorD(float XValue) :X(XValue) {};
protected:
	float X=0.0f;
public:
	float getX();
	virtual std::string typeOfVector(); // In base class put virtual keyword to create a vtable for overriding methods in subclasses
	void printClassName() override;
	VectorD operator+(const VectorD & vec) const;
	virtual void printString();
};

