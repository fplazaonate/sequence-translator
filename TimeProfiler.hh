#ifndef TIME_PROFILER_HH
#define TIME_PROFILER_HH

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

#include <string>
#include <ctime>
#include <utility>
#include <stack>
#include <list>
#include <iostream>

class TimeProfiler {
    private:
		typedef std::pair<std::string, std::time_t> timer_t;
		std::stack<timer_t> timers_launched_;
		std::list<timer_t> timers_finished_;

    public:
        void start_new_timer(const std::string& timer_name);
        void stop_last_timer();

        friend std::ostream& operator<<(std::ostream& os, const TimeProfiler& tp);
};

#endif // TIME_PROFILER_HH
