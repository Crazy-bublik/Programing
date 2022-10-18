#include <iostream>
//вариант №7 - N=17

long long int str2int(const char *str) {
    long long int result;
    if (str == nullptr || *str == '\0') {
        exit(-1);
    }
    bool is_negative = (str[0] == '-');
    if (*str == '+' || *str == '-') {
        ++str;
    }
    if (*str == '0' && *(++str) == 'x') {
        ++str;
    }
    if (*str == '\0') {
        exit(-1);
    }
    result =0;
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            result = result * 16 + (*str - '0');
        }
        else if (*str >='A' && *str <='F') {
            result = result * 16 + (*str - '7');
        } else if (*str >='a' && *str <= 'f') {
            result = result * 16 + (*str - 'W');
        } else {
            exit(-1);
        }
        ++str;
    }
    return (is_negative) ? result * -1: result;
}
int main(int argc, char *argv[]) {
    for ( int count{1} ; count < argc ; ++count) {
        std::cout << str2int(argv[argc-count])+100+17<<'\n';
    }
    return 0;
}

