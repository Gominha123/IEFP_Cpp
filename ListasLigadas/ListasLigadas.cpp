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

No* AdicionarNo(No* primeiro, No* novo)
{
	(*primeiro).seguinte = novo;
	return primeiro;
}

int main()
{
	No* primeiro = CriarNo(10, "Ana");
	No* segundo = CriarNo(20, "Bruno");
	No* terceiro = CriarNo(30, "Carla");

	AdicionarNo(primeiro, segundo);
	AdicionarNo(segundo, terceiro);

	No* atual = primeiro;
	while (atual != nullptr)
	{
		cout << (*atual).valor << " - " << (*atual).nome << endl;
		atual = (*atual).seguinte;
	}

	atual = primeiro;
	while (atual != nullptr)
	{
		No* proximo = (*atual).seguinte;
		delete atual;
		atual = proximo;
	}
	primeiro = nullptr;
}