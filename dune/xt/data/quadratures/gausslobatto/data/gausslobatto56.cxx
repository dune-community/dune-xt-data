// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)
//
// This file is part of the dune-gdt project:

#include "../gausslobatto_data.hh"

namespace Dune::XT::Data {


template <>
std::vector<std::vector<double>> GaussLobattoData<56>::get()
{
  return {{-1, 6.493506493506493506494E-4},
          {-0.9976175097907241404918, 0.0039998421051063664032},
          {-0.9920206245418629131711, 0.0071902581429929796837},
          {-0.983245135296447322982, 0.0103559594032684981353},
          {-0.971319834891684551315, 0.01348825649109884716},
          {-0.9562830443137146402921, 0.016577289173990204195},
          {-0.938182965406848560786, 0.019613200257610404117},
          {-0.9170775909964991642672, 0.0225862762578625872767},
          {-0.8930345336057936066406, 0.025486997771695898439},
          {-0.8661308131988117903427, 0.0283060747406840412701},
          {-0.8364526120236492895384, 0.0310344776846312036546},
          {-0.8040949991900753107486, 0.0336634671597787555329},
          {-0.7691616264302471774471, 0.036184621971786739089},
          {-0.731764396217919324374, 0.0385898662489897199908},
          {-0.692023103389059096091, 0.0408714953590221795701},
          {-0.650065051446553175294, 0.043022200613337808519},
          {-0.6060246447943240219977, 0.0450350926922879057801},
          {-0.5600429582151251989369, 0.046903723721137408324},
          {-0.5122672849753372132892, 0.0486221079289369507291},
          {-0.4628506650066376555542, 0.05018474082542141271171},
          {-0.411951394677242021577, 0.0515866168352247802681},
          {-0.359732519723843995454, 0.0528232453333224242516},
          {-0.3063613129690202514352, 0.0538906650305630632082},
          {-0.2520087384974242929647, 0.05478545666334415625138},
          {-0.196848904007364539339, 0.0555047539468635513763},
          {-0.1410585030921749439567, 0.0560462527569113006189},
          {-0.0848162492380040373591, 0.0564082185108212486463},
          {-0.02830230335115774696085, 0.0565894917239589154476},
          {0.0283023033511577469609, 0.0565894917239589154476},
          {0.0848162492380040373591, 0.056408218510821248646},
          {0.1410585030921749439567, 0.056046252756911300619},
          {0.1968489040073645393386, 0.0555047539468635513763},
          {0.2520087384974242929647, 0.0547854566633441562514},
          {0.306361312969020251435, 0.0538906650305630632082},
          {0.359732519723843995454, 0.0528232453333224242516},
          {0.411951394677242021577, 0.051586616835224780268},
          {0.4628506650066376555542, 0.050184740825421412712},
          {0.5122672849753372132892, 0.04862210792893695072909},
          {0.5600429582151251989369, 0.046903723721137408324},
          {0.6060246447943240219977, 0.04503509269228790578},
          {0.6500650514465531752939, 0.043022200613337808519},
          {0.6920231033890590960912, 0.04087149535902217957},
          {0.7317643962179193243738, 0.03858986624898971999083},
          {0.7691616264302471774471, 0.036184621971786739089},
          {0.8040949991900753107486, 0.033663467159778755533},
          {0.8364526120236492895384, 0.031034477684631203655},
          {0.8661308131988117903427, 0.02830607474068404127007},
          {0.8930345336057936066406, 0.025486997771695898439},
          {0.9170775909964991642672, 0.022586276257862587277},
          {0.9381829654068485607862, 0.01961320025761040411692},
          {0.9562830443137146402921, 0.016577289173990204195},
          {0.971319834891684551315, 0.0134882564910988471602},
          {0.983245135296447322982, 0.0103559594032684981353},
          {0.9920206245418629131711, 0.0071902581429929796837},
          {0.9976175097907241404918, 0.0039998421051063664032},
          {1, 6.493506493506493506494E-4}};
}


} // namespace Dune::XT::Data
