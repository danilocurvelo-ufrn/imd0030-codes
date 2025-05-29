#ifndef UTILS_H
#define UTILS_H

template <typename T>
void trocar(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void imprimirArray(T* v, int n) {
    for (int i = 0; i < n; i++)
        std::cout << v[i] << " ";
}

#endif