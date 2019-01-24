ADD_EXECUTABLE(acftest acftest.cc)
TARGET_LINK_LIBRARIES(acftest ctsa)

ADD_EXECUTABLE(arimatest arimatest.cc)
TARGET_LINK_LIBRARIES(arimatest ctsa)

ADD_EXECUTABLE(artest2 artest2.cc)
TARGET_LINK_LIBRARIES(artest2 ctsa)

ADD_EXECUTABLE(artest artest.cc)
TARGET_LINK_LIBRARIES(artest ctsa)

ADD_EXECUTABLE(pacftest pacftest.cc)
TARGET_LINK_LIBRARIES(pacftest ctsa)

ADD_EXECUTABLE(sarimatest sarimatest.cc)
TARGET_LINK_LIBRARIES(sarimatest ctsa)
