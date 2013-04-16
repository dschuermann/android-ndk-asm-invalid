#ifndef CLASSA_H_
#define CLASSA_H_

#include <streambuf>
#include <ostream>
#include <stdint.h>

class ClassA : public std::ostream
{
public:
	ClassA(const uint32_t foo);

	virtual ~ClassA();
};

#endif /* CLASSA_H_ */
