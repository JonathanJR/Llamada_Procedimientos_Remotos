/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MULTAS_H_RPCGEN
#define _MULTAS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


typedef char T_String[80];

typedef char T_Listado[1500];

struct ST_DatosUsuario {
	int Dni;
	T_String Matricula;
};
typedef struct ST_DatosUsuario ST_DatosUsuario;

struct ST_DatosMultas {
	int NumeMultas;
	T_Listado ListadoMultas;
};
typedef struct ST_DatosMultas ST_DatosMultas;

struct ST_DatosSancion {
	T_String Matricula;
	T_String Fecha;
	int Puntos;
};
typedef struct ST_DatosSancion ST_DatosSancion;

#define MULTAS 0x30000001
#define MULTAS_VER 1

#if defined(__STDC__) || defined(__cplusplus)
#define ComprobarPuntos 1
extern  int * comprobarpuntos_1(ST_DatosUsuario *, CLIENT *);
extern  int * comprobarpuntos_1_svc(ST_DatosUsuario *, struct svc_req *);
#define ComprobarMultas 2
extern  ST_DatosMultas * comprobarmultas_1(ST_DatosUsuario *, CLIENT *);
extern  ST_DatosMultas * comprobarmultas_1_svc(ST_DatosUsuario *, struct svc_req *);
#define Identificacion 3
extern  int * identificacion_1(char *, CLIENT *);
extern  int * identificacion_1_svc(char *, struct svc_req *);
#define PonerMulta 4
extern  int * ponermulta_1(ST_DatosSancion *, CLIENT *);
extern  int * ponermulta_1_svc(ST_DatosSancion *, struct svc_req *);
#define QuitarMulta 5
extern  int * quitarmulta_1(ST_DatosSancion *, CLIENT *);
extern  int * quitarmulta_1_svc(ST_DatosSancion *, struct svc_req *);
#define AltaVehiculo 6
extern  int * altavehiculo_1(ST_DatosUsuario *, CLIENT *);
extern  int * altavehiculo_1_svc(ST_DatosUsuario *, struct svc_req *);
#define BajaVehiculo 7
extern  int * bajavehiculo_1(ST_DatosUsuario *, CLIENT *);
extern  int * bajavehiculo_1_svc(ST_DatosUsuario *, struct svc_req *);
extern int multas_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ComprobarPuntos 1
extern  int * comprobarpuntos_1();
extern  int * comprobarpuntos_1_svc();
#define ComprobarMultas 2
extern  ST_DatosMultas * comprobarmultas_1();
extern  ST_DatosMultas * comprobarmultas_1_svc();
#define Identificacion 3
extern  int * identificacion_1();
extern  int * identificacion_1_svc();
#define PonerMulta 4
extern  int * ponermulta_1();
extern  int * ponermulta_1_svc();
#define QuitarMulta 5
extern  int * quitarmulta_1();
extern  int * quitarmulta_1_svc();
#define AltaVehiculo 6
extern  int * altavehiculo_1();
extern  int * altavehiculo_1_svc();
#define BajaVehiculo 7
extern  int * bajavehiculo_1();
extern  int * bajavehiculo_1_svc();
extern int multas_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_T_String (XDR *, T_String);
extern  bool_t xdr_T_Listado (XDR *, T_Listado);
extern  bool_t xdr_ST_DatosUsuario (XDR *, ST_DatosUsuario*);
extern  bool_t xdr_ST_DatosMultas (XDR *, ST_DatosMultas*);
extern  bool_t xdr_ST_DatosSancion (XDR *, ST_DatosSancion*);

#else /* K&R C */
extern bool_t xdr_T_String ();
extern bool_t xdr_T_Listado ();
extern bool_t xdr_ST_DatosUsuario ();
extern bool_t xdr_ST_DatosMultas ();
extern bool_t xdr_ST_DatosSancion ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MULTAS_H_RPCGEN */
