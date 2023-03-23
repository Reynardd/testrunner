#ifndef FILE_DEF
#define FILE_DEF
#include <iostream>
#include <fstream>
#include <vector>
#include <filesystem>
using namespace std;
using namespace filesystem;
vector<string> get_files_list(string path);
string readfile(string filePath);
#endif
