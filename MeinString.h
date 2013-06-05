// einfache String-Klasse, Erste Version
#ifndef MEINSTRING_H
#define MEINSTRING_H
#include <iostream>
#include <cstddef>

class MeinString
{
public:
  MeinString(const char*str="");
	MeinString(const MeinString&);
	~MeinString();
	void swap(MeinString&);
	MeinString& assign(MeinString);
	MeinString& assign(const char*);
	char& at(size_t pos);
	const char& at(size_t pos) const;
	size_t length() const {return len;}
	const char* c_str() const {return start;}
private:
	size_t len;
	char* start;
	//void operator=(const MeinString&);
};

void anzeigen(std::ostream&, const MeinString&);
#endif
