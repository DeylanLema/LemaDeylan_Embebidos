//funciones para el computo del algoritmo KNN
#define FI 200
#define CO 2

//--------------------Calculo distancia euclidiana entre 2 puntos--------------
double distanciaEuclidiana(double pt1[], double pt2[]);

//---------------Calculo de distancia Euclidiana entre un punto y la base de datos
void todasDistEuclid(double pt1[],double aux[], double atributos[][CO]);

//----ORDENAMIENTO DE LAS DISTANCIAS DE MENOR A MAYOR
void ordena(double datos[], int clases[],int clasesNo[]);

//-------------------EXTRAER LOS N PRIMEROS------------------------------------
void extraeKPrimeros(double datos[], double kPrimeros[], int clases[],
int kClases, int k);

//
int clasificaKNN(double datos[][CO],int clasesNum[], double dato[], int k);
