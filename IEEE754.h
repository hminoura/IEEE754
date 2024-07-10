#include <bitset>
#include <bit>
#include <string>

class IEEE754 : public std::bitset<32> {
 public:
  IEEE754() {}
  IEEE754(float f) {set(f);}
  IEEE754(unsigned int i) {set(i);}
  //  IEEE754(const std::string& s) {set(s);}

  void set(float f) {
    *this = std::bitset<32>(std::bit_cast<unsigned int>(f));
  }
 
  void set(unsigned int i) {
    //    std::bitset<32>(i);
  }
  
  //  void set(const std::string& s ){
  //    std::bitset<32>(s);
  //  }
};
