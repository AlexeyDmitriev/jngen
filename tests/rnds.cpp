#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../jngen.h"

#include <algorithm>
#include <utility>

BOOST_AUTO_TEST_SUITE(rnds_suite)

BOOST_AUTO_TEST_CASE(basics) {
    rnd.seed(123);

    BOOST_CHECK_EQUAL(rnds.abacaba(10), "abacabadab");
    BOOST_CHECK_EQUAL(rnds.abacaba(10, 'A'), "ABACABADAB");

    BOOST_CHECK_EQUAL(rnds.thueMorse(10), "abbabaabba");
    BOOST_CHECK_EQUAL(rnds.thueMorse(10, 'q', 'w'), "qwwqwqqwwq");
}

BOOST_AUTO_TEST_SUITE_END()
