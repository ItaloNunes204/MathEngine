// Classe de logaritmos 
class NumeroLogaritmo{
private:
    
    int logaritmando_;
    int base_;

public:

    NumeroLogaritmo();

    NumeroLogaritmo(int NewLogaritmando, int NewBse);

    void setLogaritmando(int NewLogaritmando);

    int getLogaritmando();

    void setBase(int NewBse);

    int getBase();

    int calcula();
};