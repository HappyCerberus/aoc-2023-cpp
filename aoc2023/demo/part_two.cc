module;

#include <algorithm>
#include <string_view>

export module part_two;

export namespace part_two {
int64_t first_time_basement(std::string_view instructions) {
    return std::distance(instructions.begin(),
    // Note, this only semi-ok. Technically, find_if requires a regular functions.
    // However, find_if is limited to last-first number of invocations, therefore it
    // cannot observe the irregularity of our predicate.
        std::ranges::find_if(instructions, [cnt = 0z](int dir) mutable {
            cnt += dir;
            if (cnt < 0) return true;
            return false;
        },
        [](char c){
            if (c == '(') return 1;
            if (c == ')') return -1;
            return 0;
        })) + 1;
}
}