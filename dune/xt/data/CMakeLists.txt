# install headers
install(FILES paths.hh DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/dune/xt/data)

file(MAKE_DIRECTORY "${DXT_DATA_BASEDIR}")
add_custom_command(OUTPUT ${DXT_DATA_BASEDIR}/spe_perm.dat ${DXT_DATA_BASEDIR}/spe_phi.dat
                   COMMAND ${CMAKE_COMMAND} -E tar xzf "${CMAKE_CURRENT_SOURCE_DIR}/por_perm_case2a.zip"
                   WORKING_DIRECTORY "${DXT_DATA_BASEDIR}"
                   COMMENT "Unpacking por_perm_case2a.zip"
                   VERBATIM)

add_custom_command(OUTPUT ${DXT_DATA_BASEDIR}/perm_case1.dat
                   COMMAND ${CMAKE_COMMAND} -E tar xzf "${CMAKE_CURRENT_SOURCE_DIR}/perm_case1.zip"
                   WORKING_DIRECTORY "${DXT_DATA_BASEDIR}"
                   COMMENT "Unpacking perm_case1.zip.zip"
                   VERBATIM)

add_custom_target(unpack_data
                  DEPENDS ${DXT_DATA_BASEDIR}/spe_perm.dat ${DXT_DATA_BASEDIR}/spe_phi.dat
                          ${DXT_DATA_BASEDIR}/perm_case1.dat)

dune_add_library(dxt_data paths.cc)
# make sure data is unpacked for downstream modules
add_dependencies(dxt_data unpack_data)

add_subdirectory(matrix_exponential)
add_subdirectory(lebedev)
add_subdirectory(test)
