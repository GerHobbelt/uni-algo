/* Generator for Unicode Algorithms Implementation.
 * License: Public Domain or MIT - choose whatever you want.
 * See LICENSE.md */

#include "gen.h"


#if defined(BUILD_MONOLITHIC)
#define main     una_gen_main
#endif

extern "C"
int main(void)
{
    main3();

    return 0;
}
