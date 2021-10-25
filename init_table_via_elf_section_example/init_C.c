#include <stdio.h>

#include "init.h"

static void C_init(void)
{
        printf("C_init\n");
}

DECLARE_INIT(C_init);
