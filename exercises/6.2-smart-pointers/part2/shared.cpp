#include <iostream>
#include <memory>

struct A {
  void printA() { std::cout << "A struct...." << std::endl; }
};

int main() {
  // https://en.cppreference.com/w/cpp/memory/shared_ptr

  std::cout << "------------" << std::endl
            << " Create p1 " << std::endl
            << "------------" << std::endl;

  // TODO: Create a shared pointer of A called p1
  std::shared_ptr<A> p1 = std::make_shared<A>();

  // TODO: Call printA()
  p1->printA();

  // TODO: Print address of the containing pointer
  std::cout << &p1;
  std::cout << std::endl
            << "------------" << std::endl
            << " Create p2 " << std::endl
            << "------------" << std::endl;

  // TODO: Create a new shared pointer p2 that shares ownership of p1
  auto p2 = p1;

  // TODO: Call printA()
  p2->printA();
  // TODO: Print the addresses of p1 and p2

  std::cout << std::endl
            << "------------------" << std::endl
            << " Manage ownership " << std::endl
            << "------------------" << std::endl;

  // TODO: Print the use count of p1 and p2
  std::cout << p1.use_count() << " " << p2.use_count() << std::endl;

  // TODO: Look up how to relinquish ownership of a resource
  // Relinquish ownership of p1
  p2.reset();

  // TODO: Print the use count of p1 and p2
  std::cout << p1.use_count() << " " << p2.use_count() << std::endl;

  // TODO: Print the addresses of p1 and p2
  std::cout << &p1 << " " << &p2 << std::endl;
  return 0;
}
