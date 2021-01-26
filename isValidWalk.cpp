bool isValidWalk(std::vector<char> walk) {
  if (walk.size() != 10) return false;
  int n = 0;
  int e = 0;
  int s = 0; 
  int w = 0;
  for (char c : walk) {
    switch (c) {
      case 'n' : n++; break;
      case 'e' : e++; break;
      case 'w' : w++; break;
      case 's' : s++; break;
    }
  }
  return (e == w && n == s) ? true : false;
  // much happier with this syntax over my previous one.
}
