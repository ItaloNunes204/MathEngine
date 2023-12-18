
// Classe para números racionais ou frações
class NumeroRacional{
private:

    int numerador_;
    int denominador_;
    void simplifica();

public:

    // construtor da classe
    NumeroRacional();

    // construtor da classe
    NumeroRacional(int NewNumerador, int NewDenominador);

    // modifica o valor do numerador
    void setNumerador(int NewNumerador);

    // retorna o valor do numerador
    int getNumerador();
    
    // modifica o valor do denominador
    void setDenominador(int NewDenominador);
    
    // retorna o valor do denominador
    int getDenominador();

    // retorna um numero decimal 
    float calcula();

    // soma dois números racionais
    NumeroRacional soma(NumeroRacional a);

    // subtrai dois números racionais 
    NumeroRacional subtrair(NumeroRacional a);

    // multiplique dois números racionais 
    NumeroRacional multiplica(NumeroRacional a);

    // divida dois números racionais 
    NumeroRacional divicao(NumeroRacional a);

};
