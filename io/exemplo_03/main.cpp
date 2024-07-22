#include <iostream> // para std::cout
#include <fstream> // para std::ifstream e std::ofstream
#include <sstream> // para std::stringstream
#include <iomanip> // para std::setprecision e std::fixed

class Aluno {

	private:
		std::string nome;
		double nota1, nota2, nota3;

	public:
		Aluno(std::string nome, double nota1, double nota2, double nota3)
			: nome(nome), nota1(nota1), nota2(nota2), nota3(nota3)
		{
		}

		std::string getNome() {
			return nome;
		}

		double calcularMedia() {
			return (nota1 + nota2 + nota3)/3.0;
		}

		static std::string situacao(double media) {
			if (media >= 7.0) {
				return "Aprovado";
			}
			return "Reprovado";
		}

};

int main()  {

	std::string strInput;
	std::ifstream fin("entrada.txt");
	std::ofstream fout("saida.txt");

	while (std::getline(fin, strInput)) {

        std::stringstream ss(strInput);
		std::string nome;
        std::string nota1;
		std::string nota2;
		std::string nota3;

        std::getline(ss, nome, ';');
        std::getline(ss, nota1, ';');
		std::getline(ss, nota2, ';');
		std::getline(ss, nota3, ';');

		Aluno alunoAtual(nome, std::stod(nota1), std::stod(nota2), std::stod(nota3));
		double media = alunoAtual.calcularMedia();

		std::cout << std::setprecision(1) << std::fixed;
		std::cout << alunoAtual.getNome() << " " << media << " " << Aluno::situacao(media) << std::endl;

		fout << std::setprecision(1) << std::fixed;
		fout << alunoAtual.getNome() << " " << media << " " << Aluno::situacao(media) << std::endl;
    }

	return 0; 
}
