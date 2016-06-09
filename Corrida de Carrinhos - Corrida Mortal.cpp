//Tema3- Corrida de carros
#include <iostream> 
#include <string>// Acessa biblioteca do comando string
#include <ctime>// Permite gerar um numero aleatorio
using namespace std;

//Identifica a fun��o
void imprimir_espacos(int total1); 

//fun��o principal
int main(int argc, char* args[]) 
{
	// Variavel boleana para usar no la�o while
	bool sair = false; 

	//salvar os nomes dos jogadores
	string jog1, jog2; 

	//a quantidade inicial de cada carrinho
	int total1 = 0, total2 = 0;

	//nome do jogador 1
	cout << "Digite o nome do jogador 1:" << endl; 
	cin >> jog1; 
	//nome do jogador 2
	cout << "Digite o nome do jogador 2:" << endl; 
	cin >> jog2; 
	
	//Determina a hora de parar.
	while (sair == false)
	{
		// Variavel para definir o tamanho da pista
		int total_espacos = 75;

		//calculo para gerar um numero aleat�rio
		srand((int)time(0));

		//Para o jogador 1: Gera um numero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//Para o jogador 2: Gera um numero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;

		// Imprimindo na tela o carro, chegada e o nome da corrida

		cout << "CORRIDA MORTAL" << endl;

		cout << "INICIO:                                                               FIM:" << endl;

		// Imprime nome do primeiro jogador
		cout << "Piloto 1:" << jog1 << endl; 
		//Usa o numero aleatorio para definir a qntd de espa�os
		imprimir_espacos(total1);
		// teto do carro
		cout << "  _  " << endl;
		//Usa o numero aleatorio para definir a qntd de espa�os
		imprimir_espacos(total1);
		//Corpo do carro
		cout << "-o-o>" << endl;
		//A pista 
		cout << "_______________________________________________________________________________" << endl;

		//Total de espa�os que o piloto 1 andou 
		cout << "Valor que andou: " << total1 << endl;  

		// Imprime na tela o nome do segundo jogador
		cout << "Piloto 2:" << jog2 << endl;
		//Usa o numero aleatorio para a qntd de espa�os
		imprimir_espacos(total2);
		// teto do carro
		cout << "  _  " << endl;
		//Usa o numero aleatorio para a qntd de espa�os
		imprimir_espacos(total2);
		//Corpo do carro
		cout << "-o-o>" << endl;
		//Imprimindo a pista 1
		cout << "_______________________________________________________________________________" << endl;
		
		//Total de espa�os do piloto 2
		cout << "Valor que andou: " << total2 << endl;  
		
		//Atualiza a tela a cada rodada
		system("cls");

		//Se sair n�o limpa a tela.
		//Condi��o para fazer a condi��o do la�o ficar falsa, e o jogo parar
		if (total1 >= 75 || total2 >= 75)
		{
			//Muda o la�o
			sair = true;

		}

		//Se continuar limpa a tela.
		else system("cls");


	}

	//Quando sair do la�o mostra que o jogo terminou
	cout << "Infelizmente, o jogo terminou  " << endl;


	//imprimindo essa Mensagem caso o jog1 ganhe
	if (total1 >= 75) cout << jog1 << ", unrra, voce ganhou !" << endl;

	//imprimindo essa mensagem Mensagem caso o jog 2 ganhe
	else if (total2 >= 75) cout << jog2 << ", unrra, voce ganhou !" << endl;

	//Imprimindo na tela em caso de empate
	else cout << "empatou!" << endl;

	return 0; //Retorna para o comeco 

}



void imprimir_espacos(int total) 
{
	// La�o for pq n�o sanbe quando vai parar.
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
		// espa�o que vai ser impresso.
		cout << " ";


	}

}
