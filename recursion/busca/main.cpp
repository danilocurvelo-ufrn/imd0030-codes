int busca(int v[], int n, int alvo) {
    if (n == 0) return -1;           // não encontrou
    if (v[n - 1] == alvo) return n - 1; // encontrou

    return busca(v, n - 1, alvo);
}

int main() {
    busca
}