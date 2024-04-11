#include <iostream>
#include <string>
// #include <cstddef> //inclui NULL, embora o código já possa compilar sem esta biblioteca

using namespace std;

int main() {

	//Definição: Um ponteiro armazenará o endereço de outra variável
	
	//Caso base
	int var1 = 10;
	int* point1 = NULL; //pont1 é um ponteiro. Boa prática
	
	//Caso 1
	point1 = &var1; //Retorna o endereço de var1
	cout << "Caso 1" <<endl;
	cout << "O valor da variavel var1=" << var1 << endl;
	cout << "O endereço/conteúdo do ponteiro é point1=" << point1 << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point1=" << *point1 << endl; //*point1 retorna o conteúdo do endereço que ele aponta.
	
	//Caso 2
	int var2 = var1;
	cout << endl << "Caso 2" << endl;
	cout << "O valor de var2=" << var2 << endl;
	var2 = *point1; //retorna conteúdo do que point1 está apontando. É feito uma cópia deste conteúdo para var2
	cout << "O valor após ponteiro é var2=" << var2 << endl;
	
	//Caso 3 - Comprovar que var2=*point1 faz cópia do conteúdo de point1 para var2 (não é referência)
	var1 = 15; //antes var1=10;
	cout << endl << "Caso 3" << endl;
	cout << "Modifiquei var1 para 15 " << endl;
	cout << "O valor da variavel var1=" << var1 << endl;
	cout << "O valor da variavel var2=" << var2 << endl;
	
	//Caso 4 - Mudar a variável com ponteiro.
	cout << endl << "Caso 4" << endl;
	cout << "O valor da variavel var1=" << var1 << endl;
	*point1 = 30; //var1 era 15 no caso 3.
	cout << "Modifiquei ponteiro, o valor da variavel var1=" << var1 << endl;

	//Caso 5 - Ponteiro vai apontar para outra variável
	point1 = &var2;	
	var2 = 100;
	cout << endl << "Caso 5" << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point1=" << *point1 << endl;
	
	//Caso 6 - 2 ponteiros apontando para a mesma variável
	int* point2 = NULL;
	point2 = &var2;
	//point2 = point1; //igual ao comando anterior
	//int* point2 = &var2; //igual ao comando anterior
	var2 = 200;
	cout << endl << "Caso 6" << endl;
	cout << "O valor var2=" << var2 << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point1=" << *point1 << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point2=" << *point2 << endl;
	var2 = 400;
	cout << "O valor do endereço/conteúdo que é apontado é point1=" << *point1 << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point2=" << *point2 << endl;

	//Caso 7 - Imprimir NULL
	point2 = NULL;
	cout << endl << "Caso 7" << endl;
	cout << "O valor de point2=" << point2 << endl;
	// cout << "O valor do endereço/conteúdo que é apontado é point2=" << *point2 << endl; 
	cout << "Point2 == NULL ? " << (point2 == NULL) << endl;
	
	//Caso 8 - variável inteira sem nome. Acesso somente por ponteiro
	int* point3 = new int;
	*point3 = 1000;
	cout << endl << "Caso 8" << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point3=" << *point3 << endl; 
	//OBS: Cuidado porque se fizer point3 apontar para outra variável, a referência do INT armazenado dinamicamente é perdido.
	
	// Caso 9 - Cuidado com atribuições em ponteiros
	delete(point3); //remover o caso 8
	point3 = new int;
	*point3 = 10;
	point2 = &var2;
	cout << endl << "Caso 9" << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point2=" << *point2 << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point3=" << *point3 << endl;

	//Ponteiros com o mesmo valor, mas apontam para locais diferentes.	
	*point3 = *point2;
	cout << endl<< endl << "mudando point3 para receber point2" << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point2=" << *point2 << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point3=" << *point3 << endl;

	//Prova que os ponteiros estão apontando para locais diferentes, embora tenham o mesmo valor.
	*point3 = 99;
	cout << endl<< endl << "mudando somente INT que POINT3 aponta" << endl;	
	cout << endl<< endl << "mudando point3 para receber point2" << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point2=" << *point2 << endl;
	cout << "O valor do endereço/conteúdo que é apontado é point3=" << *point3 << endl;
	
	

	delete(point3);
	
//cout << endl << "Caso 6" << endl;		
	return 0;
}

