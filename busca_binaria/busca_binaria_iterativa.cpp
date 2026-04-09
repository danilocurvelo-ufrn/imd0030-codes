int buscaBinaria(int v[], int n, int alvo) {
    int esq = 0, dir = n - 1;

    while (esq <= dir) {
        int meio = (esq + dir) / 2;

        if (v[meio] == alvo)
            return meio;

        if (alvo < v[meio])
            dir = meio - 1;
        else
            esq = meio + 1;
    }

    return -1;
}