#ifndef PAIR_H
#define PAIR_H

template <typename FirstType, typename SecondType>
class Pair {
public:
  Pair(const FirstType& a, const SecondType& b); 
  FirstType get_first() { return first; }
  SecondType get_second() { return second; } 

private:
  FirstType first;
  SecondType second;
};

template <typename FirstType, typename SecondType>
Pair<FirstType, SecondType>::Pair(const FirstType& a, const SecondType& b) {
  this->first = a;
  this->second = b;
}

template <typename FirstType, typename SecondType>
bool operator<(
  Pair<FirstType, SecondType> a,
  Pair<FirstType, SecondType> b
) {
  return a.get_first() < b.get_first();
}

template <typename FirstType, typename SecondType>
bool operator==(
  Pair<FirstType, SecondType> a,
  Pair<FirstType, SecondType> b
) {
  return a.get_first() == b.get_first();
}

template <typename FirstType, typename SecondType>
bool operator>(
    Pair<FirstType, SecondType> a,
    Pair<FirstType, SecondType> b
) {
  return a.get_first() > b.get_first();
}

#endif /* PAIR_H */