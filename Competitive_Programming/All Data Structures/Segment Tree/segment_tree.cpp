/* Arrow */

#ifdef LOST_IN_SPACE
#  if   __cplusplus > 201703LL
#    include "lost_pch1.h" // C++20
#  elif __cplusplus > 201402LL
#    include "lost_pch2.h" // C++17
#  else
#    include "lost_pch3.h" // C++14
#  endif
#else
#  include <bits/stdc++.h>
#endif

// Compile using C++20 to use segment_tree template
// g++ segment_tree.cpp -o segment_tree_range_query_sum_example -Wall -Wextra -pedantic -std=c++20 -O3

// Generic Segment Tree
// Example: Segment Tree Range Query for Sum

constexpr bool is_multitest = false;
constexpr int32_t inf32 = int32_t(1) << 30;
constexpr int64_t inf64 = int64_t(1) << 60;

namespace arrow {
  enum class tree_memory_layout {
    binary,
    euler_tour
  };

  template <
    class Type,
    tree_memory_layout impl_type = tree_memory_layout::binary
  >
  class segment_tree {
    private:
      std::vector <Type> tree;
      
      int base_size;
      const std::vector <Type>& base_ref;

      Type (*combine) (const Type&, const Type&);

    public:
      segment_tree (int base_size, const std::vector <Type>& base, Type (*combine) (const Type&, const Type&))
        : base_size (base_size),
          base_ref (base),
          combine (combine) {
        if constexpr (impl_type == tree_memory_layout::binary)
          tree.resize(4 * base_size, Type{});
        else
          tree.resize(2 * base_size, Type{});
        _build_impl(0, 0, base_size - 1);
      }

      void point_update (int position, const Type& value)
      { _point_update_impl(0, 0, base_size - 1, position, value); }

      Type point_query (int position)
      { return _point_query_impl(0, 0, base_size - 1, position); }

      Type range_query (int l, int r)
      { return _range_query_impl(0, 0, base_size - 1, l, r); }

      template <typename... ParamTypes>
      void custom_point_update (int position, const ParamTypes&... params)
      { _custom_point_update_impl(0, 0, base_size - 1, position, params...); }

      template <typename ReturnType, typename... ParamTypes>
      ReturnType custom_query (const ParamTypes&... params)
      { return _custom_query_impl <ReturnType> (0, 0, base_size - 1, params...); }

    private:
      int _get_leftchild (int v, [[maybe_unused]] int tl, [[maybe_unused]] int tr) {
        if constexpr (impl_type == tree_memory_layout::binary)
          return 2 * v + 1;
        else
          return v + 1;
      }

      int _get_rightchild (int v, [[maybe_unused]] int tl, [[maybe_unused]] int tr) {
        if constexpr (impl_type == tree_memory_layout::binary)
          return 2 * v + 2;
        else {
          int tm = (tl + tr) / 2;
          int node_count = tm - tl + 1;
          return v + 2 * node_count;
        }
      }

      void _build_impl (int v, int tl, int tr) {
        if (tl == tr) {
          tree[v] = base_ref[tl];
          return;
        }

        int tm = (tl + tr) / 2;
        int lchild = _get_leftchild(v, tl, tr);
        int rchild = _get_rightchild(v, tl, tr);

        _build_impl(lchild, tl, tm);
        _build_impl(rchild, tm + 1, tr);
        
        tree[v] = combine(tree[lchild], tree[rchild]);
      }

      void _point_update_impl (int v, int tl, int tr, int position, const Type& value) {
        if (tl == tr) {
          tree[v] = value;
          return;
        }

        int tm = (tl + tr) / 2;
        int lchild = _get_leftchild(v, tl, tr);
        int rchild = _get_rightchild(v, tl, tr);
        
        if (position <= tm)
          _point_update_impl(lchild, tl, tm, position, value);
        else
          _point_update_impl(rchild, tm + 1, tr, position, value);
        
        tree[v] = combine(tree[lchild], tree[rchild]);
      }

      Type _point_query_impl (int v, int tl, int tr, int position) {
        if (tl == tr)
          return tree[v];
        
        int tm = (tl + tr) / 2;
        int lchild = _get_leftchild(v, tl, tr);
        int rchild = _get_rightchild(v, tl, tr);
        
        if (position <= tm)
          return _point_query_impl(lchild, tl, tm, position);
        else
          return _point_query_impl(rchild, tm + 1, tr, position);
      }

      Type _range_query_impl (int v, int tl, int tr, int l, int r) {
        if (l > r)
          return {};
        
        if (tl == l and tr == r)
          return tree[v];
        
        int tm = (tl + tr) / 2;
        int lchild = _get_leftchild(v, tl, tr);
        int rchild = _get_rightchild(v, tl, tr);

        Type lval = _range_query_impl(lchild, tl, tm, l, std::min(r, tm));
        Type rval = _range_query_impl(rchild, tm + 1, tr, std::max(l, tm + 1), r);
        
        return combine(lval, rval);
      }

      void _custom_point_update_impl (int v, int tl, int tr, int position) {
        if (tl == tr) {
          throw std::runtime_error("undefined implementation");
          return;
        }

        int tm = (tl + tr) / 2;
        int lchild = _get_leftchild(v, tl, tr);
        int rchild = _get_rightchild(v, tl, tr);

        if (position <= tm)
          _custom_point_update_impl(lchild, tl, tm, position);
        else
          _custom_point_update_impl(rchild, tm + 1, tr, position);
        
        tree[v] = combine(tree[lchild], tree[rchild]);
      }

      template <typename ReturnType>
      ReturnType _custom_query_impl (int v, int tl, int tr) {
        if (tl == tr) {
          throw std::runtime_error("undefined implementation");
          return ReturnType{};
        }
        
        int tm = (tl + tr) / 2;
        int lchild = _get_leftchild(v, tl, tr);
        int rchild = _get_rightchild(v, tl, tr);

        if (true)
          return _custom_query_impl <ReturnType> (lchild, tl, tm);
        else
          return _custom_query_impl <ReturnType> (rchild, tm + 1, tr);
      }
  };
};

void solve ([[maybe_unused]] int _t) {
  std::vector <int> values = { 30, 10, 40, 80, 20 };
  int n = values.size();

  arrow::segment_tree <int> tree (n, values, [] (auto l, auto r) {
    return l + r;
  });

  // arrow::segment_tree <int, arrow::tree_memory_layout::euler_tour> tree (n, values, [] (auto l, auto r) {
  //   return l + r;
  // });

  std::cout << tree.range_query(0, n - 1) << '\n';
  std::cout << tree.range_query(1, 2) << '\n';
  std::cout << tree.range_query(4, 4) << '\n';
  std::cout << tree.range_query(2, n - 1) << '\n';
  std::cout << tree.range_query(0, 3) << '\n';
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int cases = 1;
  if (is_multitest)
    std::cin >> cases;
  for (int i = 0; i < cases; ++i)
    solve(i);

  return 0;
}
