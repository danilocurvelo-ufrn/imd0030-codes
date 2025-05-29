// Não precisamos prover nomes para os parâmetros já que não vamos usa-los
template <typename T>
int someFcn(T, double) {
    return 5;
}

int main() {
    someFcn(1, 3.4); // casa com someFcn(int, double)
    someFcn(1, 3.4f); // casa com someFcn(int, double) -- float promovido a double
    someFcn(1.2, 3.4); // casa com someFcn(double, double)
    someFcn(1.2f, 3.4); // casa com someFcn(float, double)
    someFcn(1.2f, 3.4f); // casa com someFcn(float, double) -- float promovido a double

    return 0;
}