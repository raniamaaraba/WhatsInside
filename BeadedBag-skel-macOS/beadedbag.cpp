#include <algorithm>
#include "beadedbag.h"
#include "item.h"
#include <vector>

// Implement the BeadedBag::size and BeadedBag::insert member functions here.




/*
 * BeadedBag
 *
 * size
 *
 * input: <short description of all input parameters>
 * output: <short description of all output parameters
 *          and the return value>
 */
int BeadedBag::size() {
  return bagSize.size();
}

/*
 * BeadedBag
 *
 * <short description of what the function does>
 *
 * input: <short description of all input parameters>
 * output: <short description of all output parameters
 *          and the return value>
 */
void BeadedBag::insert(Item &name){
  if (contains(name) == false)
  {
    bagSize.push_back(name);
  }  
  return;
}


// Complete the implementation of the BeadedBag::contains member function.
/*
 * BeadedBag
 *
 * <short description of what the function does>
 *
 * input: <short description of all input parameters>
 * output: <short description of all output parameters
 *          and the return value>
 */
bool BeadedBag::contains(Item maybe_contained_item) {
  for(auto item:bagSize) {
    if (item.isEqual(maybe_contained_item)) {
    return true;
    }
  }
  return false;
}