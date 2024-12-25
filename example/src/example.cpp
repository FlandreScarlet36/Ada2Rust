#include <climits>
#include <string>
class AdaInteger {
private:
  int value;

public:
  static AdaInteger Last;
  AdaInteger() = default;
  AdaInteger(int _value) : value(_value){};
  AdaInteger operator-() { return AdaInteger(-value); }
  friend AdaInteger operator+(AdaInteger &_left, AdaInteger &_right) {
    return AdaInteger(_left.value + _right.value);
  }
  friend AdaInteger operator+(AdaInteger &_left, int _right) {
    return AdaInteger(_left.value + _right);
  }
  friend AdaInteger operator-(AdaInteger &_left, AdaInteger &_right) {
    return AdaInteger(_left.value - _right.value);
  }
  friend AdaInteger operator-(AdaInteger &_left, int _right) {
    return AdaInteger(_left.value - _right);
  }
  friend bool operator>(AdaInteger &_left, AdaInteger &_right) {
    return _left.value > _right.value;
  }
  friend bool operator>(AdaInteger &_left, int _right) {
    return _left.value > _right;
  }
  friend bool operator<(AdaInteger &_left, AdaInteger &_right) {
    return _left.value < _right.value;
  }
  friend bool operator<(AdaInteger &_left, int _right) {
    return _left.value < _right;
  }
  friend bool operator==(AdaInteger &_left, AdaInteger &_right) {
    return _left.value == _right.value;
  }
  friend bool operator==(AdaInteger &_left, int _right) {
    return _left.value == _right;
  }
  friend bool operator!=(AdaInteger &_left, AdaInteger &_right) {
    return _left.value != _right.value;
  }
  friend bool operator!=(AdaInteger &_left, int _right) {
    return _left.value != _right;
  }
  friend bool operator<=(AdaInteger &_left, AdaInteger &_right) {
    return _left.value <= _right.value;
  }
  friend bool operator<=(AdaInteger &_left, int _right) {
    return _left.value <= _right;
  }
  friend bool operator>=(AdaInteger &_left, AdaInteger &_right) {
    return _left.value >= _right.value;
  }
  friend bool operator>=(AdaInteger &_left, int _right) {
    return _left.value >= _right;
  }
  static std::string Image(AdaInteger I) { return std::to_string(I.value); }
};
AdaInteger AdaInteger::Last = AdaInteger(INT_MAX);
class AdaNatural {
private:
  int value;
public:
  AdaNatural() = default;
  AdaNatural(int _value) : value(_value) {};
  AdaNatural operator-() {
    return AdaNatural(-value);
  }
  friend AdaNatural operator+(AdaNatural& _left, AdaNatural& _right) {
    return AdaNatural(_left.value + _right.value);
  }
  friend AdaNatural operator+(AdaNatural& _left, int _right) {
    return AdaNatural(_left.value + _right);
  }
  friend AdaNatural operator-(AdaNatural& _left, AdaNatural& _right) {
    return AdaNatural(_left.value - _right.value);
  }
  friend AdaNatural operator-(AdaNatural& _left, int _right) {
    return AdaNatural(_left.value - _right);
  }
  friend bool operator>(AdaNatural& _left, AdaNatural& _right) {
    return _left.value > _right.value;
  }
  friend bool operator>(AdaNatural& _left, int _right) {
    return _left.value > _right;
  }
  friend bool operator<(AdaNatural& _left, AdaNatural& _right) {
    return _left.value < _right.value;
  }
  friend bool operator<(AdaNatural& _left, int _right) {
    return _left.value < _right;
  }
  friend bool operator==(AdaNatural& _left, AdaNatural& _right) {
    return _left.value == _right.value;
  }
  friend bool operator==(AdaNatural& _left, int _right) {
    return _left.value == _right;
  }
  friend bool operator!=(AdaNatural& _left, AdaNatural& _right) {
    return _left.value != _right.value;
  }
  friend bool operator!=(AdaNatural& _left, int _right) {
    return _left.value != _right;
  }
  friend bool operator<=(AdaNatural& _left, AdaNatural& _right) {
    return _left.value <= _right.value;
  }
  friend bool operator<=(AdaNatural& _left, int _right) {
    return _left.value <= _right;
  }
  friend bool operator>=(AdaNatural& _left, AdaNatural& _right) {
    return _left.value >= _right.value;
  }
  friend bool operator>=(AdaNatural& _left, int _right) {
    return _left.value >= _right;
  }
};
#include <string>
class AdaString {
private:
  std::string value;

public:
  AdaString() = default;
  AdaString(std::string _value) : value(_value){};
  AdaString(const char *_value) { value = std::string(_value); };
  AdaString(const AdaString &a) { value = a.getValue(); };
  std::string getValue() const { return value; }
  void setValue(std::string _value) { value = _value; }
  friend AdaString operator+(AdaString &_left, AdaString &_right) {
    return AdaString(_left.value + _right.value);
  }
  friend AdaString operator+(AdaString &_left, std::string _right) {
    return AdaString(_left.value + _right);
  }
};

 class example {
 private:
    static AdaInteger I;

 public:
    static void main() {
        while(true) {
            const AdaString Name = "Num is: " + AdaInteger::Image(I);
            if(I == 4) {
                break;
            }
            I = I + 1;
        }
    }
 };
AdaInteger example::I = 1;
