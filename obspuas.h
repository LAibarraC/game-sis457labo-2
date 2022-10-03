#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;
class obspuas
{
private:
	string color;
	int posicion;
	float tamaño;
public:
	obspuas(string, int,float);
	void quitarvida();
	void eliminar();
};

