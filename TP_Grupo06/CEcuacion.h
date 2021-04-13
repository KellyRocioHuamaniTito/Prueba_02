#pragma once
#include "CNumero.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace System;
using namespace std;
class CEcuacion
{
private:
	//COEFICIENTES
	int pq;
	int p;
	int q;
	//Variable
	int d;
	int jugador;
	string verticePrincipal;
	string verticeSecundario;

	string Uno; int UnoUno;
	string Dos;	int DosDos;
	string Tres;	int TresTres;




public:
	CEcuacion(int a, int b, int c, int d, int jugador)
	{
		pq = a - b - c + d;
		p = b - d;
		q = c - d;
		this->d = d;
		this->jugador = jugador;


		if (jugador == 1)
		{

			if (p == 0)
			{
				verticePrincipal = "q";								verticeSecundario = "p";
				Uno = "0";
				UnoUno = 1;

				float resulta = pq * (1);
				if (resulta > 0) { Dos = ">"; DosDos = 1; }
				else { Dos = ">"; DosDos = 0; }

				Tres = "NO TIENE"; TresTres = 99999;
				cout << Uno << "     " << UnoUno << endl;
				cout << Dos << "     " << DosDos << endl;
				cout << Tres << "     " << TresTres << endl;
			}
			else
			{
				float TMPp = p;
				float TMPpq = pq;
				if (TMPp < 0) { TMPp = TMPp * -1; }
				if (TMPpq < 0) { TMPpq = TMPpq * -1; }
				float tmp = TMPp / TMPpq;//valor verdadero de Q


				if (tmp >= 1)
				{
					verticePrincipal = "q";								verticeSecundario = "p";

					Uno = "1";
					if (pq * (tmp)+p <= 0)
					{
						UnoUno = 0;
					}
					else
					{
						UnoUno = 1;

					}

					int resulta = pq * (tmp - 0.5) + p;// Das un mayor menor al tmp
					if (resulta > 0) { Tres = "<"; TresTres = 1; }
					else { Tres = "<"; TresTres = 0; }

				}

				if (tmp < 1)
				{
					verticePrincipal = "q";								verticeSecundario = "p";

					cout << to_string(tmp) << endl;
					cout << to_string(pq) + "(" + to_string(tmp) + ")" + to_string(p) << endl << endl;

					if (pq * (tmp)+p <= 0)
					{
						UnoUno = 0;
					}
					else
					{
						UnoUno = 1;

					}
					cout << to_string(pq) + "(" + to_string(tmp) + ")" + to_string(p) << endl << endl;
					if (tmp > 0) {
						if (TMPp < 0) { TMPp = TMPp * -1; }
						if (TMPpq < 0) { TMPpq = TMPpq * -1; }
						Uno = to_string(Convert::ToInt16(TMPp)) + "/" + to_string(Convert::ToInt16(TMPpq));

					}
					else
					{
						Uno = to_string(Convert::ToInt16(TMPp)) + "/" + to_string(Convert::ToInt16(TMPpq));
					}

					float resulta = pq * (tmp + 9999) + p;
					if (resulta > 0) { Dos = ">"; DosDos = 1; }
					else { Dos = ">"; DosDos = 0; }

					resulta = pq * (tmp - 9999) + p;
					if (resulta > 0) { Tres = "<"; TresTres = 1; }
					else { Tres = "<"; TresTres = 0;; }


					cout << verticePrincipal + "=" + Uno + "..." + verticeSecundario + "=" + to_string(UnoUno) << endl;
					cout << verticePrincipal + Dos + Uno + "...." + verticeSecundario + "=" + to_string(DosDos) << endl;
					cout << verticePrincipal + Tres + Uno + "...." + verticeSecundario + "=" + to_string(TresTres);
					cout << endl << endl << endl;
				}




			}

		}
		if (jugador == 2)
		{
			if (q == 0)
			{
				verticePrincipal = "p";								verticeSecundario = "q";
				Uno = "0";
				UnoUno = 1;

				float resulta = pq * (1);
				if (resulta > 0) { Dos = ">"; DosDos = 1; }
				else { Dos = ">"; DosDos = 0; }

				Tres = "NO TIENE"; TresTres = 99999;

			}
			else
			{
				float TMPq = q;
				float TMPpq = pq;
				if (TMPq < 0) { TMPq = TMPq * -1; }
				if (TMPpq < 0) { TMPpq = TMPpq * -1; }

				float tmp = TMPq / TMPpq;//valor verdadero de p
				if (tmp >= 1)
				{


					verticePrincipal = "p";								verticeSecundario = "q";
					Uno = "1";
					if (pq * (tmp)+q <= 0)
					{
						UnoUno = 0;
					}
					else
					{
						UnoUno = 1;

					}

					Tres = "No difinido"; TresTres = 9979797;

					int resulta = pq * (tmp - 0.1) + q;// Das un mayor menor al tmp
					if (resulta > 0) { Tres = "<"; TresTres = 1; }
					else { Tres = "<"; TresTres = 0; }


				}




				if (tmp < 1)
				{
					verticePrincipal = "p";								verticeSecundario = "q";
					cout << tmp << endl;
					cout << to_string(tmp) << endl;
					cout << to_string(pq) + "(" + to_string(tmp) + ")" + to_string(p) << endl << endl;

					if (pq * (tmp)+q <= 0)
					{
						UnoUno = 0;
					}
					else
					{
						UnoUno = 1;

					}
					cout << to_string(pq) + "(" + to_string(tmp) + ")" + to_string(p) << endl << endl;
					if (tmp > 0) {
						if (TMPq < 0) { TMPq = TMPq * -1; }
						if (TMPpq < 0) { TMPpq = TMPpq * -1; }
						Uno = to_string(Convert::ToInt16(TMPq)) + "/" + to_string(Convert::ToInt16(TMPpq));

					}
					else
					{
						Uno = to_string(Convert::ToInt16(TMPq)) + "/" + to_string(Convert::ToInt16(TMPpq));
					}


					float resulta = pq * (tmp + 9999) + q;// Das un valor MAYOR al tmp=0.5
					if (resulta > 0) { Dos = ">"; DosDos = 1; }
					else { Dos = ">"; DosDos = 0; }



					resulta = pq * (tmp - 9999) + q;// Das un mayor menor al tmp
					if (resulta > 0) { Tres = "<"; TresTres = 1; }
					else { Tres = "<"; TresTres = 0; }

					cout << verticePrincipal + "=" + Uno + "..." + verticeSecundario + "=" + to_string(UnoUno) << endl;
					cout << verticePrincipal + Dos + Uno + "...." + verticeSecundario + "=" + to_string(DosDos) << endl;
					cout << verticePrincipal + Tres + Uno + "...." + verticeSecundario + "=" + to_string(TresTres);
					cout << endl << endl << endl;
				}



			}

		};
	}
	string toda_ecuacion()
	{


		string cadena;
		if (jugador == 1)
		{
			if (p == 0)
			{
				cadena = to_string(pq) + "pq " + signo(q) + to_string(q) + "q " + signo(d) + to_string(d);
			}
			else
			{
				cadena = "p(" + to_string(pq) + "q " + signo(p) + to_string(p) + ")" + signo(q) + to_string(q) + "q " + signo(d) + to_string(d);

			}
		}
		if (jugador == 2)
		{
			if (q == 0)
			{
				cadena = to_string(pq) + "pq " + signo(p) + to_string(p) + "p " + signo(d) + to_string(d);

			}
			else
			{
				cadena = "q(" + to_string(pq) + "p " + signo(q) + to_string(q) + ")" + signo(p) + to_string(p) + "p " + signo(d) + to_string(d);

			}
		}
		return cadena;
	}
	string signo(int n)
	{
		if (n > 0)
		{
			return "+";
		}
		else return "";

	}
	string pruebaRangos()
	{
		string cadena = Uno;
		//string cadena = verticePrincipal + "="+Uno+"    "+verticePrincipal+Dos+Uno+"------->"+ to_string(DosDos)+"            "+verticePrincipal+Tres+Uno;
		return cadena;
	}

	int get_d() { return d; };
	int get_jugador() { return jugador; };
	string get_verticePrincipal() { return verticePrincipal; };
	string get_verticeSecundario() { return verticeSecundario; };
	string get_Uno() { return Uno; }; int get_UnoUno() { return UnoUno; };
	string get_Dos() { return Dos; };	int get_DosDos() { return DosDos; };
	string get_Tres() { return Tres; };	int get_TresTres() { return TresTres; };

	int get_p()
	{
		return p;
	}


	int get_q()
	{
		return q;
	}

};