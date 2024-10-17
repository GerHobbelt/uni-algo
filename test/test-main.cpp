/* Test for Unicode Algorithms Implementation.
 * License: Public Domain or MIT - choose whatever you want.
 * See LICENSE.md */

#include "main.h"


#if defined(BUILD_MONOLITHIC)
#define main     una_test_main
#endif

extern "C"
int main(void)
{
    main7();

    return 0;
}
