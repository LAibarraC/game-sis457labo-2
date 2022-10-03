#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;
class vidas
{
private:
	string color;
	int posicion;
	int tiempo;
public:
	vidas(string, int, int);
    void otorgavida();
	void comer();
};

