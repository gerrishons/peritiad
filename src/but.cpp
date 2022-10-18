#include <iostream>
#include <string>

int main(){
	std::string bitness;
	if (sizeof(void *) == 4)
		bitness = " (32 bit)";
	else if (sizeof(void *) == 8)
		bitness = " (64 bit)";
	std::cout<<bitness;
	return 0;
}
