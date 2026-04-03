#include "project/core/log.h"
#include "project/math/add.h"

int main(void)
{
    int result;
    result = add(2, 3);
    log_info("Result: %d", result);
    result = subtract(2, 3);
    log_info("Result: %d", result);
    return 0;
}
