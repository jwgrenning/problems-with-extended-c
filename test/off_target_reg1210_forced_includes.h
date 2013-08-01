#ifndef OFF_TARGET_REG1210_FORCED_INCLUDES
#define OFF_TARGET_REG1210_FORCED_INCLUDES

#define AT(Location,Declaration) Declaration
#define INTERRUPT(n)
#define USING(n)


#include "binary_byte_constants.h"

#ifdef __cplusplus
extern "C" {
#endif

int mock_read_reg(const char *);
#define READ_REG(r) mock_read_reg(#r)

void mock_write_reg(const char *, int data);
#define WRITE_REG(r, d) mock_write_reg(#r, d)

#ifdef __cplusplus
}
#endif

#endif
