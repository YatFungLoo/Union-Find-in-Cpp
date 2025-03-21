#include "union_find.hpp"

// @brief add connection between p and q.
void UnionFind::Union(int p, int q) {}

// @brief return p component id.
int UnionFind::find(int p) { return 0; }

// @brief true if connected.
bool UnionFind::connected(int p, int q) { return find(p) == find(q); }

// @brief number of components.
int UnionFind::count() { return count_; }
