//classe de números exponenciais
class NumeroExponencial{
private:

    int base_;
    int expoente_;

public:

    // Construtos sem parâmetros 
    NumeroExponencial();

    // Construtos com parâmetros 
    NumeroExponencial(int base, int expoente);

    // Modifica a base
    void setBase(int base);

    // Retorna a base
    int getBase();

    // Modifica o expoente 
    void setExpoente(int expoente);

    // Retorna o expoente
    int getExpoente();
    
    // Calcula
    int calcula();

    // Realiza uma multiplicação
    NumeroExponencial multiplicacao(NumeroExponencial a);

    //Realiza uma divição
    NumeroExponencial divicao(NumeroExponencial a);

};
