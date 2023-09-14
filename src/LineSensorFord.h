#define zCoord 0      // 0 off, 1 on
#define NUMTRACKS 5   // 2 Left and 2 Right Track
#define NUMPOINTS 41 // preallocated memory for number of Points.

#define POLY 3 // polynomial 3rd order


typedef struct tLds tLds;

struct tLds {
    struct {
    	double	ds[NUMPOINTS][3];
    	double	coeff[POLY+1];
    } L[NUMTRACKS], R[NUMTRACKS];
};

extern tLds Lds;

void	Lineds_DeclQuants (void);
int		Lineds_TestRun_Start_atEnd	(void);
int		Lineds_Calc					(double dt);
