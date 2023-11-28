module;

#include <algorithm>
#include <string_view>

export module part_one;

export namespace part_one {
int64_t floor(std::string_view instructions) {
    return std::ranges::fold_left(instructions, 0z, [](int64_t acc, char c) {
        if (c == '(') return ++acc;
        if (c == ')') return --acc;
        return acc;
    });
}
}