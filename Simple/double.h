#pragma once

// because of the inclusion of "other.h", both double.cpp and Simple.cpp should
// be rebuilt when "other.h" changes
#include "other.h"

int timestwo(const int);