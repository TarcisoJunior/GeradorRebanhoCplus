class Individuo{
	public:
	int idIndividuo ;
	int idPai, idMae;
	int sexo;
	float vg, ve, vf, geracao;
	
	public:
	Individuo(void);
	Individuo(const Individuo &pIndividuo);
	Individuo(int id);
    ~Individuo(void);
    
    int getId();
    int setValorGenetico(float valor);
    int setValorAmbiente(float valor);
    float getValorGenetico();
    float getValorAmbiente();
    
};


