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
	No* atual = head;
	while ((*atual).seguinte != nullptr)
	{
		atual = (*atual).seguinte;
	}
	(*atual).seguinte = novo;
	(*novo).seguinte = nullptr;
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


void Listar(No* head)
{
	if (head == nullptr)
	{
		return;
	}

	No* atual = head;
	while (atual != nullptr)
	{
		cout << (*atual).valor << " - " << (*atual).nome << endl;
		atual = (*atual).seguinte;
	}

}

void Exemplo(int* p)
{
	cout << "bla bla " << p << endl;
	cout << "bla bla " << *p << endl;
}


int main()
{
	No* headList = nullptr;
	char op = ' ';
	while (op == '0')
	{
		headList = CriarNo(10, "Ana");
		No* segundo = CriarNo(20, "Bruno");
		No* terceiro = CriarNo(30, "Carla");
		No* quarto = CriarNo(30, "Carla");
		No* quinto = CriarNo(30, "Carla");

		AdicionarNo(headList, segundo);
		AdicionarNo(headList, terceiro);
		AdicionarNo(headList, quarto);
		AdicionarNo(headList, quinto);

		Listar(headList);
		RemoverPorValor(headList, 20);
		cout << "\n";
		Listar(headList);
	}
}