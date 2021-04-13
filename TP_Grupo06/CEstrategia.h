#pragma once
#include "CNumero.h"
#include <iostream>
#include <ctime>
using namespace System;
using namespace std;
class CEstrategia
{
private:
	CNumero** listaNumeros;
	int cantidad;
	int prueba;
public:
	CEstrategia(int prueba)
	{
		listaNumeros = nullptr;
		cantidad = 0;
		this->prueba = prueba;
	}
	void agregarNumero(CNumero* n)
	{
		cantidad++;
		CNumero** tmp = new CNumero * [cantidad];
		tmp[cantidad - 1] = n;
		for (int i = 0; i < cantidad - 1; i++)
		{
			tmp[i] = listaNumeros[i];
		}
		listaNumeros = tmp;
		tmp = nullptr;
	}
	void mostrarElementos()
	{
		for (int i = 0; i < cantidad; i++)
		{
			cout << listaNumeros[i]->getNumero() << "   ";
		}
	}

	CNumero** getListaNumeros() { return listaNumeros; };
	int getPrueba() { return prueba; }



};