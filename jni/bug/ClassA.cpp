#include "ClassA.h"
#include <netinet/in.h>

ClassA::ClassA(std::ostream& output, const uint32_t test)
: ClassB(output)
{
	uint32_t be = htonl(test);
}

ClassA::~ClassA()
{

}
