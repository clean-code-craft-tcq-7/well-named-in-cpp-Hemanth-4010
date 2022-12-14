#ifndef colors_h
#define colors_h

#include <stdio.h>
#include <iostream>
#include "paircolors.h"

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber);
#endif
