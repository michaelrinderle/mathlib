#pragma once
#include "../../include/business.h"

TEST(business_tests, zl_list_init)
{
	int num = round_whole_number_at(4133, 3);
	ASSERT_EQ(num, 4100);

	int num2 = round_whole_number_at(105852, 3);
	ASSERT_EQ(num2, 105900);
}