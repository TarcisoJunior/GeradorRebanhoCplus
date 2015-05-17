#include <stdio.h>
#include <math.h>
//#include "funcoes.cpp"
#include "populacao.hpp"
#include "populacao.cpp"

int main(){
  
	Populacao pop(1000);
	pop.geraPopulacaoBase(0,1,0,2);
	pop.imprime(stdout);	
	fprintf(stdout, "\n\nok");
	
	return(0);
}


