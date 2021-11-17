#ifndef __DATA_UTILS_DATA_UTILS_HPP__
#define __DATA_UTILS_DATA_UTILS_HPP__

#include <chrono>
#include <string>

#include <date/tz.h>

namespace date_utils
{

typedef std::chrono::time_point<std::chrono::system_clock> time_point_t;

std::pair< std::string, std::chrono::time_point<std::chrono::system_clock> >
get_current_date_time();

int time_elpased_ms( const time_point_t& t0, const time_point_t& t1 );
double time_elapsed( const time_point_t& t0, const time_point_t& t1 );

} // namespace date_utils

#endif /* __DATA_UTILS_DATA_UTILS_HPP__ */
