#include <array>
#include <utility>
#include <vector>

namespace Dune {
namespace GDT {
namespace Hyperbolic {
namespace Problems {
namespace internal {


template <size_t order>
struct LebedevData
{
  static void get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule);
};


} // namespace internal
} // namespace Problems
} // namespace Hyperbolic
} // namespace GDT
} // namespace Dune
