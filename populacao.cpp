Populacao::Populacao(){
	tam = 0;
}

Populacao::Populacao(int tamanho){
	tam = tamanho;
	pop = new Individuo[tam];
}

Populacao::~Populacao(void){
	//fprintf(stdout, "Populacao->destrutor");
	//delete pop;
}

int Populacao::geraPopulacaoBase(float media, float desvioPadrao){
    std::default_random_engine generator;
	std::normal_distribution<double> distribution(media, desvioPadrao);

	for (int i=0; i<tam; i++){
		pop[i] = Individuo(i);
		pop[i].setValorGenetico(distribution(generator));
		pop[i].sexo = rand() %2;
	}

}

int Populacao::geraPopulacaoBase(float mediaVG, float dpVG, float mediaEA, float dpEA){
    std::default_random_engine generator;
	std::normal_distribution<double> distribution(mediaVG, dpVG);
	std::normal_distribution<float> environment(mediaEA, dpEA);

	for (int i=0; i<tam; i++){
		pop[i] = Individuo(i);
		pop[i].setValorGenetico(distribution(generator));
		pop[i].setValorAmbiente(environment(generator));
		pop[i].sexo = rand() %2;
	}

}

Individuo Populacao::getIndividuo(int pos){
	return pop[pos];
}

void Populacao::imprime(FILE *saida){
	fprintf(saida,"ID \tSX \tVG \tVE \tVF \n");
	for (int i=0; i<tam; i++){
		fprintf(saida,"%d \t%d \t%.3f \t%.3f \t%.3f \n",pop[i].idIndividuo, pop[i].sexo, pop[i].vg, pop[i].ve, pop[i].vf);
	}
	
}
