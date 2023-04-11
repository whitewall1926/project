#include<iostream>
#include "json.h"
#include "parser.h"
#include <fstream>
#include<sstream>
using namespace yazi:: json;

int main() {
   std::ifstream fin("./test.json"); 
    std::stringstream ss;
    ss << fin.rdbuf();
    const std::string &str = ss.str();
    Json v;
    v.parse(str);
    auto it = v["tasks"][0]["type"];
    std::cout << it.str();
    return 0;
}