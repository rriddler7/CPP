#include "iostream"
#include "fstream"

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	if (argc != 4)
	{
		std::cout << "Incorrect arguments!" << std::endl;
		exit (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream ifs(filename);
	if (ifs.is_open())
	{
		std::ofstream ofs(filename + ".replace");
		if (ofs.is_open())
		{
			std::string line;
			size_t pos;
			while (std::getline(ifs, line))
			{
				pos = line.find(s1, 0);
				while (pos != std::string::npos)
				{
					line.erase(pos, s1.size());
					line.insert(pos, s2);
					pos = line.find(s1, pos + s2.size());
				}
				ofs << line << std::endl;
			}
			ofs.close();
		}
		else
		{
			std::cout << "File do not create!" << std::endl;
			exit(3);
		}
		ifs.close();
	}
	else if (!ifs.is_open())
	{
		std::cout << "File do not open!" << std::endl;
		exit(2);
	}
	return (0);
}
