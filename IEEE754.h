#include <bitset>
#include <bit>
#include <string>

class IEEE754 : public std::bitset<32> {
  void to_bit(float f) {
    unsigned int i = std::bit_cast<unsigned int>(f);
    for (int j = 0; j < 32; j++) {
      set(31 - j, i & 1);
      i >>= 1;
    }
  }

  void to_bit(unsigned int i) {
    for (int j = 0; j < 32; j++) {
      set(31 - j, i & 1);
      i >>= 1;
    }
  } 

  void to_bit(const std::string& s) {
    for (int i = 0; i < 32; i++) {
      set(31 - i, s[i] - '0');
    }
  }
 
 public:
  IEEE754() {}
  IEEE754(float f) {to_bit(f);}
  IEEE754(unsigned int i) {to_bit(i);}
  IEEE754(const std::string& s) {to_bit(s);}

  IEEE754 operator()(float f) {return IEEE754(f);}  
  IEEE754 operator()(unsigned int i) {return IEEE754(i);}
  IEEE754 operator()(const std::string& s) {return IEEE754(s);} 
  
};
