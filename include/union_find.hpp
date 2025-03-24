#ifndef UNION_FIND_H
#define UNION_FIND_H

#include <algorithm>
#include <iostream>

class UnionFind {
  public:
    UnionFind(int N) { id.resize(N, -1); }
    UnionFind(double N) = delete;

    void quickUnion([[maybe_unused]] int p, [[maybe_unused]] int q);
    int quickFind([[maybe_unused]] int p);
    bool connected(int p, int q);
    int count();

  private:
    std::vector<int> id;
    int count_;
};

#endif // UNION_FIND_H