#include "ClassB.h"

ClassB::ClassB(std::ostream &stream, const size_t buffer)
	: std::ostream(this), _stream(stream)
{

}

ClassB::~ClassB()
{
}
