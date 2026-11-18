#include <iostream>
using namespace std;

struct No {
	int valor;
	string nome;
	No* seguinte;
};

No* CriarNo(int valor, string nome)
{
	No* no = new No{ valor, nome, nullptr };
	return no;
}

void AdicionarNo(No* head, No* novo)
{
	(*head).seguinte = novo;
}

void RemoverPorValor(No* head, int v)
{
	No* atual = head;
	No* proximo = (*atual).seguinte;
	while (atual != nullptr)
	{
		if ((*proximo).valor == v)
		{
			(*atual).seguinte = (*proximo).seguinte;
			delete proximo;
			return;
		}
		else
		{
			atual = (*atual).seguinte;
		}
	}
}

void Listar(No* primeiro)
{
	No* atual = primeiro;
	while (atual != nullptr)
	{
		cout << (*atual).valor << " - " << (*atual).nome << endl;
		atual = (*atual).seguinte;
	}
}

int main()
{
	No* primeiro = CriarNo(10, "Ana");
	No* segundo = CriarNo(20, "Bruno");
	No* terceiro = CriarNo(30, "Carla");

	AdicionarNo(primeiro, segundo);
	AdicionarNo(segundo, terceiro);

	Listar(primeiro);
	RemoverPorValor(primeiro, 20);
	Listar(primeiro);
}