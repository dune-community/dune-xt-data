#ifndef DUNE_XT_DATA_DUNE_XT_DATA_GAUSSLOBATTO_GAUSSLOBATTO_DATA_HH
#define DUNE_XT_DATA_DUNE_XT_DATA_GAUSSLOBATTO_GAUSSLOBATTO_DATA_HH

#include <array>
#include <utility>
#include <vector>

namespace Dune {
namespace XT {
namespace Data {
namespace internal {


template <size_t numQuadPoints>
struct GaussLobattoData
{
  // This vector contains the pairs (x_i, w_i). The positions x are in [-1, 1] and the weights thus sum up to 2.
  static std::vector<std::vector<double>> get();
};


} // namespace internal
} // namespace Data
} // namespace XT
} // namespace Dune

#endif // DUNE_XT_DATA_DUNE_XT_DATA_GAUSSLOBATTO_GAUSSLOBATTO_DATA_HH
