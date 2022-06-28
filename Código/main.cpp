/*                           
  Universidade Federal do Rio Grande do Norte
  Disciplina: Programação Avançada
  Docente: Agostinho Brito Júnior
  Discentes: Caio Renan de Assis Souza e Matheus Floriano Gonçalves.
*/

/* 
  Objetivo do Programa: Basea-se na criação de uma ferramenta em prol da realização de escuturas em blocos que são representadas por matrizes digitais alocadas na memória da máquina.
*/

#include "sculptor.hpp"
#include <iostream>

int main() 
{ 
 Sculptor Sculptor (41,41,41);
 // Cria o Mar
 Sculptor.setColor (0.0,0.0,0.8,0.3);
 Sculptor.putBox(0,40,0,40,0,12);
 Sculptor.cutBox(1,39,1,39,1,11);
  
 // Cria a Base do Barco
 Sculptor.setColor (0.4,0.2,0,1.0);
 Sculptor.putEllipsoid(21,21,17,5,12,8);
 Sculptor.cutBox(0,40,0,40,17,40);
  
 // Cria a Vela
 Sculptor.setColor (1.0,1.0,1.0,1.0);
 Sculptor.putEllipsoid (21,21,24,10,4,7);
 Sculptor.cutEllipsoid (21,24,24,10,4,5);
 Sculptor.cutBox(0,40,0,40,17,19);
 Sculptor.cutBox(0,14,0,40,17,40);
 Sculptor.cutBox(28,40,0,40,17,40);
 Sculptor.cutBox(0,40,0,40,29,40);  
  
 // Cria o Mastro
 Sculptor.setColor (0.4,0.2,0.0,1.0);
 Sculptor.putBox(21,21,21,21,17,33);
 Sculptor.putBox(14,28,18,21,29,29);
 Sculptor.writeOFF("barquinho.off");
 
};
