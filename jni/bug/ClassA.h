#ifndef CLASSA_H_
#define CLASSA_H_

#include <streambuf>
#include <ostream>
#include <stdint.h>

#include "ClassB.h"

class ClassA : public ClassB
{
public:
	ClassA(std::ostream& output, const uint32_t test);

	virtual ~ClassA();
};

#endif /* CLASSA_H_ */
