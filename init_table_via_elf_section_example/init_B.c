#include <stdio.h>

#include "init.h"

static void B_init(void)
{
        printf("B_init\n");
}

DECLARE_INIT(B_init);
