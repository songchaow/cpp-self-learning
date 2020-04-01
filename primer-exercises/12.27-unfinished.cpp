#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>
class TextQuery {
public:
    TextQuery(std::istream& s) {
        std::string l;
        int line = 0;
        while(getline(s,l)) {
            lines.push_back(l);
            std::istringstream wordstream(l);
            std::string word;
            while(wordstream >> word) {
                if(search_map.find(word)!=search_map.end())
                    search_map[word].insert(line);
                else
                    search_map[word] = std::set<int>({line});
            }
            line++;
        }
    }
private:
    std::vector<std::string> lines;
    std::map<std::string,std::set<int>> search_map;
};

int main()
{
    return 0;
}