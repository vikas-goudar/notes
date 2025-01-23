#include <iostream>

namespace ns {
  class A {};
  void print(A a) {
    std::cout << "namespace ns";
  }
}

void print(ns::A a) {
  std::cout << "global";
}

int main() {
  ns::A a;
  print(a);
}
