#pragma once
class EstadisticasGenerales
{
private:
	int partidasJugadas, partidaGanadas, partidasPerdidas, porcentajesVictorias;
public:
	void RegistroPartidas();
	void IncrementoPartidas();
	void PorcentajeVictoria();
	int ObtenerDatos();
};

