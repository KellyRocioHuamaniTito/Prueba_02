#pragma once

#include <ctime>
#include "CEstrategia.h"

using namespace System;
using namespace std;
class CJugador
{
private:
	CEstrategia** listaEstrategias;
	int cantidad;
	int nEstrategias;
	int indice;
	string  prueba;

public:
	CJugador(int nEstrategias, int ind)
	{
		this->nEstrategias = nEstrategias;
		listaEstrategias = nullptr;
		cantidad = 0;
		indice = ind;
		prueba = "qqqq";
	}
	void agregarEstrategia(CEstrategia* estra)
	{
		cantidad++;
		CEstrategia** tmp = new CEstrategia * [cantidad];
		tmp[cantidad - 1] = estra;
		for (int i = 0; i < cantidad - 1; i++)
		{
			tmp[i] = listaEstrategias[i];
		}
		listaEstrategias = tmp;
		tmp = nullptr;
	}
	void rrellenarEstrategias()
	{

		for (int i = 0; i < nEstrategias; i++)
		{
			agregarEstrategia(new CEstrategia(i + 1));
		}
	};

	void	 buscarMayorFilaEstrategias()
	{
		int mayor;

		for (int fila = 0; fila < nEstrategias; fila++)
		{
			mayor = 0;

			for (int columna = 0; columna < nEstrategias; columna++)
			{
				if (mayor < listaEstrategias[columna]->getListaNumeros()[fila]->getNumero())
				{
					mayor = listaEstrategias[columna]->getListaNumeros()[fila]->getNumero();
				}
			}

			for (int columna = 0; columna < nEstrategias; columna++)
			{
				if (mayor == listaEstrategias[columna]->getListaNumeros()[fila]->getNumero())
				{
					listaEstrategias[columna]->getListaNumeros()[fila]->setEstado(true);
				}
			}

		}

	}
	int getIndice()
	{
		return indice;
	}
	CEstrategia** getListaEstrategias() { return listaEstrategias; };
	string get_prueba()
	{
		return prueba;
	}
};