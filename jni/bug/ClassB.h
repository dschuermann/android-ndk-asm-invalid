#ifndef CLASSB_H_
#define CLASSB_H_

#include <streambuf>
#include <iostream>
#include <vector>

class ClassB : public std::basic_streambuf<char, std::char_traits<char> >, public std::ostream
{
public:

	ClassB(std::ostream &stream, const size_t buffer = 2048);
	virtual ~ClassB();

private:
	std::ostream &_stream;

	// Output buffer
	std::vector<char> data_buf_;

	// length of the data buffer
	size_t data_size_;
};

#endif /* CLASSB_H_ */
