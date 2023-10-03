#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

void ft_replace(std::string *text, char *src, char *dst){
	size_t pos;

	pos = text->find(src);
	while (pos != std::string::npos){
		text->erase(pos, strlen(src));
		text->insert(pos, dst);
		pos = text->find(src, pos + strlen(dst));
	}
}

int main(int argc, char **argv){
	if (argc != 4)
		return (1);
	std::ifstream infile(argv[1]);
	std::string text;
	std::string replaced;
	std::string new_name;

	new_name = argv[1];
	new_name.append(".replace");
	if (infile.is_open()){
		std::ofstream outfile(new_name.c_str());
		if (outfile.is_open()){
			std::getline(infile, text, '\0');
			ft_replace(&text, argv[2], argv[3]);
			outfile << text << std::flush;
			outfile.close();
		}
		infile.close();
	}
	else{
		return (1);
	}
	return (0);
}
