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
		mock("register").checkExpectations();
		mock().clear();
	}

	void expect_write_reg(const char * reg, int value)
	{
		mock("register")
			.expectOneCall("WRITE_REG")
			.withParameter("reg", reg)
			.withParameter("data", value);
	}

	void expect_read_reg(const char * reg, int returing_value)
	{
		mock("register")
			.expectOneCall("READ_REG")
			.withParameter("reg", reg)
			.andReturnValue(returing_value);
	}
};


TEST(MicroControllerCode, say_hi)
{
	expect_write_reg("IE", b11000000);
	expect_read_reg("TI_0", 42);
	expect_read_reg("TI_0", 42);
	expect_read_reg("TI_0", 42);
	expect_read_reg("TI_0", 42);

	say_hi();
}

