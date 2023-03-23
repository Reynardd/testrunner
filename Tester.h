#ifndef TESTER_DEF
#define TESTER_DEF
#include <vector>
#include <iostream>
using namespace std;
string execute(string command);
bool run_test(string appName,string testPath);
vector<bool> run_all_tests(string appName,string path);
#endif
