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
	balon b1 = balon("rojo", 2, "redondo");
	b1.mover();
	//2
	obstaculo p1 = obstaculo("bloques", 2, 4, 5);
	p1.salvavida();
	//3
	obsfalso f1 = obsfalso("bloquesfalsos", 4, 0.5, 3);
	f1.desaparecer();
	//4
	obspuas u1 = obspuas("negro", 2, 5);
	u1.quitarvida();
	//5
	vidas v1 = vidas("rojo", 5, 7);
	v1.otorgavida();
	//6
	tablero t1 = tablero(1, 3);
    t1.mostrar();


}