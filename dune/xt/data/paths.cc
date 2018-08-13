#include <config.h>

#include <boost/filesystem.hpp>

namespace Dune {
namespace XT {
namespace Data {

boost::filesystem::path basedir()
{
    return boost::filesystem::path(dxt_data_basedir);
}

std::string spe10_model1_filename()
{
    return (basedir() / "perm_case1.dat").string();
}
std::string spe10_model2_filename()
{
    return (basedir() / "spe_perm.dat").string();
}

} // namespace Data
} // namespace XT
} // namespace Dune
