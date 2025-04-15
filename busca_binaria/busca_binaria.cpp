#include <vector>

int buscaBinariaRecursiva(std::vector<int>& v, int esq, int dir, int alvo) {
    if (esq > dir)
        return -1;

    int meio = (esq + dir) / 2;

    if (v[meio] == alvo)
        return meio;
    else if (v[meio] > alvo)
        return buscaBinariaRecursiva(v, esq, meio - 1, alvo);
    else
        return buscaBinariaRecursiva(v, meio + 1, dir, alvo);
}