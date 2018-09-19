// This file is part of the dune-gdt project:
//   https://github.com/dune-community/dune-gdt
// Copyright 2010-2017, dune-gdt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2017)

#include "../gausslobatto_data.hh"

namespace Dune {
namespace XT {
namespace Data {
namespace internal {


template <>
std::vector<std::vector<double>> GaussLobattoData<90>::get()
{
  return {{-1, 2.496878901373283395755E-4},
          {-0.9990836624083021034399, 0.00153876904069478790129},
          {-0.9969292596945179650486, 0.0027693321909186197771},
          {-0.993546313407523700814, 0.00399583711810954913963},
          {-0.9889392534324080884527, 0.0052173305404752013789},
          {-0.983113801946445082433, 0.006432374205385298899},
          {-0.9760771490887129301174, 0.00763948573230868162},
          {-0.9678379688858874207563, 0.008837182356578174568},
          {-0.958406414125511082663, 0.0100239901509635387543},
          {-0.9477941055070421119423, 0.01119844767233971175018},
          {-0.936014117923373020864, 0.012359108327817702628},
          {-0.9230809645996263071144, 0.013504542361621505248},
          {-0.909010579325975634239, 0.0146333386999835192107},
          {-0.8938202968833891283819, 0.0157441067269313284556},
          {-0.877528831716980722261, 0.0168354780155486808092},
          {-0.8601562548965217874941, 0.0179061080231321391246},
          {-0.8417239693987041280282, 0.0189546777526741518803},
          {-0.8222546837446907421399, 0.0199798953806981842587},
          {-0.8017723840270470732701, 0.0209804978504478248355},
          {-0.7803023043613988753786, 0.0219552524289817604593},
          {-0.7578708957997226685548, 0.02290295822653088364606},
          {-0.7345057937438632370477, 0.023822447676397862437},
          {-0.7102357838996039512394, 0.02471258797366314908},
          {-0.6850907668133460973195, 0.025572282470976441631},
          {-0.6591017210351591808869, 0.026400472029745222368},
          {-0.6323006649536316697007, 0.0271961363250751228014},
          {-0.6047206173495724027794, 0.02795829510286676235634},
          {-0.5763955567171812772953, 0.0286860093875283117817},
          {-0.547360379402819769749, 0.0293783826388211572728},
          {-0.517650856612964217273, 0.0300345618564169753999},
          {-0.4873035903443150107529, 0.0306537386308078216526},
          {-0.4563559682903607355952, 0.0312351501392761840036},
          {-0.4248461177799558968997, 0.031778080085699139507},
          {-0.3928128588046624325522, 0.0322818595830296083443},
          {-0.3602956561927271520465, 0.03274586797736808701563},
          {-0.327334570988618071491, 0.0331695336126100390493},
          {-0.2939702110980209931624, 0.0335523345347272165312},
          {-0.260243681259102355776, 0.033893799134815473871},
          {-0.226196532401674217151, 0.034193506730117014933},
          {-0.1918707104566511825642, 0.0344510880823013862602},
          {-0.1573085046788662173096, 0.034666225852366793855},
          {-0.1225524955469117369563, 0.0348386549916013803304},
          {-0.0876455023041934081151, 0.0349681630681228548174},
          {-0.052630530205826069271, 0.0350545905285942210825},
          {-0.0175507175363635473923, 0.03509783089479320093507},
          {0.0175507175363635473923, 0.0350978308947932009351},
          {0.052630530205826069271, 0.035054590528594221082},
          {0.0876455023041934081151, 0.034968163068122854817},
          {0.122552495546911736956, 0.0348386549916013803304},
          {0.1573085046788662173096, 0.034666225852366793855},
          {0.1918707104566511825642, 0.03445108808230138626},
          {0.2261965324016742171509, 0.034193506730117014933},
          {0.2602436812591023557761, 0.033893799134815473871},
          {0.2939702110980209931624, 0.0335523345347272165312},
          {0.3273345709886180714908, 0.0331695336126100390493},
          {0.3602956561927271520465, 0.032745867977368087016},
          {0.3928128588046624325522, 0.0322818595830296083443},
          {0.4248461177799558968997, 0.031778080085699139507},
          {0.456355968290360735595, 0.0312351501392761840036},
          {0.4873035903443150107529, 0.0306537386308078216526},
          {0.5176508566129642172735, 0.0300345618564169753999},
          {0.5473603794028197697487, 0.0293783826388211572728},
          {0.5763955567171812772953, 0.0286860093875283117817},
          {0.6047206173495724027794, 0.0279582951028667623563},
          {0.632300664953631669701, 0.0271961363250751228014},
          {0.6591017210351591808869, 0.0264004720297452223683},
          {0.68509076681334609732, 0.025572282470976441631},
          {0.7102357838996039512394, 0.02471258797366314908},
          {0.7345057937438632370477, 0.023822447676397862437},
          {0.757870895799722668555, 0.022902958226530883646},
          {0.7803023043613988753786, 0.021955252428981760459},
          {0.8017723840270470732701, 0.020980497850447824836},
          {0.8222546837446907421399, 0.0199798953806981842587},
          {0.8417239693987041280282, 0.01895467775267415188},
          {0.8601562548965217874941, 0.017906108023132139125},
          {0.877528831716980722261, 0.0168354780155486808092},
          {0.8938202968833891283819, 0.01574410672693132845563},
          {0.909010579325975634239, 0.014633338699983519211},
          {0.9230809645996263071144, 0.013504542361621505248},
          {0.9360141179233730208638, 0.0123591083278177026277},
          {0.9477941055070421119423, 0.0111984476723397117502},
          {0.9584064141255110826632, 0.01002399015096353875432},
          {0.9678379688858874207563, 0.0088371823565781745678},
          {0.9760771490887129301174, 0.0076394857323086816201},
          {0.983113801946445082433, 0.006432374205385298899},
          {0.9889392534324080884527, 0.0052173305404752013789},
          {0.993546313407523700814, 0.00399583711810954914},
          {0.9969292596945179650486, 0.0027693321909186197771},
          {0.9990836624083021034399, 0.001538769040694787901},
          {1, 2.496878901373283395755E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
