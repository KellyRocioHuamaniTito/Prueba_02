#pragma once
class CNumero
{
private:
	int numero;
	bool estado;
public:
	CNumero(int numero)
	{
		this->numero = numero;
		estado = false;
	}
	int getNumero()
	{
		return numero;
	}
	bool getEstado() { return estado; }
	void setEstado(bool estado) { this->estado = estado; }
	void setNumero(int numero) { this->numero = numero; }

};