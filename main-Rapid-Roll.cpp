#include<iostream>
#include<stdlib.h>
#include"balon.h"
#include"obstaculo.h"
#include"obsfalso.h"
#include"obspuas.h"
#include"vidas.h"
#include"tablero.h"
using namespace std;
int main() {
	//1
	balon b1 = balon("rojo", 23, "redondo");
	b1.mover();
	//2
	obstaculo p1 = obstaculo("rectangular", 23, 45, 75);
	p1.salvavida();
	//3
	obsfalso f1 = obsfalso("tablones", 24, 234, 233);
	f1.desaparecer();
	//4
	obspuas u1 = obspuas("negro", 23, 245);
	u1.quitarvida();
	//5
	vidas v1 = vidas("rojo", 45, 67);
	v1.otorgavida();
	//6
	tablero t1 = tablero(1, 23);
    t1.mostrar();


}