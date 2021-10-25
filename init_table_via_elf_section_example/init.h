typedef void (*init_call)(void);

/* These two variables are defined in LD link script. */
extern init_call  _init_start;
extern init_call  _init_end;

#define _init __attribute__((unused, section(".myinit")))
#define DECLARE_INIT(func) init_call _fn_##func _init = func
