
#include "IRandom.h"
using namespace std;

int irandom(int start, int end){
    end++;
    time_t timer;
    time(&timer);
    tm *mytm = localtime(&timer);
    int msec =(*mytm).tm_sec+(*mytm).tm_min+(*mytm).tm_hour;

    for (int cycles = 0; cycles < 5; cycles++){
        msec = msec*msec+2;
        msec = msec % 859;
    }
    int result = msec % (end-start);
    return result+start;
}