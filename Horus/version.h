#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "07";
	static const char MONTH[] = "01";
	static const char YEAR[] = "2017";
	static const char UBUNTU_VERSION_STYLE[] =  "17.01";
	
	//Software Status
	static const char STATUS[] =  "Release";
	static const char STATUS_SHORT[] =  "r";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 99;
	static const long BUILD  = 10;
	static const long REVISION  = 0;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 246;
	#define RC_FILEVERSION 0,99,10,0
	#define RC_FILEVERSION_STRING "0, 99, 10, 0\0"
	static const char FULLVERSION_STRING [] = "0.99.10.0";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 1;
	

}
#endif //VERSION_H
