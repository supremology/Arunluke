/*
 * stdtypes.h
 *
 *  Created on: 10-Jun-2019
 *      Author: ARUN
 */
/* The Standard Type header files */
#ifndef STD_TYPES_H_
#define STD_TYPES_H_
/* INCLUDES */
#include "Platform_Types.h"
#include "Compiler.h"
typedef struct std{                                    /*  version of a BSW module */

	uint16 vendorID;

	uint16 moduleID;

}
Std_VersionInfoType ;

#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
#define E_OK 0x00u
#endif
#define E_NOT_OK 0x01u

#define STD_HIGH 0x01u                                   /* Physical state 5V or 3.3V */
#define STD_LOW 0x00u                                    /* Physical state 0V */

#define STD_ACTIVE 0x01u                                 /* Logical state active */
#define STD_IDLE 0x00u                                   /* Logical state idle */


#endif /* STD_TYPES_H_ */
