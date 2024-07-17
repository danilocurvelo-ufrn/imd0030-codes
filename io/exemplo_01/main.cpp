#include <fstream>

std::ifstream arqDados("dados.dat");

int main() {

if (arqDados.bad()) {
    cerr << "o arquivo nao foi aberto" << endl;
    exit(1);
}

if (!arqDados) {
    cerr << "o arquivo nao foi aberto" << endl;
    exit(1);
}

if (arqDados.is_open() == 0) {
    cerr << "o arquivo nao foi aberto" << endl;
    exit(1);
}

std::ifstream arqDados("dados.dat");

while (!arqDados.eof()) {
	// lê arquivo
	// ...
}

char str[10];
std::ifstream in_file("dados.dat");
in_file >> str;          // extrai “o tipo de dado” definido por str do arquivo in_file 
in_file.read(str, 5);    // lê 5 caracteres do arquivo in_file
in_file.getline(str, 8); // lê uma linha de no máximo 8 caracteres do arquivo in_file


}
