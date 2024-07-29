#ifndef PILHA_H
#define PILHA_H

#include <iostream>

template <class T>
class Pilha {
    private:
        T *m_elementos;   // Elementos armazenados na pilha
        int m_tamanho;    // Qtde atual de elementos
        int m_capacidade; // Qtde Max de elementos
    public:
        Pilha(int n_capacidade = 50);
        ~Pilha();
        bool empty();
        bool full();
        T& top();
        int push(T novo);
        int pop();
        int size();
};

template <typename T>
Pilha<T>::Pilha(int n_capacidade): 
    m_tamanho(0), m_capacidade(n_capacidade) 
{
	m_elementos = new T[n_capacidade];
}
 
template <typename T>
Pilha<T>::~Pilha() {
	delete [] m_elementos;
}

template <typename T>
bool Pilha<T>::empty() {
	return m_tamanho == 0;
}
 
template <typename T>
bool Pilha<T>::full() {
	return m_tamanho == m_capacidade;
}

template <typename T>
int Pilha<T>::push (T novo) {
	if (full())
		return 0;
	m_elementos[m_tamanho] = novo;
	m_tamanho++;
	return 1;
}

template <typename T>
int Pilha<T>::pop() {
	if (empty())
		return 0;
	m_tamanho--; 
	return 1;
}

template <typename T>
T& Pilha<T>::top() {	
	if (empty()) {
		std::cerr << "Acesso invalido a elemento no topo. O programa sera fechado!" << std::endl;
		exit(EXIT_FAILURE);
	}
	return m_elementos[m_tamanho-1];
}

template <typename T>
int Pilha<T>::size() {
	return m_tamanho;
}
 
#endif