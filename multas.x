typedef char T_String[80];
typedef char T_Listado[1500];

struct ST_DatosUsuario{
	int Dni;
	T_String Matricula;
};

struct ST_DatosMultas{
	int NumeMultas;
	T_Listado ListadoMultas;
};

struct ST_DatosSancion{
	T_String Matricula;
	T_String Fecha;
	int Puntos;
};

program MULTAS {
	version MULTAS_VER {
		int ComprobarPuntos(ST_DatosUsuario Usuario) = 1;
		ST_DatosMultas ComprobarMultas(ST_DatosUsuario Usuario) = 2;
		int Identificacion(T_String Password) = 3;
		int PonerMulta(ST_DatosSancion Sancion) = 4;
		int QuitarMulta(ST_DatosSancion Sancion) = 5;
		int AltaVehiculo(ST_DatosUsuario Vehiculo) = 6;
		int BajaVehiculo(ST_DatosUsuario Vehiculo) = 7;
	} = 1;
} = 0x30000001;
