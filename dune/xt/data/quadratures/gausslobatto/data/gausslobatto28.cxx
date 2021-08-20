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
std::vector<std::vector<double>> GaussLobattoData<28>::get()
{
  return {{-1, 0.002645502645502645502646},
          {-0.9903054026184541255171, 0.016255883957504218199},
          {-0.9676242858571313043438, 0.0290542206779791447069},
          {-0.9323251671215585249261, 0.041466915243006721038},
          {-0.8848710172113028384123, 0.0533380770473274884},
          {-0.8258809700563381960445, 0.06451365808035453839025},
          {-0.7561241940055697651521, 0.0748481235097077027806},
          {-0.6765101289295733177194, 0.0842067951215103257395},
          {-0.5880766898371756064783, 0.092467685997712175722},
          {-0.4919767539315793804296, 0.0995231104124956728759},
          {-0.3894631375763628079359, 0.1052810937610558944824},
          {-0.2818722666216023719542, 0.1096665737959766250886},
          {-0.1706067553080043608827, 0.112622380077239012541},
          {-0.0571171216935128976265, 0.1141099796726278345333},
          {0.05711712169351289762654, 0.114109979672627834533},
          {0.170606755308004360883, 0.1126223800772390125406},
          {0.281872266621602371954, 0.1096665737959766250886},
          {0.3894631375763628079359, 0.1052810937610558944824},
          {0.4919767539315793804296, 0.0995231104124956728759},
          {0.5880766898371756064783, 0.092467685997712175722},
          {0.6765101289295733177194, 0.08420679512151032573949},
          {0.7561241940055697651521, 0.0748481235097077027806},
          {0.8258809700563381960445, 0.0645136580803545383902},
          {0.8848710172113028384123, 0.05333807704732748840033},
          {0.9323251671215585249261, 0.041466915243006721038},
          {0.9676242858571313043438, 0.02905422067797914470685},
          {0.9903054026184541255171, 0.01625588395750421819899},
          {1, 0.002645502645502645502646}};
}


} // namespace Dune::XT::Data
