#include<iostream>
#include<ranges>

#include "include.hpp"

import system
alias str to string;

gen(type T) fun concat(T a) is
    ret(a)

gen(type... T)
fun concat(str a, T... b) is
    ret(a+concat(b...))

gen(type... T)
fun _print(T... args) is
    (cout << ... << args) << endl
    end

fun add(arg x, arg y) is
    ret(x + y)

fun fibonacci(arg n) is
    var a = 0
    var b = 1
    for i in range(0, n) do
        val tmp = a
        ass a to b
        ass b to tmp + b
    done
    ret(a)

main
    var i = 0
    while i neq 10 do
        inc i
        print("i = ",i)
    done

    print("Hello"," ","World")
    print(fibonacci(10))

    val a = 2
    switch(a)
        case(1)
            print("A równe 1")
        case(2)
            print("A równe 2")
        default
            print("A nie równe ani 1 ani 2")
        endswitch
    end
