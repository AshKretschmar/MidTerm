#ifndef STANDARD_INCLUDES_H
#define STANDARD_INCLUDES_H

#define SDL_MAIN_HANDLED
//standard headers
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <cinttypes>
#include <stdio.h>
#include <thread>
#include <map>
#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_pixels.h>
#include <cstdlib>

//Project headers
#include "Singleton.h"
#include "BasicStructs.h"

#ifdef _WIN32
#include <Windows.h>
#include <direct.h>
#define M_ASSERT(_cond, _msg) if (!(_cond)) {OutputDebugStringA(_msg); std::abort(); }
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif

using namespace std;

#endif //STANDARD_INCLUDES_H

