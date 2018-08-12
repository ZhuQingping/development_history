#ifndef USE_CONST_HPP_
#define USE_CONST_HPP_

const double AspectRatio = 1.635;
const std::string authorName("Scott Meyers");

template<typename T>
inline T callWithMax(const T& a, const T& b)
{	
	if (a > b)
		return a + a + b;
	else 
		return b + b + a;
}
#endif //USE_CONST_HPP_
