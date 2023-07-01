/**
 *  main.cpp
 */

#include "iostream"
#include "../include/HTTPLib/httplib.h"

int main() {
    httplib::Client cli("https://ptsv3.com/t");
    cli.Post("tada");
    return 0;
}

