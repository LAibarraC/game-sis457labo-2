#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;
class obstaculo
{
private:
	string forma;
	int cantidades;
	float tamano;
	int posicion;
public:
	obstaculo(string, int, float, int);
	void salvavida();
};

