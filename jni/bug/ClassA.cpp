#include "ClassA.h"
#include <netinet/in.h>

ClassA::ClassA(const uint32_t foo)
{
	uint32_t be = htonl(foo);
}

ClassA::~ClassA()
{
}
