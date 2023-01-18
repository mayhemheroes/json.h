#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../json.h"

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{
    json_parse(Data, Size);
    return 0;
}