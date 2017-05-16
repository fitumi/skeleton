#include <ctest.h>

#include <distance.h>

CTEST(distance_suite, simple_test) {
    // Given
    const Point a = {0, 0};
    const Point b = {1, 1};

    // When
    const double distance = get_distance(a, b);

    // Then
    const double expected_distance = 1.4142;

    ASSERT_DBL_NEAR(expected_distance, distance);
}

CTEST(distance_suite, same_point) {
    // Given
    const Point a = {0, 0};

    // When
    const double distance = get_distance(a, a);

    // Then
    const double expected_distance = 0;

    ASSERT_DBL_NEAR(expected_distance, distance);
}

CTEST(distance_suite, commutativity) {
    // Given
    const Point a = {0, 0};
    const Point b = {1, 1};

    // When
    const double distance_a_b = get_distance(a, b);
    const double distance_b_a = get_distance(b, a);

    // Then
    ASSERT_DBL_NEAR(distance_a_b, distance_b_a);
}

CTEST_SKIP(distance_suite, fail_test) {
    // Given
    const Point a = {0, 0};
    const Point b = {1, 1};

    // When
    CTEST_LOG("get_distance({%lf, %lf}, {%lf, %lf})", a.x, a.y, b.x, b.y);
    const double distance = get_distance(a, b);

    // Then
    const double expected_distance = 0;

    ASSERT_DBL_NEAR(expected_distance, distance);
}
