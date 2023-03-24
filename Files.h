#ifndef FILE_DEF
#define FILE_DEF
#include <iostream>
#include <fstream>
#include <vector>
#include <dirent.h>
#include <sys/stat.h>
using namespace std;;
vector<string> get_files_list(string path);
string readfile(string filePath);
#endif
