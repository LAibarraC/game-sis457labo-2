#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;
class obstaculo
{
private:
	string forma;
	int cantidades;
	float tamaño;
	int posicion;
public:
	obstaculo(string, int, float, int);
	void salvavida();
};

