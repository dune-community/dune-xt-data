#include <config.h>

#include <boost/filesystem.hpp>

namespace Dune {
namespace XT {
namespace Data {

boost::path basedir()
{
    return boost::path(dxt_data_basedir);
}

static inline std::string spe10_model1_filename()
{
    return basedir() / "perm_case1.dat";
}
static inline std::string spe10_model2_filename()
{
    return basedir() / "spe_perm.dat";
}

} // namespace Data
} // namespace XT
} // namespace Dune
