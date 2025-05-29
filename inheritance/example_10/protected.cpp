class BaseProtegida {
public:
    int publicVar;
protected:
    int protectedVar;
};

class DerivadaProtegida : protected BaseProtegida { // Herança protegida
public:
    void acessarMembros() {
        publicVar = 10;   // publicVar se tornou protected em DerivadaProtegida
        protectedVar = 20; // protectedVar continua protected
    }
};

int main() {
    BaseProtegida base;
    base.publicVar = 5;

    DerivadaProtegida derivada;
    derivada.publicVar = 5; // ERRO: publicVar é protected para objetos de DerivadaProtegida

    return 0;
}
