#include <iostream>
#include <string>
#include <string.h>

using namespace std;

//tipificação de struct para lista ligada
struct No
{
	int valor;//a lista será ordenada por aqui
	string nome; //item genérico; podia ser preço, idade, nome, etc...
	struct No* seguinte; //membro para apontador
};

No* CABECA = NULL; //o primeiro da lista ou head (cabeça)
No* CAUDA = NULL; //o último ou tail (cauda)

// Lista a Lista Ligada começando pela CABECA
void Listar()
{
	// Se a lista estiver vazia, indica que está vazia
	if (CABECA == nullptr)
	{
		cout << "Lista vazia";
		return;
	}
	// Percorre a Lista Ligada até ao fim e escreve cada um dos nós
	No* atual = CABECA;
	while (atual != nullptr)
	{
		cout << (*atual).valor << " - " << (*atual).nome << endl;
		atual = (*atual).seguinte;
	}
}
// Cria um novo nó
No* CriarNo(int valor, string nome)
{
	No* no = new No{ valor, nome, nullptr };
	return no;
}

void InserirOrdenado(No* novo)
{
	No* atual;
	// Se a lista estiver vazia, o novo nó passa a ser a cabeca
	if (CABECA == NULL)
	{
		CABECA = novo;
		return;
	}
	atual = CABECA;
	// Se o valor do novo nó for menor que o valor do primeiro nó, o novo passa a ser a cabeça
	if ((*atual).valor > (*novo).valor)
	{
		(*novo).seguinte = atual;
		CABECA = novo;
		return;
	}

	while (atual != NULL)
	{
		// Se não houver mais nós, o novo passa a ser a Cauda(útlimo)
		if ((*atual).seguinte == NULL)
		{
			(*atual).seguinte = novo;
			CAUDA = novo;
			return;
		}
		// Se o valor do novo nó for maior que o atual e menor que o seguinte, insere no meio dos dois
		if (((*atual).valor < (*novo).valor) && (*(*atual).seguinte).valor > (*novo).valor)
		{
			(*novo).seguinte = (*atual).seguinte;
			(*atual).seguinte = novo;
			return;
		}
		// Passa para o próximo nó
		atual = (*atual).seguinte;
	}
}


int main()
{

	//dados genéricos para o programa:
	char op;
	int contador;
	do
	{
		cout << "\n\nLISTA LIGADA-EXERCICIO DIDATICO (TRABALHO COOPERATIVO) \n";
		cout << "[1:listar]\n"
			<< "[a:limpa lista][b:init lista com 3 nos]\n"
			<< "[2:insere primeiro][3:insere no fim][4:insere ao meio][5:INSERE(completo)]" << "\n"
			<< "[6:remove cabeca][7:remove cauda][8:remove ao meio][9:REMOVE (completo)]\n"
			<< "[c:lista ordenada ? (sim / nao)][d:ordena lista][e:conta nos]\n"
			<< "[f:ler 2 nums; trocar os nos][g:inverter a lista] [H: ler isto, por favor] [k:sizeof da struct] \n"
			<< "[Y:apaga ate primeiro par] [y:elimina repetido...se...]"
			<< "\n[0:SAIR]\n"
			<< "Op?";
		cin >> op;//MENU
		switch (op)
		{
		case 'Y':

			break;


		case'y':



			break;



			// --------------------------------------------------------------------------------------------------------------------- 1:LISTAR
		case '1':
			Listar();
			break;



			// --------------------------------------------------------------------------------------------------------------------- 2:INSERE PRIMEIRO
		case '2':

			break;
			// --------------------------------------------------------------------------------------------------------------------- 3:INSERE NO FIM
		case '3':

			break;
			// --------------------------------------------------------------------------------------------------------------------- 4:INSERE AO MEIO
		case '4':

			break;
			// --------------------------------------------------------------------------- 5:INSERE COMPLETO
		case '5':
			Listar();
			cout << endl;
			InserirOrdenado(CriarNo(11, "Filipe"));
			Listar();
			cout << endl;
			InserirOrdenado(CriarNo(9, "Gonçalo"));
			Listar();
			cout << endl;
			InserirOrdenado(CriarNo(10, "Miguel"));
			Listar();
			cout << endl;
			InserirOrdenado(CriarNo(12, "Barbara"));
			Listar();
			cout << endl;

			break;

			break;
			// ------------------------------------------- 6:REMOVE CABEÇA
		case '6':

			break;
			// ------------------------------------------- 7:REMOVE CAUDA
		case '7':

			break;
			// -------------------------------------------- 8:REMOVE AO MEIO
		case '8':

			break;
			// --------------------------------------------------------------------------------------------------------------------- 9:REMOVE COMPLETO
		case '9':

			break;
			// --------------------------------------------------------------------------------------------------------------------- a:LIMPA LISTA
		case 'a':

			break;

			// --------------------------------------------------------------------------------------------------------------------- b:INICIALIZA COM 3 NÓS "fixos"
		case 'b':
			No* um = CriarNo(1, "Primeiro Criado");
			No* dois = CriarNo(2, "Segundo Criado");
			No* tres = CriarNo(3, "Terceiro Criado");
			(*um).seguinte = dois;
			(*dois).seguinte = tres;

			break;
			// --------------------------------------------------------------------------------------------------------------------- c:LISTA ORDENADA? SIM/NÃO
		case 'c':

			break;
			// --------------------------------------------------------------------------------------------------------------------- d:ORDENA LISTA
		case 'd':

			break;
			// --------------------------------------------------------------------------------------------------------------------- e:CONTA NÓS
		case 'e':

			break;
			// --------------------------------------------------------------------------------------------------------------------- f:LER 2 NUMS; EXISTEM? TROCAR NÓS
		case 'f':

			break;
			// --------------------------------------------------------------------------------------------------------------------- g:INVERTER A LISTA
		case 'g':

			break;
			// --------------------------------------------------------------------------------------------------------------------- H:INVERTER A LISTA
		case 'H':
			cout << "fazer algoritmos!...";
			break;
			// --------------------------------------------------------------------------------------------------------------------- 0:SAIR
		case 'k':

			break;

		case '0':

			break;
			// --------------------------------------------------------------------------------------------------------------------- DEFAULT
		default:
			cout << "\7"; //beep do sistema
			break;
		}
	} while (op != '0');
}




