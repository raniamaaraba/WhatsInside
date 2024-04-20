#include <string>
#include "item.h"
#include <iostream>


/*
 * Item
 *
 * assigns the read in item to m_name
 *
 * input: item_name
 * output: assigns to m_name
 */
Item::Item(const std::string &item_name): m_name(item_name) {
}

/*
 * getName
 *
 * gets the name of an item from the user
 *
 * input: Item
 * output: returns the name of the item
 */
std::string Item::getName() {
  return m_name;
}
/*
 * isEqual
 *
 * checks if two items are the same
 *
 * input: Item and other_item
 * output: false if they are not the same
 */
bool Item::isEqual(Item other_item) {
  if(getName() == other_item.getName()){
    return true;
  }
  return false;
}