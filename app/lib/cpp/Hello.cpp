#include "Hello.h"
#include <vector>

namespace app {
  std::string Hello::sayHello() const {
    std::vector<std::string> strs = {"Hello", "from", "C++"};
    std::string result;
    for(auto const& s: strs) { result += s+ " "; };
    return result;
  }
}
