#define TEST_MODULE test_version

#include "lib.h"

#include "gtest/gtest.h"

TEST(version_test_case, version_test) {
	ASSERT_TRUE(version() > 0);
}
