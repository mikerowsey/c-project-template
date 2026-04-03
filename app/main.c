#include "project/math/add.h"
#include "project/core/log.h"

int main(void)
{
    int result = add(2, 3);
    log_info("Result: %d", result);
    return 0;
}
