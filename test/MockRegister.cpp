#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "off_target_reg1210_forced_includes.h"

#include <string.h>
extern "C"
{
#include "REG1210.h"

int mock_read_reg(const char * reg)
{
	return mock("register")
			.actualCall("READ_REG")
			.withParameter("reg", reg)
			.returnValue()
			.getIntValue();
}

}

TEST_GROUP(Register)
{
	void setup()
	{
		mock("register").strictOrder();
	}
	void teardown()
	{
		mock("register").checkExpectations();
		mock().clear();
	}
};

TEST(Register, mock_read_write_learning_test)
{
	mock("register")
			.expectOneCall("READ_REG")
			.withParameter("reg", "TI_0")
			.andReturnValue(42);

	LONGS_EQUAL(42, READ_REG(TI_0));
}

