/*
 * Copyright 2014 Enterome
 *
 * This file is part of count-matrix-normalizer
 *
 * sequence-translator is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * sequence-translator is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with sequence-translator. If not, see <http://www.gnu.org/licenses/>.
 */ 

#include "TimeProfiler.hh"
#include <stdexcept>

void TimeProfiler::start_new_timer(const std::string& timer_name)
{
	timers_launched_.push(std::make_pair(timer_name, std::time(NULL)));
}


void TimeProfiler::stop_last_timer()
{
	if (timers_launched_.empty())
		throw std::runtime_error("error: no timer running.");

	timer_t last_timer = timers_launched_.top();
	timers_launched_.pop();
	timers_finished_.push_back(
			std::make_pair(last_timer.first, std::time(NULL)-last_timer.second));
}

std::ostream& operator<<(std::ostream& os, const TimeProfiler& tp)
{
    os << "Time Statistics:\n";

	std::list<TimeProfiler::timer_t>::const_iterator it;
	for (it = tp.timers_finished_.begin(); it != tp.timers_finished_.end(); it++)
	{
		os << it->first << ": " << it->second/60 << " min " << it->second%60 << " sec" << '\n';
    }

	return os;
}
