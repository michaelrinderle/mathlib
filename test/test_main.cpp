#pragma once
#include "gtest/gtest.h"
#include "tests/basic.h"
#include "tests/business.h"

int
main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}