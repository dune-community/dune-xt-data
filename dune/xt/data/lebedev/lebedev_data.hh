#ifndef DUNE_XT_DATA_DUNE_XT_DATA_LEBEDEV_LEBEDEV_DATA_HH
#define DUNE_XT_DATA_DUNE_XT_DATA_LEBEDEV_LEBEDEV_DATA_HH

#include <array>
#include <utility>
#include <vector>

namespace Dune {
namespace GDT {
namespace internal {


template <size_t order>
struct LebedevData
{
  static void get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule);
};


} // namespace internal
} // namespace GDT
} // namespace Dune

#endif // DUNE_XT_DATA_DUNE_XT_DATA_LEBEDEV_LEBEDEV_DATA_HH
