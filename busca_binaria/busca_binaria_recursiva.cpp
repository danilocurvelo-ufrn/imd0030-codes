int buscaBinaria(int v[], int esq, int dir, int alvo) {
    if (esq > dir)
        return -1;

    int meio = (esq + dir) / 2;

    if (v[meio] == alvo)
        return meio;

    if (alvo < v[meio])
        return buscaBinaria(v, esq, meio - 1, alvo);
    else
        return buscaBinaria(v, meio + 1, dir, alvo);
}