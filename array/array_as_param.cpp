#include <array>

float avg(float rgb[3])
{
    return (rgb[0]+rgb[1]+rgb[2])/3;
}

float avg(std::array<float,3> &rgb)
{
    ;
}

int main()
{
    float rgb[3] = {2.0, 3.0, 4.5};
    float rgb_false[4] = {2.3,4.6,5.0,6.7};
    std::array<float,3> rgb_std({2.0,3.0,4.5});
    std::array<float,4> rgb_std2({2.0,3.0,4.5,6.0});
    float res_1 = avg(rgb);
    float res_2 = avg(rgb_false); // no warning here.
    float res_3 = avg(rgb_std);
    // float res_4 = avg(rgb_std2); // error here. c++ 11 arrays will have distinct types.
    return 0;
}