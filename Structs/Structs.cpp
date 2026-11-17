// Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Produto
{
	string nome;
	float preco;
};

struct Aluno
{
	string nome;
	int idade;
};

struct Pessoa
{
	string nome;
	int idade;
};

struct Tipificar
{
	int a;
	string s;

};

void ListarProduto(Produto p)
{
	cout << p.nome << " " << p.preco;
}

void ListarProdutos(Produto p[])
{
	int length = sizeof(p) / sizeof(int);
	for (int i = 0; i <= length; i++)
	{
		cout << p[i].nome;
		cout << p[i].preco << endl;
	}
}

void ListarAluno(Aluno a)
{
	cout << a.nome << " " << a.idade;
}

Produto CriarProduto(string nome, float preco)
{
	Produto p;
	p.nome = nome;
	p.preco = preco;
	return p;
}

Produto AumnetarPreco(Produto p, float aumento)
{
	p.preco += aumento;
	return p;
}

void MaisVelho(Pessoa p1, Pessoa p2)
{
	if (p1.idade > p2.idade)
	{
		cout << p1.nome << p1.idade;
	}
	else if (p1.idade >= p2.idade)
	{
		cout << "Sao da mesma idade";
	}
	else
	{
		cout << p2.nome << p2.idade;
	}
}

float TotalPrecoProduto(Produto p[])
{
	float total = 0;
	int length = sizeof(p) / sizeof(int);
	for (int i = 0; i <= length; i++)
	{
		total += p[i].preco;
	}
	return total;
}

Produto ProdutoMaisCaro(Produto p[])
{
	Produto maisCaro = p[0];
	int length = sizeof(p) / sizeof(int);
	for (int i = 0; i <= length; i++)
	{
		if (maisCaro.preco < p[i].preco)
		{
			maisCaro = p[i];
		}
	}
	return maisCaro;
}

int main()
{
	// Criar um Produto
	/*Produto p = CriarProduto("arroz", 1.5);
	ListarProduto(p);*/

	// Ler um aluno
	/*Aluno aluno;
	cin >> aluno.nome >> aluno.idade;
	ListarAluno(aluno);*/

	//  Alterar um preço
	/*Produto p;
	cin >> p.nome >> p.preco;
	p = AumnetarPreco(p, 2);
	ListarProduto(p);*/

	// Comparar duas idades
	/*Pessoa pessoa1, pessoa2;
	cin >> pessoa1.nome >> pessoa1.idade;
	cin >> pessoa2.nome >> pessoa2.idade;
	MaisVelho(pessoa1, pessoa2);
	*/

	// Listar três produtos
	/*Produto p[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> p[i].nome;
		cin >> p[i].preco;
	}
	ListarProdutos(p);*/

	// Total e produto mais caro
	Produto p[3];
	/*float soma = 0;
	Produto maisCaro;

	for (int i = 0; i < 3; i++)
	{
		cin >> p[i].nome;
		cin >> p[i].preco;
	}

	soma = TotalPrecoProduto(p);
	maisCaro = ProdutoMaisCaro(p);

	cout << "Mais caro: " << maisCaro.nome << endl;
	cout << "Soma: " << soma;*/

	int n;
	bool b;
	float f;
	double d;
	long l;
	int array[8];
	Tipificar t;
	cout << "Inteiro: " << sizeof(n) << endl;
	cout << "Bool: " << sizeof(b) << endl;
	cout << "Float: " << sizeof(f) << endl;
	cout << "Double: " << sizeof(d) << endl;
	cout << "Long: " << sizeof(l) << endl;
	cout << "Array de inteiros: " << sizeof(array) << endl;
	cout << "Array[7] de inteiros: " << sizeof(array[7]) << endl;
	cout << "Tipificar: " << sizeof(t) << endl;
	cout << "Pessoa: " << sizeof(p)/3 << endl;

}