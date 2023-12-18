#include "numero_exponencial.h"


NumeroExponencial::NumeroExponencial(){
    this->base_ = 0;
    this->expoente_ = 1;
}


NumeroExponencial::NumeroExponencial(int base, int expoente){
    this->base_ = base;
    this->expoente_ = expoente;
}


void NumeroExponencial::setBase(int base){
    this->base_ = base;
}


int NumeroExponencial::getBase(){
    return this->base_;
}


void NumeroExponencial::setExpoente(int expoente){
    this->expoente_ = expoente;
}


int NumeroExponencial::getExpoente(){
    return this->expoente_;
}


int NumeroExponencial::calcula(){
    if(this->expoente_ == 0){
        return 1;
    }else{
        int valor = 1;
        for(int i = 0; i < this->expoente_;i++){
            valor = valor * this->base_;
        }
        return valor;
    }
}


NumeroExponencial NumeroExponencial::multiplicacao(NumeroExponencial a){
    NumeroExponencial NewExponencial(this->base_,this->expoente_ + a.getExpoente());
    return NewExponencial;
}


NumeroExponencial NumeroExponencial::divicao(NumeroExponencial a){
    NumeroExponencial NewExponencial(this->base_,this->expoente_ - a.getExpoente());
    return NewExponencial;
}
