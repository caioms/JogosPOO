// Tema 3 - Jogo de Corrida.
#include <iostream>
#include <string>
using namespace std;


// Identificador da função 'imprimir_espaços'.
void imprimir_espacos(int total);

int main(int argc, char* args[])
{
	// Quantidade Total de Espaços.
	int total_espacos = 50;
	
	string nome_jog1, nome_jog2;
	
	// Armazenar o nome dos Jogadores. 
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> nome_jog1;
	
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> nome_jog2;
	/*
	*	Laço para as rodadas do jogo. 
	*	A cada rodada o carro do jogador anda 1 (um) espaço.
	*
	*	Rodada		Carro
	*	0			 s
	*   1			  s
	*   2			   s
	*   3			    s
	*	...			...
	*   9			          s
	*
	*/
	int rodada = 0;
	while (rodada < total_espacos)
	{
		
		// Mostra em tela o Letreiro do Jogo.
		cout << "Jogo de Corrida" << endl;
		// Mostra em tela o cartaz de fim de pista. 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;

		// Jogador 1: 
		//	a) Coloca uma quantidade de espaços dependendo da rodada.
		//  b) Mostra o carro.
		cout << nome_jog1 << endl;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
		
		// Repetir a pista o total de vezes:
		for (int cont = 0; cont < total_espacos; cont++) cout << "-";
		cout << endl;
		
		// Jogador 2:
		cout << nome_jog2 << endl;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
		
		// Repetir a pista o total de vezes:
		for (int cont = 0; cont < total_espacos; cont++) cout << "-";
		cout << endl;
		

		// Limpa a tela para mostrar a próxima rodada.
		system("cls");
		
		// Passa para a próxima rodada do laço.
		rodada++;
	}

	return 0;
}

/*
*	A função serve pra mostrar espaços em branco na tela.
*	
*	int total : Quantidade de espaços que serão mostrados.
*
*/
void imprimir_espacos(int total)
{
	// Imprime espaços de 'qntd_atual' até 'total'.
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}

