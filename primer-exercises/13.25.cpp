#include <vector>
class StrBlob {
    StrBlob& operator=(const StrBlob& rhs) {
        std::vector<std::string>* new_vec = new std::vector<std::string>(rhs.data.get());
        
    }
};