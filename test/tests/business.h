#pragma once
#include "../../include/business.h"

TEST(business_tests, zl_list_init)
{
	int num = round_whole_number_at(4033, 3);
	ASSERT_EQ(num, 3);
}
