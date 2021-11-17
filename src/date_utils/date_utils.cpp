
// This is before C++20.

#include <sstream>

#include "date_utils/date_utils.hpp"

using namespace std::chrono;
using namespace date;
using namespace date_utils;

std::pair< std::string, date_utils::time_point_t >
date_utils::get_current_date_time() {
    auto tp_now = system_clock::now();
    auto tz_now = make_zoned( current_zone(), tp_now );

    std::string formated_str = format("%FT%TZ", tz_now);

    return { formated_str, tp_now };
}

int date_utils::time_elpased_ms( 
    const time_point_t& t0,
    const time_point_t& t1 ) {
    return duration_cast<milliseconds>( t1 - t0 ).count();
}

double date_utils::time_elapsed(
    const time_point_t& t0,
    const time_point_t& t1 ) {

    int time_ms = time_elpased_ms(t0, t1);
    return time_ms / 1000.0;
}
