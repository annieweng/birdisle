#include "server.h"
#include "libredis.h"

int main(int argc, char **argv)
{
    return redisMain(-1, argc, argv);
}
