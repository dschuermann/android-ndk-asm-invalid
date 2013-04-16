#ifndef CLASSB_H_
#define CLASSB_H_

#include <streambuf>
#include <iostream>
#include <vector>

class ClassB : public std::basic_streambuf<char, std::char_traits<char> >, public std::ostream
{
public:
	ClassB(std::ostream &stream);
	virtual ~ClassB();

private:
	std::ostream &_stream;
};

#endif /* CLASSB_H_ */
