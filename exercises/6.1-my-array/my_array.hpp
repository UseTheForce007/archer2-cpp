#ifndef CPPEX_MY_ARRAY_HPP
#define CPPEX_MY_ARRAY_HPP

#include <iomanip>
#include <iostream>

class my_array {

public:
  /*
  Typically these should be private.
  Making them public so we can easily test the implementation
  */
  std::string const name = "default";
  unsigned size = 0;
  double *data = nullptr;

  /* PART 1 - START HERE */

  // Default constructor
  my_array() = default;

  // Constructor
  explicit my_array(std::string name, unsigned n)
      : name(name), size(n), data(new double[n]) {
    log("Constructing");
    // TODO: Implement constructor
  }

  // Destructor
  ~my_array() {
    log("Destroying");
    // TODO: Implement destructor
    delete[] data;
  }

  /* PART 2 */

  // UNCOMMENT TO COMPLETE PART 2

  // Copy constructor
  // NOTE: Name should copy from other, but append "_cp"
  my_array(my_array const &other)
      : size(other.size), data(new double[size]), name(other.name + "_cp") {
    log("Copy constructing");
    // TODO: Implement copy constructor
    for (int i = 0; i < other.size; ++i) {
      data[i] = other.data[i];
    }
  }

  // Copy assignment operator
  // NOTE: Name should not change
  my_array &operator=(my_array const &other) {
    log("Destroying");
    // TODO: Implement copy assignment operator
    delete[] data;
    size = other.size;
    data = new double[size];
    log("Copy assigning");
    return *this;
  }

  /* PART 3 */

  // Move constructor
  // NOTE: Name should copy from other, but append "_mv"
  my_array(my_array &&other) noexcept
      : size(other.size), data(other.data), name(other.name + "_mv") {
    log("Move construct");
    // TODO: Implement move constructor

    other.size = 0;
    other.data = nullptr;
  }

  // Move assignment operator
  // NOTE: Name should not change
  my_array &operator=(my_array &&other) noexcept {
    // TODO: Implement move assignment operator
    log("Move assign");
    name = other.name;
    std::swap(size, other.size);
    std::swap(data, other.data);
  }

  /* END */

  double &operator[](unsigned i) const { return data[i]; }

private:
  void log(std::string label) {
/* Helper method to log current status of the object */
#ifndef MY_ARRAY_NO_LOGGING
    std::cout << std::setw(17) << label << ": " << std::setw(9) << data << " ["
              << name << "] " << std::endl;
#endif
  }
};

#endif
