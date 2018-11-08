#include <stdio.h>

main(o,O){for(scanf("%d",&O);O>o;O=O&!!printf("%d\n",O)?O+O+O+o:O>>o);}

/* Notes: when run w/o arguments, o == 1
because it's argc. O is also an int w/ a
garbage value, but the scanf overwrites it.
*/
