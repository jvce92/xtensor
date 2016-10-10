#include "gtest/gtest.h"

#include <cstddef>
#include "xarray/xarray.hpp"

namespace qs
{
    using std::size_t;

    TEST(operation, plus)
    {
        xshape<size_t> shape = {3 ,2};
        xarray<double> a(shape, 4.5);
        ASSERT_TRUE((+a)(0, 0) == +(a(0, 0)));
    }

    TEST(operation, minus)
    {
        xshape<size_t> shape = {3 ,2};
        xarray<double> a(shape, 4.5);
        ASSERT_TRUE((-a)(0, 0) == -(a(0, 0)));
    }

    TEST(operation, add)
    {
        xshape<size_t> shape = {3, 2};
        xarray<double> a(shape, 4.5);
        xarray<double> b(shape, 1.3);
        ASSERT_TRUE((a + b)(0, 0) == a(0, 0) + b(0, 0));
        
        double sb = 1.2;
        ASSERT_TRUE((a + sb)(0, 0) == a(0, 0) + sb);

        double sa = 4.6;
        ASSERT_TRUE((sa + b)(0, 0) == sa + b(0, 0));
    }

    TEST(operation, subtract)
    {
        xshape<size_t> shape = {3, 2};
        xarray<double> a(shape, 4.5);
        xarray<double> b(shape, 1.3);
        ASSERT_TRUE((a - b)(0, 0) == a(0, 0) - b(0, 0));
        
        double sb = 1.2;
        ASSERT_TRUE((a - sb)(0, 0) == a(0, 0) - sb);

        double sa = 4.6;
        ASSERT_TRUE((sa - b)(0, 0) == sa - b(0, 0));
    }
    
    TEST(operation, multiply)
    {
        xshape<size_t> shape = {3, 2};
        xarray<double> a(shape, 4.5);
        xarray<double> b(shape, 1.3);
        ASSERT_TRUE((a * b)(0, 0) == a(0, 0) * b(0, 0));
        
        double sb = 1.2;
        ASSERT_TRUE((a * sb)(0, 0) == a(0, 0) * sb);

        double sa = 4.6;
        ASSERT_TRUE((sa * b)(0, 0) == sa * b(0, 0));
    }
    
    TEST(operation, divide)
    {
        xshape<size_t> shape = {3, 2};
        xarray<double> a(shape, 4.5);
        xarray<double> b(shape, 1.3);
        ASSERT_TRUE((a / b)(0, 0) == a(0, 0) / b(0, 0));
        
        double sb = 1.2;
        ASSERT_TRUE((a / sb)(0, 0) == a(0, 0) / sb);

        double sa = 4.6;
        ASSERT_TRUE((sa / b)(0, 0) == sa / b(0, 0));
    }
}
