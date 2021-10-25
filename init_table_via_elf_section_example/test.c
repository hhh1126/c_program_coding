#include <stdio.h>
#include "init.h"

void do_initcalls(void)
{
        init_call *init_ptr = &_init_start;

        for( ; init_ptr < &_init_end; init_ptr++ )
        {
                printf("init ptr: %p\n", init_ptr);
                (*init_ptr)();
        }

        return;
}

int main(void)
{
        do_initcalls();
        return 0;
}
