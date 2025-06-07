#pragma once
/*

LValue- this is basically a value that represents some location in memory think variable names of memory addresses
RValue- these are generally temporary values that represent data for us to use think numbers, strings, and data structures 

Below is one example:

int i=10

In this case i is the LValue and 10 is the RValue;

This explains the usage of memory operators and how ther syntax works

For example

int* x=10; Does not work because pointers represent a memory address which is a location and 10 is just a data value

but if we gave it a varaible memory address it would work as such 

int y=10;

int* x=&y;

*/