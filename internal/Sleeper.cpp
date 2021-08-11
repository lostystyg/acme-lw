#include "Sleeper.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void acme_lw::Sleeper::Sleep(long _milliseconds) {
    #ifdef _WIN32
        Sleep(_milliseconds);
    #else
        ::usleep(_milliseconds * 1000);
    #endif
}
