#include "numero_racional.h"


void NumeroRacional::simplifica(){
    bool loop = true;
    int numero1 = this->numerador_;
    int numero2 = this->denominador_;
    int resultadoMDC = 1;
    int divisor = 2;
    while(loop == true){
        if(numero1 == 1 && numero2 == 1){
            loop = false;
        }else{
            if(numero1 % divisor == 0 || numero2 % divisor == 0){
                if(numero1 % divisor == 0 && numero2 % divisor == 0){
                    numero1 = numero1 / divisor;
                    numero2 = numero2 / divisor;
                    resultadoMDC = resultadoMDC * divisor;
                }else if(numero1 % divisor == 0){
                    numero1 = numero1 / divisor;
                }else{
                    numero2 = numero2 / divisor;
                }
            }else{
                divisor++;
            }
        }
    }
    this->numerador_ = this->numerador_ / resultadoMDC;
    this->denominador_ = this->denominador_ / resultadoMDC;
}


NumeroRacional::NumeroRacional(){
    this->numerador_ = 0;
    this->denominador_ = 1;
}


NumeroRacional::NumeroRacional(int NewNumerador, int NewDenominador){
    this->numerador_ = NewNumerador;
    this->denominador_ = NewDenominador;
    simplifica();
}


void NumeroRacional::setNumerador(int NewNumerador){
    this->numerador_ = NewNumerador;
    simplifica();
}


int NumeroRacional::getNumerador(){
    return this->numerador_;
}


void NumeroRacional::setDenominador(int NewDenominador){
    this->denominador_ = NewDenominador;
    simplifica();
}


int NumeroRacional::getDenominador(){
    return this->denominador_;
}


float NumeroRacional::calcula(){
    return (this->numerador_/this->denominador_);
}


NumeroRacional NumeroRacional :: soma(NumeroRacional a){
    if(this->denominador_ == a.getDenominador()){
        NumeroRacional NewRacional(this->numerador_ + a.getNumerador(), this->denominador_);
        simplifica();
        return NewRacional;
    }else{
        int NewNumerador = this->numerador_ * a.getDenominador() + this->denominador_ * a.getNumerador();
        int NewDenominador = this->denominador_ * a.getDenominador();
        NumeroRacional NewRacional(NewNumerador, NewDenominador);
        simplifica();
        return NewRacional;
    }
}


NumeroRacional NumeroRacional :: subtrair(NumeroRacional a){
    if(this->denominador_ == a.getDenominador()){
        NumeroRacional NewRacional(this->numerador_ - a.getNumerador(), this->denominador_);
        simplifica();
        return NewRacional;
    }else{
        int NewNumerador = this->numerador_ * a.getDenominador() - this->denominador_ * a.getNumerador();
        int NewDenominador = this->denominador_ * a.getDenominador();
        NumeroRacional NewRacional(NewNumerador, NewDenominador);
        simplifica();
        return NewRacional;
    }
}


NumeroRacional NumeroRacional :: multiplica(NumeroRacional a){
    int NewNumerador = this->numerador_ * a.getNumerador();
    int NewDenominador = this->denominador_ * a.getDenominador();
    NumeroRacional NewRacional(NewNumerador, NewDenominador);
    simplifica();
    return NewRacional;
}


NumeroRacional NumeroRacional :: divicao(NumeroRacional a){
    int NewNumerador = this->numerador_ * a.getDenominador();
    int NewDenominador = this->denominador_ * a.getNumerador();
    NumeroRacional NewRacional(NewNumerador, NewDenominador);
    simplifica();
    return NewRacional;
}
