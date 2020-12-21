cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11  -pthread" )
# set the POCO paths and libs
set(POCO_PREFIX      "/usr") # the directory containing "include" and "lib"
set(POCO_INCLUDE_DIR "${POCO_PREFIX}/include")
set(POCO_LIB_DIR     "${POCO_PREFIX}/lib")
# message(WARNING ${POCO_LIB_DIR})
set(POCO_LIBS        
                    # "${POCO_LIB_DIR}/libPocoNet.so"
                    # "${POCO_LIB_DIR}/libPocoUtil.so"
                    # "${POCO_LIB_DIR}/libPocoJSON.so"
                    # "${POCO_LIB_DIR}/libPocoXML.so"
                    "${POCO_LIB_DIR}/libPocoFoundation.so")
                    # "${POCO_LIB_DIR}/libPocoODBC.so.9")
                    # "${POCO_LIB_DIR}/libPocoCrypto.so"
                    # "${POCO_LIB_DIR}/libPocoNet.so"
                    #  "${POCO_LIB_DIR}/libPocoData.so"
                    #  "${POCO_LIB_DIR}/libPocoNetSSL.so"
                    #  "${POCO_LIB_DIR}/libPocoSQLite.so"
                    #  "${POCO_LIB_DIR}/libPocoUtil.so"
                    #  "${POCO_LIB_DIR}/libPocoNet.so"
                    #  "${POCO_LIB_DIR}/libPocoZip.so"

include_directories(
    ./
    ${POCO_INCLUDE_DIR}
)
add_library(PluginLibrary SHARED PluginLibrary.cc)
add_executable(main main.cc)
target_link_libraries(main ${POCO_LIBS})