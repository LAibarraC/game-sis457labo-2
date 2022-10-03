#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;
class obspuas
{
private:
	string color;
	int posicion;
	int tamano;
public:
	obspuas(string, int, int);
	void quitarvida();
	void eliminar();
};

