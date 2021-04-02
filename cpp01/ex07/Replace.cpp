#include "Replace.hpp"
#include <fstream>
#include <string>

Replace::Replace()
{

}

Replace::~Replace()
{
	
}

void Replace::sed(int argc, char *argv[])
{
	if (argc != 4)
		throw "Usage: filename s1 s2 (replacing every occurence of s1 with s2)";
	
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string line;
	std::ifstream fs;
	std::ofstream fs_seded;

	if (filename.empty() || s1.empty() || s2.empty())
		throw "args are NOT empty";
	fs.open(filename);
	fs_seded.open(filename + ".replace", std::fstream::trunc);
	if (fs.is_open() == false)
		throw "can't open filename";
	if (fs_seded.is_open() == false)
		throw "can't open filename.replace";
	
	size_t s1_size = s1.length();
	while (std::getline(fs, line))
	{
		size_t pos = line.find(s1);
		size_t head = 0;
		while (pos != std::string::npos)
		{
			fs_seded << line.substr(head, pos - head);
			fs_seded << s2;
			head = pos + s1_size;
			pos = line.find(s1, head);
		}
		if (head < line.length())
			fs_seded << line.substr(head);
		if (!fs.eof())
			fs_seded << '\n';
	}
	fs.close();
	fs_seded.close();
}
