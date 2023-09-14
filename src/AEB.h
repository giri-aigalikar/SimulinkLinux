#include <Global.h>
#include <Vehicle/Sensor_Object.h>

#ifdef __cplusplus
extern "C" {
#endif
#include "User.h"
int AEB_ON;


void AEB_User_DeclQuants (void);
void AEB_User_TestRun_Start_atBegin(void);
void AEB_User_Calc(void);

#ifdef __cplusplus
}
#endif