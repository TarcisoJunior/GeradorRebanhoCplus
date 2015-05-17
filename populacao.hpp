#include <iostream>
#include <random>
#include "individuo.hpp";
#include "individuo.cpp";

class Populacao {
    Individuo *pop;
	int tam;
	public:
	Populacao(void);
	Populacao(int tamanho);
	~Populacao(void);
	
	Individuo getIndividuo(int pos);
	int geraPopulacaoBase(float media, float desvioPadrao);
	int geraPopulacaoBase(float mediaVG, float dpVG, float mediaEA, float dpEA);
	void imprime(FILE *saida);
};
