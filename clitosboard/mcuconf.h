#pragma once
#include_next <mcuconf.h>
#undef RP_I2C_USE_I2C0
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C0 FALSE
#define RP_I2C_USE_I2C1 TRUE
