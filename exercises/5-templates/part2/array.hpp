#ifndef CPPEX_ARRAY_HPP
#define CPPEX_ARRAY_HPP

// TODO: Add template parameters to set the data type and array size at compile
// time
template <class T, unsigned int N> class FixedSizeArray {

private:
  T data[N];

public:
  FixedSizeArray() {
    for (int i = 0; i < 10; ++i) {
      data[i] = T(); // Does this work for all data types?
    }
  }

  // TODO: Overload the [] operator to provide access to the array elements

  T &operator[](int index) { return data[index]; }

  const T &operator[](int index) const { return data[index]; }
  // TODO: Create function size() that returns the size of the array

  // TODO: Create function reduce() that sums all elements of the array

  // TODO: Create function doubleInPlace() that doubles each element of the
  // array
};

#endif
