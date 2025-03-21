#ifndef UNION_FIND_H
#define UNION_FIND_H

#include <iostream>

class UnionFind {
  public:
    UnionFind(int N_) : N(N_) {
        id.resize(N);
        for (int i = 0; i < (int)id.size(); i++)
            id[i] = i;
    }

    void Union(int p, int q);
    int find(int p);
    bool connected(int p, int q);
    int count();

  private:
    std::vector<int> id;
    int count_;
    int N;
};

#endif