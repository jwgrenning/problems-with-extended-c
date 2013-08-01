#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

#include <string.h>
extern "C"
{
#include "REG1210.h"

void say_hi();

}
TEST_GROUP(MicroControllerCode)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};

TEST(MicroControllerCode, say_hi)
{
	say_hi();
}

