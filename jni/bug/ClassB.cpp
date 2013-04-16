#include "ClassB.h"


ClassB::ClassB(std::ostream &stream, const size_t buffer)
	: std::ostream(this), _stream(stream), data_buf_(buffer), data_size_(buffer)
{

}

ClassB::~ClassB()
{
}