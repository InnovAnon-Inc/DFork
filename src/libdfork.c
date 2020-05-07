#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdlib.h>
#include <unistd.h>

#include <dfork.h>

typedef struct {
   childcb_t childcb;
   void *restrict cargs;
} childcb_exit_t;

__attribute__ ((noreturn, nothrow, warn_unused_result))
static int parentcb_exit (pid_t cpid, void *restrict arg) {
   exit (EXIT_SUCCESS);
}

__attribute__ ((warn_unused_result))
static int childcb_exit (pid_t cpid, void *restrict arg) {
   childcb_exit_t *p       = arg;
   childcb_t       childcb = p->childcb;
   void *restrict  cargs   = p->cargs;
   return ezfork (childcb, cargs, parentcb_exit, NULL);
}

__attribute__ ((nonnull (1, 3), warn_unused_result))
int dfork (childcb_t childcb, void *restrict cargs, parentcb_t parentcb, void *restrict pargs) {
   childcb_exit_t p;
   p.childcb = childcb;
   p.cargs   = cargs;
   return sfork (childcb, &p, parentcb, pargs);
}

