//for general libraries

#include <iostream>
#include <vector>
#include <string.h>

//for platform-specific libraries
#ifdef __APPLE__
    #include <Python/Python.h>
#elif __linux__
    #include <Python.h>
#endif