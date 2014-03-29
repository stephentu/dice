#pragma once
#include <cassert>
#include <vector>
namespace util {
template <typename T, typename Alloc>
static inline const T &
checked(const std::vector<T, Alloc> &v, size_t idx)
{
  assert(idx < v.size());
  return v[idx];
}
} // namespace util
