#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;
class balon
{
private:
	string color;
	float tama�o;
	string forma;
public:
	balon(string, float, string);
	void mover();
	void saltar();
	void vida();

};

