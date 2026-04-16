class Retangulo {
private:
    int largura;
    int altura;

public:
    int area() {
        return largura * altura;
    }
};

class Retangulo {
private:
    int largura;

public:
    void setLargura(int l) {
        if (l > 0) {
            largura = l;
        }
    }

    int getLargura() {
        return largura;
    }
};