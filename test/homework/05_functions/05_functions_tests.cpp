#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "func.h"

TEST_CASE("Test get_gc_content")
{
    REQUIRE(get_gc_content("AGCTATAG") == Approx(.375));
    REQUIRE(get_gc_content("CGCTATAG") == Approx(.50));
}

TEST_CASE("Test get_reverse_string")
{
    REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
    REQUIRE(get_reverse_string("GCGTATAG") == "GATATCGC");
}

TEST_CASE("Test get_dna_complement")
{
    REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
    REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}

