#include "stdio.h"
#include "../../_src/Log.h"

int main(int argc, char const *argv[])
{
    printf("WELCOME C/C++\n");

    LOG_D("Logger error\n");
    LOG_W("Logger warning\n");
    LOG_I("Logger info\n");
    LOG_D("Logger debug\n");
    return 0;
}
