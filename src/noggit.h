#ifndef NOGGIT_H
#define NOGGIT_H

#include <vector>

//! \todo this really needs to be refactored into a singleton class

#define APP_TITLE "Noggit3 Studio"
#define APP_SUBTITLE "a wow map editor"
#define APP_VERSION "Rev: 120" 
#define APP_DATE __DATE__ ", " __TIME__

class AppState;
extern std::vector<AppState*> gStates;
extern bool gPop;

namespace freetype { class font_data; }
extern freetype::font_data arialn13,arial12,arial14,arial16,arial24,arial32,morpheus40,skurri32,fritz16;

extern float gFPS;

float frand();
float randfloat(float lower, float upper);
int randint(int lower, int upper);

class AreaDB;
extern AreaDB gAreaDB;

class AsyncLoader;
extern AsyncLoader* gAsyncLoader;

#endif
