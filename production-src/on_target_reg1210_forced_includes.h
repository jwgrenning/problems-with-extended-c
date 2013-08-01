#ifndef ON_TARGET_REG1210_FORCED_INCLUDES
#define ON_TARGET_REG1210_FORCED_INCLUDES

#define AT(Location, Declaration) at Location Declaration
#define INTERRUPT(n) interrupt n
#define USING(n) using n

#define READ_REG(r) r
#define WRITE_REG(r, d) r = d

#include "binary_byte_constants.h"

#endif
