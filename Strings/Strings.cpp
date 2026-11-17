#include <iostream>
using namespace std;

string ToLower(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}

void EscreverLinha(string s1)
{
	cout << endl;
	for (int i = 0; i < s1.length(); i++)
	{
		cout << s1[i] << endl;
	}
}

void ContarVogais(string s)
{
	s = ToLower(s);
	int contador = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a')
		{
			contador++;
		}
		if (s[i] == 'e')
		{
			contador++;
		}
		if (s[i] == 'i')
		{
			contador++;
		}
		if (s[i] == 'o')
		{
			contador++;
		}
		if (s[i] == 'u')
		{
			contador++;
		}
	}

	cout << contador;
}

void CompararStrings(string s1, string s2)
{
	s1 = ToLower(s1);
	s2 = ToLower(s2);

	if (s1 == s2)
	{
		cout << "sao iguais" << endl;
	}
	else
	{
		cout << "sao diferentes" << endl;
	}
}

void JuntarStrings(string s1, string s2)
{
	string result = s1.append(s2);
	cout << result;
}

void Escrever3PrimeirasLetras(string s)
{
	for (int i = 0; i < 3; i++)
	{
		cout << s[i];
	}
}

void VerificarExisteLetra(string s, char letra)
{
	s = ToLower(s);
	if (s.find(letra) != -1)
	{
		cout << "Existe" << endl;
	}
	else
	{
		cout << "Nao existe" << endl;
	}

}

void ApagarCarater(string s, int pos)
{
	pos -= 1;
	string result = "";

	for (int i = 0; i < s.length(); i++)
	{
		if (i != pos)
		{
			result += s[i];
		}
	}

	cout << result << endl;
}

void InserirLetraInicio(string s1, string s2)
{
	s1.insert(0, s2);
	cout << s1;
}

/// substituir as 2 primeiras letras por "xx"
// inverter s abel -> leba
// contar occorencias de l em s


int main()
{
	string s1, s2;
	char letra;
	string l;
	int pos;
	cin >> s1;
	cin >> s2;
	//cin >> letra;
	//cin >> pos;

	//EscreverLinha(s1);

	//ContarVogais(s1);
	//CompararStrings(s1, s2);
	//JuntarStrings(s1, s2);
	//Escrever3PrimeirasLetras(s1);
	//VerificarExisteLetra(s1,letra);
	//ApagarCarater(s1, pos);
	InserirLetraInicio(s1, s2);
}