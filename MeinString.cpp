#include<assert.h>
#include "MeinString.h"

MeinString::MeinString(const char* s)
  :len(strlen(s)), start(new char[len+1])
{
	strcpy(start, s);
}

MeinString::MeinString(const MeinString& s)
	:len(s.len), start(new char[len+1])
{
	strcpy(start, s.start);
}

MeinString::~MeinString()
{
	delete []start;
}

void MeinString::swap(MeinString &s)
{
	std::swap(len, s.len);
	std::swap(start, s.start);
}

MeinString& MeinString::assign(MeinString m)
{
	swap(m);
	return *this;
}

MeinString& MeinString::assign(const char* s)
{
	return assign(MeinString(s));
}

char& MeinString::at(size_t pos)
{
	assert(pos<len);
	return start[pos]; //*(start+pos)
}

const char& MeinString::at(size_t pos) const
{
	assert(pos<len);
	return start[pos]; //*(start+pos);
}

void anzeigen(std::ostream &os, const MeinString &s)
{
	os<<s.c_str();
}
