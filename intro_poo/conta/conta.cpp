class Conta {
private:
    double saldo;

public:
    void depositar(double valor) {
        if (valor > 0) saldo += valor;
    }

    bool sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            return true;
        }
        return false;
    }

    double getSaldo() {
        return saldo;
    }
};