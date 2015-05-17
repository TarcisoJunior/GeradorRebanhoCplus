Individuo::Individuo(void){
	idIndividuo = 0;
	idPai = 0;
	idMae = 0;
	sexo = 0;
	vg = 0;
	ve = 0;
	vf = 0;
	geracao = 0;
}

Individuo::Individuo(const Individuo &pIndividuo){
	idIndividuo = pIndividuo.idIndividuo;
	idPai = pIndividuo.idPai;
	idMae = pIndividuo.idMae;
	sexo = pIndividuo.sexo;
	vg = pIndividuo.vg;
	ve = pIndividuo.ve;
	vf = pIndividuo.vf;
	geracao = pIndividuo.geracao;
}

Individuo::Individuo(int id){
	idIndividuo = id;
	idPai = 0;
	idMae = 0;
	sexo = 0;
	vg = 1;
	ve = 0;
	vf = 0;
	geracao = 0;
}

Individuo::~Individuo(void){
	//fprintf(stdout,"Individuo -> destrutor");
}

int Individuo::getId(){
	return idIndividuo;
}

int Individuo::setValorGenetico(float valor){
	vg = valor;
	vf = vg + ve;
	return 0;
}

float Individuo::getValorGenetico(){
	return vg;
}

int Individuo::setValorAmbiente(float valor){
	ve = valor;
	vf = vg + ve;
	return 0;
}

float Individuo::getValorAmbiente(){
	return ve;
}


