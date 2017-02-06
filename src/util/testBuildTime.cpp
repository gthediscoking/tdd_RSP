#include "testBuildTime.h"

testBuildTime::testBuildTime()
: dateTime(__DATE__ " " __TIME__)
{
}

testBuildTime::~testBuildTime()
{
}

const char* testBuildTime::GetDateTime()
{
    return dateTime;
}

