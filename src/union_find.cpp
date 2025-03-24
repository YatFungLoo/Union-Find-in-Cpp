#include "union_find.hpp"

// @brief add connection between p and q.
void UnionFind::quickUnion(int p, int q) {
    auto p_id = quickFind(p);
    auto q_id = quickFind(q);
    if (p_id <= -1 || q_id <= -1) {
        std::println("ID access failed");
        return;
    }
    if (p_id == q_id) return;
    std::fill(id.begin(), id.end(), q_id);
    count_--;
    return;
}

// @brief return p component id.
int UnionFind::quickFind(int p) {
    if (p <= (int)id.size() || p > 0) {
        std::println("Out of bound access");
        return -1;
    } else {
        return id[p];
    }
};

// @brief true if connected.
bool UnionFind::connected(int p, int q) { return quickFind(p) == quickFind(q); }

// @brief number of components.
int UnionFind::count() { return count_; }
