#ifndef _DFORK_H_
#define _DFORK_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <sfork.h>

int dfork (
	childcb_t  childcb,  void *restrict childcb_args,
	parentcb_t parentcb, void *restrict parentcb_args)
__attribute__ ((nonnull (1, 3), warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _DFORK_H_ */
