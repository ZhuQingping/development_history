#ifndef NAMED_OBJECTE_H
#define NAMED_OBJECTE_H

template<typename T>
class NamedObject
{
public:
	NamedObject(const char* name, const T& value):nameValue(name), objectValue(value){}
	NamedObject(const std::string& name, const T& value):nameValue(name), objectValue(value){}
private:
	std::string nameValue;
	T objectValue;
};

#endif
