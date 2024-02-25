#pragma once
class PersonajePrincipal
{
private:
	float posicionX, posicionY;
	float VidaPersonaje;
public :
	void ControlMoverse(int posicionX,int posicionY);
	void Velocidad();
	void Salto();
	void Deslizamiento();
	void Impacto();
};

/*
private : 
// atributos

public : 
//metodos 
4 metodos minimo 


*/