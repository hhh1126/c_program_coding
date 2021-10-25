#include <unistd.h>

#include "init.h"

static void A_init(void)
{
        write(1, "A_init\n",sizeof("A_init\n"));
}

DECLARE_INIT(A_init);
