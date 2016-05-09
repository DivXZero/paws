
#ifndef __PAWS_CORE_COMMON_H
#define __PAWS_CORE_COMMON_H

/*
*   Helper Definitions
*/
extern "C" {
#define LIB_EXPORT __declspec(dllexport)
}

/*
*   Common Includes
*/
#include <stdio.h>
#include <stdlib.h>
#include <memory>
#include <vector>

/*
*   Project Includes
*/
#include "platforms/platforms.h"
#include "shared/shared.h"

#endif // __PAWS_CORE_COMMON_H
