#include<vector>

bool isValidWalk(std::vector<char> walk) {
  if (walk.size() != 10) {
    return false;
  }
  //if count(s) == count(n), count(e) == count(w) then true
  int eCount = 0;
  int wCount = 0;
  int nCount = 0;
  int sCount = 0;
  for (int i = 0; i < 10; ++i) {
    if (walk[i] == 'e') {
      eCount++;
    }
    else if (walk[i] == 'w') {
      wCount++;
    }
    else if (walk[i] == 'n') {
      nCount++;
    }
    else if (walk[i] == 's') {
      sCount++;
    }
  }
  return (eCount == wCount && nCount == sCount) ? true : false;
}
