// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// ------------COMANDOS---------------
// 
// cout -> exibe algo na tela
// <</>> -> direção dos dados, separador/equivalente ao "+"
//endl/\n -> mudar de linha
// cin -> pedir entrada de dados, armazena valor
//
// 
// ------------VARIAVEIS---------------
// 
// int ->inteiro
// short -> inteiro curto
// long  -> inteiro longo
// float/double -> nº reais
// char -> caracter
// string -> conjunto de caracteres
// 
// ------------OPERADORES--------------
// 
// sizeof (tamanho de) -> operador que mostra o tamanho
// string* -> ponteiro, local da memoria
// &texto -> endereço fisico de memoria, indica onde o numero está na memoria
// 
// commit -> checkout

#include <climits>
#include <iostream>
using namespace std;

int main()
{
	cout << "Estrutura de Dados - Fatec (2026/2)" << endl;

	
	cout << "Tipos Numericos\n";
	cout << "===============\n";
	
	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << "Ponto Flutuante (Reais)\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	int idade = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;

	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas  * 60;
	cout << "Sua idade em dias e: " << dias << endl;
	cout << "Sua idade em horas e: " << horas << endl;
	cout << "Sua idade em minutos e: " << minutos << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause");
	system("cls");

	cout << "\nExercicio 1 — Exibir Tamanho Minimo e Maximo de Int e Short\n";
	cout << "\n===========================================================\n";

	cout << "int  min = " << INT_MIN << "\n";
	cout << "int  max = " << INT_MAX << "\n";
	cout << "short min = " << SHRT_MIN << "\n";
	cout << "short max = " << SHRT_MAX << "\n";

	cout << "\nTamanho Minimo (-1)/Maximo(+1) de Int e Short\n";
	cout << "===============================================\n";
	cout << "int  min = " << INT_MIN - 1 << "\n";
	cout << "int  max = " << INT_MAX + 1 << "\n";
	cout << "short min = " << SHRT_MIN - 1 << "\n";
	cout << "short max = " << SHRT_MAX + 1 << "\n";

	// o int máximo fica negativo, enquanto o int minimo fica positivo, short min e max apenas somam normal

	cout << "\nExercicio 2 — Conversao de Temperatura\n";
	cout << "\n======================================\n";

	double t;
	double fah;
	double kel;

	cout << "\nDigite uma temperatura:\n";
	cin >> t;

	fah = t * 1.8 + 32;
	kel = t + 273.15;

	cout << "Temperatura convertida para Fahreheit: " << fah << endl;
	cout << "Temperatura convertida para Kelvin:" << kel << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause");
	system("cls");

	cout << "\n Exercicio 3 - Calculadora de Segundos\n";
	cout << "\n======================================\n";

	long seg;
	long seg_rest;
	double min;
	double hr;
	double ds;

	cout << "Digite o(s) segundo(s):\n";
	cin >> seg;

	seg_rest = 60 - seg;
	min = seg /60.0;
	hr = min / 60.0;
	ds = hr / 24.0;

	cout << "\nSegundos restantes: " << seg_rest << endl;
	cout << "\nMinutos:" << min << endl;
	cout << "\nHoras:" << hr << endl;
	cout << "\nDias:" << ds << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause");
	system("cls");



}

