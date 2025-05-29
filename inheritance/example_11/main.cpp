class Pessoa {
public:
    std::string nome;
    Pessoa(std::string n) : nome(n) {
        std::cout << "Construtor de Pessoa: " << nome << std::endl;
    }
    ~Pessoa() {
        std::cout << "Destrutor de Pessoa: " << nome << std::endl;
    }
};

class Estudante : public Pessoa {
public:
    int matricula;
    // O construtor de Estudante chama o construtor de Pessoa
    Estudante(std::string n, int m) : Pessoa(n), matricula(m) {
        std::cout << "Construtor de Estudante: " << nome << " (Matrícula: " << matricula << ")" << std::endl;
    }
    ~Estudante() {
        std::cout << "Destrutor de Estudante: " << nome << " (Matrícula: " << matricula << ")" << std::endl;
    }
};

int main() {
    Estudante joao("João", 12345);
    // Saída esperada:
    // Construtor de Pessoa: João
    // Construtor de Estudante: João (Matrícula: 12345)
    // ... (quando joao sai do escopo) ...
    // Destrutor de Estudante: João (Matrícula: 12345)
    // Destrutor de Pessoa: João
    return 0;
}