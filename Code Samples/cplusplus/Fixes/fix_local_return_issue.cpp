#include <bits/stdc++.h>

int *read_vector(std::vector<int> &vec)
{
    int arr[vec.size()];
    std::copy(vec.begin(), vec.end(), arr);
    return arr;
}

int main(void)
{
    std::vector<int> vec = {7, 45, 22, 96, 44};
    auto arr = read_vector(vec);
    std::cout << arr[0] << std::endl;
}


// This code has a bug. Can you fix it?

/*
When run with g++ and -fsanitize=address flag.
AddressSanitizer:DEADLYSIGNAL
=================================================================
==14256==ERROR: AddressSanitizer: SEGV on unknown address 0x000000000000 (pc 0x56161e0f7716 bp 0x0fff8be34980 sp 0x7ffc5f1a4be0 T0)
==14256==The signal is caused by a READ memory access.
==14256==Hint: address points to the zero page.
    #0 0x56161e0f7715 in main (/home/mlc655/codeGress/code.out+0x1715)
    #1 0x7f175017f0b2 in __libc_start_main (/lib/x86_64-linux-gnu/libc.so.6+0x270b2)
    #2 0x56161e0f792d in _start (/home/mlc655/codeGress/code.out+0x192d)

AddressSanitizer can not provide additional info.
SUMMARY: AddressSanitizer: SEGV (/home/mlc655/codeGress/code.out+0x1715) in main
==14256==ABORTING
*/
