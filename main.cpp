#include "Sculptor.hpp"

int main() {
	Sculptor piramideasteca(44,44,20);
  //Cor Beje
	piramideasteca.setColor(1.0, 0.93, 0.59, 1.0);
  //Blocos
	piramideasteca.putBox(2,42,2,42,0,1);
  piramideasteca.putBox(2,42,2,42,1,2);
  piramideasteca.putBox(4,40,4,40,2,3);
  piramideasteca.putBox(4,40,4,40,3,4);
  piramideasteca.putBox(6,38,6,38,4,5);
  piramideasteca.putBox(6,38,6,38,5,6);
  piramideasteca.putBox(8,36,8,36,6,7);
  piramideasteca.putBox(8,36,8,36,7,8);
  piramideasteca.putBox(10,34,10,34,8,9);
  piramideasteca.putBox(10,34,10,34,9,10);
  piramideasteca.putBox(12,32,12,32,10,11);
  piramideasteca.putBox(12,32,12,32,11,12);
  piramideasteca.putBox(14,30,14,30,12,13);
  piramideasteca.putBox(14,30,14,30,13,14);
  piramideasteca.putBox(16,28,16,28,14,15);
  piramideasteca.putBox(16,28,16,28,15,16);
  piramideasteca.putBox(18,26,18,26,16,17);
  piramideasteca.putBox(18,26,18,26,17,18);

  piramideasteca.setColor(1.0, 0.8, 0.6, 1.0); //mudando cor da escada e do topo
  piramideasteca.putBox(20,24,20,24,18,20);

  //Escadas
  piramideasteca.putBox(0,2,20,24,0,2);
  piramideasteca.cutBox(0,1,20,24,1,2);
  piramideasteca.putBox(2,4,20,24,2,4);
  piramideasteca.cutBox(2,3,20,24,3,4);
  piramideasteca.putBox(4,6,20,24,4,6);
  piramideasteca.cutBox(4,5,20,24,5,6);
  piramideasteca.putBox(6,8,20,24,6,8);
  piramideasteca.cutBox(6,7,20,24,7,8);
  piramideasteca.putBox(8,10,20,24,8,10);
  piramideasteca.cutBox(8,9,20,24,9,10);
  piramideasteca.putBox(10,12,20,24,10,12);
  piramideasteca.cutBox(10,11,20,24,11,12);
  piramideasteca.putBox(12,14,20,24,12,14);
  piramideasteca.cutBox(12,13,20,24,13,14);
  piramideasteca.putBox(14,16,20,24,14,16);
  piramideasteca.cutBox(14,15,20,24,15,16);
  piramideasteca.putBox(16,18,20,24,16,18);
  piramideasteca.cutBox(16,17,20,24,17,18);

  piramideasteca.putBox(42,44,20,24,0,2);
  piramideasteca.cutBox(43,44,20,24,1,2);
  piramideasteca.putBox(40,42,20,24,2,4);
  piramideasteca.cutBox(41,42,20,24,3,4);
  piramideasteca.putBox(38,40,20,24,4,6);
  piramideasteca.cutBox(39,40,20,24,5,6);
  piramideasteca.putBox(36,38,20,24,6,8);
  piramideasteca.cutBox(37,38,20,24,7,8);
  piramideasteca.putBox(34,36,20,24,8,10);
  piramideasteca.cutBox(35,36,20,24,9,10);
  piramideasteca.putBox(32,34,20,24,10,12);
  piramideasteca.cutBox(33,34,20,24,11,12);
  piramideasteca.putBox(30,32,20,24,12,14);
  piramideasteca.cutBox(31,32,20,24,13,14);
  piramideasteca.putBox(28,30,20,24,14,16);
  piramideasteca.cutBox(29,30,20,24,15,16);
  piramideasteca.putBox(26,28,20,24,16,18);
  piramideasteca.cutBox(27,28,20,24,17,18);

  piramideasteca.putBox(20,24,0,2,0,2);
  piramideasteca.cutBox(20,24,0,1,1,2);
  piramideasteca.putBox(20,24,2,4,2,4);
  piramideasteca.cutBox(20,24,2,3,3,4);
  piramideasteca.putBox(20,24,4,6,4,6);
  piramideasteca.cutBox(20,24,4,5,5,6);
  piramideasteca.putBox(20,24,6,8,6,8);
  piramideasteca.cutBox(20,24,6,7,7,8);
  piramideasteca.putBox(20,24,8,10,8,10);
  piramideasteca.cutBox(20,24,8,9,9,10);
  piramideasteca.putBox(20,24,10,12,10,12);
  piramideasteca.cutBox(20,24,10,11,11,12);
  piramideasteca.putBox(20,24,12,14,12,14);
  piramideasteca.cutBox(20,24,12,13,13,14);
  piramideasteca.putBox(20,24,14,16,14,16);
  piramideasteca.cutBox(20,24,14,15,15,16);
  piramideasteca.putBox(20,24,16,18,16,18);
  piramideasteca.cutBox(20,24,16,17,17,18);

  piramideasteca.putBox(20,24,42,44,0,2);
  piramideasteca.cutBox(20,24,43,44,1,2);
  piramideasteca.putBox(20,24,40,42,2,4);
  piramideasteca.cutBox(20,24,41,42,3,4);
  piramideasteca.putBox(20,24,38,40,4,6);
  piramideasteca.cutBox(20,24,39,40,5,6);
  piramideasteca.putBox(20,24,36,38,6,8);
  piramideasteca.cutBox(20,24,37,38,7,8);
  piramideasteca.putBox(20,24,34,36,8,10);
  piramideasteca.cutBox(20,24,35,36,9,10);
  piramideasteca.putBox(20,24,32,34,10,12);
  piramideasteca.cutBox(20,24,33,34,11,12);
  piramideasteca.putBox(20,24,30,32,12,14);
  piramideasteca.cutBox(20,24,31,32,13,14);
  piramideasteca.putBox(20,24,28,30,14,16);
  piramideasteca.cutBox(20,24,29,30,15,16);
  piramideasteca.putBox(20,24,26,28,16,18);
  piramideasteca.cutBox(20,24,27,28,17,18);

	piramideasteca.writeOFF((char*)"piramideasteca.off");
	return 0;
}