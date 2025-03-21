#pragma once
#include <iostream>
#include "PrintableInterface.h";
class VectorD: public IPrintable
{

public:
	VectorD() = default;
	VectorD(float XValue);
protected:
	float X;
public:
	float getX();
	virtual std::string typeOfVector();
	void printClassName() override;
};

